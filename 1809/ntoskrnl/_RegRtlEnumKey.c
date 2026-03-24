/*
 * XREFs of _RegRtlEnumKey @ 0x1406F97C8
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x1406EA66C (_CmGetDeviceContainerIdFromBase.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406FA548 (_PnpGetGenericStorePropertyKeys.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070DC3C (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegEnumKey @ 0x14073C390 (_PnpCtxRegEnumKey.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14074BB6C (_RegRtlEnumKeyWithCallback.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x14082ADAC (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiCMDeleteDeviceKey @ 0x14083758C (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140837C7C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D7E8 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083DD8C (PiDrvDbOverlayNodeHive.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1408F8FC8 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _RegRtlCopyTreeInternal @ 0x140900500 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x1401B87D0 (ZwEnumerateKey.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumKey(void *a1, ULONG a2, unsigned int *a3, unsigned int *a4)
{
  HANDLE v4; // rax
  unsigned int *v7; // r15
  unsigned int v8; // esi
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  ULONG Length; // r12d
  unsigned int *p_KeyInformation; // rbp
  NTSTATUS v14; // eax
  unsigned int *v15; // r8
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  ULONG v20; // r12d
  unsigned int *PoolWithTag; // rax
  NTSTATUS v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-C8h] BYREF
  ULONG Index; // [rsp+34h] [rbp-C4h]
  HANDLE KeyHandle; // [rsp+38h] [rbp-C0h]
  char KeyInformation; // [rsp+40h] [rbp-B8h] BYREF

  v4 = a1;
  KeyHandle = a1;
  Index = a2;
  v7 = 0LL;
  v8 = -1;
  if ( a3 )
  {
    v9 = -1;
    v10 = 2LL * *a4;
    if ( v10 <= 0xFFFFFFFF )
      v9 = 2 * *a4;
    v11 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v10 > 0xFFFFFFFF )
      return v11;
    v4 = KeyHandle;
  }
  else
  {
    v9 = 0;
  }
  Length = 96;
  if ( v9 > 0x60 )
  {
    p_KeyInformation = a3;
    Length = v9;
  }
  else
  {
    p_KeyInformation = (unsigned int *)&KeyInformation;
  }
  v14 = ZwEnumerateKey(v4, a2, KeyBasicInformation, p_KeyInformation, Length, &ResultLength);
  v11 = v14;
  if ( !v14 || v14 == -2147483643 )
  {
    v15 = p_KeyInformation + 3;
    v16 = -1;
    v17 = p_KeyInformation[3];
    v18 = v17 + 2;
    if ( v17 + 2 >= v17 )
      v16 = v17 + 2;
    v11 = v18 < v17 ? 0xC0000095 : 0;
    if ( v18 >= v17 )
    {
      *a4 = v16 >> 1;
      if ( v16 > v9 )
        return (unsigned int)-1073741789;
      if ( ResultLength <= Length )
        goto LABEL_14;
      v20 = -1;
      if ( v9 < 0xFFFFFFF0 )
        v20 = v9 + 16;
      v11 = v9 >= 0xFFFFFFF0 ? 0xC0000095 : 0;
      if ( v9 + 16 >= 0x10 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v20, 0x4C474552u);
        v7 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        p_KeyInformation = PoolWithTag;
        v22 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, PoolWithTag, v20, &ResultLength);
        v11 = v22;
        if ( v22 && v22 != -2147483643 )
          goto LABEL_15;
        v15 = v7 + 3;
        v23 = v7[3];
        v24 = v23 + 2;
        if ( v23 + 2 >= v23 )
          v8 = v23 + 2;
        v11 = v24 < v23 ? 0xC0000095 : 0;
        if ( v24 < v23 )
          goto LABEL_15;
        *a4 = v8 >> 1;
        if ( v8 > v9 )
        {
          v11 = -1073741789;
LABEL_15:
          if ( v7 )
            ExFreePoolWithTag(v7, 0);
          return v11;
        }
LABEL_14:
        memmove(a3, p_KeyInformation + 4, *v15);
        *((_WORD *)a3 + *a4 - 1) = 0;
        goto LABEL_15;
      }
    }
  }
  return v11;
}
