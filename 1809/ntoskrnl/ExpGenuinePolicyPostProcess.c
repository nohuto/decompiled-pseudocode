/*
 * XREFs of ExpGenuinePolicyPostProcess @ 0x1406A8A40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1401BAC70 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpOsProductCacheProviderHelper @ 0x1406A8C60 (ExpOsProductCacheProviderHelper.c)
 *     ExpGetVMActivationStatus @ 0x140705308 (ExpGetVMActivationStatus.c)
 *     sub_140705868 @ 0x140705868 (sub_140705868.c)
 */

__int64 __fastcall ExpGenuinePolicyPostProcess(int a1, _BYTE *a2, int a3, __int64 a4, _BYTE *a5)
{
  int v7; // esi
  NTSTATUS VMActivationStatus; // ebx
  PVOID PoolWithTag; // r14
  int v10; // eax
  bool v12; // zf
  ULONG v13; // [rsp+40h] [rbp-31h] BYREF
  unsigned int NumberOfBytes; // [rsp+44h] [rbp-2Dh] BYREF
  ULONG NumberOfBytes_4; // [rsp+48h] [rbp-29h] BYREF
  int Data; // [rsp+4Ch] [rbp-25h] BYREF
  int v17; // [rsp+50h] [rbp-21h] BYREF
  __int64 v18; // [rsp+58h] [rbp-19h]
  __int64 v19; // [rsp+60h] [rbp-11h]
  __int64 v20; // [rsp+68h] [rbp-9h]

  v18 = a4;
  NumberOfBytes_4 = 4;
  v12 = off_14096E030 == 0LL;
  *a5 = 0;
  v7 = (int)a2;
  VMActivationStatus = 0;
  v17 = 0;
  Data = 0;
  PoolWithTag = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  NumberOfBytes = 0;
  if ( !v12 )
  {
    VMActivationStatus = sub_140705868(a1, (_DWORD)a2, a3, a4, 2);
    *a5 = 1;
    return (unsigned int)VMActivationStatus;
  }
  if ( !a2 )
    goto LABEL_6;
  if ( a3 == 1 )
  {
    v12 = *a2 == 1;
LABEL_32:
    if ( v12 )
      return (unsigned int)VMActivationStatus;
    goto LABEL_6;
  }
  if ( a3 == 2 )
  {
    v12 = *(_WORD *)a2 == 1;
    goto LABEL_32;
  }
  if ( *(_DWORD *)a2 == 1 )
    return (unsigned int)VMActivationStatus;
LABEL_6:
  VMActivationStatus = ExpGetVMActivationStatus(a1, (_DWORD)a2, a3, a4, (__int64)a5);
  if ( VMActivationStatus < 0 || *a5 != 1 )
  {
    VMActivationStatus = ZwQueryLicenseValue(
                           (PUNICODE_STRING)&stru_14090A8D0,
                           0LL,
                           &Data,
                           NumberOfBytes_4,
                           &NumberOfBytes_4);
    if ( VMActivationStatus < 0 || Data != 1 )
    {
      VMActivationStatus = qword_14096E3C8 ? qword_14096E3C8(&v17) : -1073741637;
      if ( VMActivationStatus >= 0 )
      {
        if ( qword_14096E388 )
        {
          VMActivationStatus = ExpOsProductCacheProviderHelper(
                                 (PUNICODE_STRING)&stru_140909FE8,
                                 (__int64)&NumberOfBytes,
                                 (ULONG)&v13);
          if ( VMActivationStatus == -1073741789 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x20534C53u);
            if ( !PoolWithTag )
              return (unsigned int)-1073741801;
            VMActivationStatus = ExpOsProductCacheProviderHelper(
                                   (PUNICODE_STRING)&stru_140909FE8,
                                   (__int64)&NumberOfBytes,
                                   (ULONG)&v13);
          }
          if ( VMActivationStatus < 0 )
            goto LABEL_22;
          v10 = ((__int64 (__fastcall *)(__int64, PVOID, _QWORD))qword_14096E388)(3LL, PoolWithTag, 0LL);
          VMActivationStatus = v10;
          if ( v10 >= 0 && (v19 & 0x40) != 0 || v10 == -1073741198 )
          {
            VMActivationStatus = 0;
            goto LABEL_20;
          }
        }
        else
        {
          VMActivationStatus = -1073741637;
        }
        if ( VMActivationStatus < 0 )
        {
LABEL_22:
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          return (unsigned int)VMActivationStatus;
        }
LABEL_20:
        if ( !v17 )
        {
          VMActivationStatus = sub_140705868(a1, v7, a3, v18, 2);
          *a5 = 1;
        }
        goto LABEL_22;
      }
    }
  }
  return (unsigned int)VMActivationStatus;
}
