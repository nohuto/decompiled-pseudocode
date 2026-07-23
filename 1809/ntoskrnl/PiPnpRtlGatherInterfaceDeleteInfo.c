/*
 * XREFs of PiPnpRtlGatherInterfaceDeleteInfo @ 0x14082A358
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PnpGetObjectProperty @ 0x14059AEC8 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14059BCE4 (_PnpStringFromGuid.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14082A124 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 */

__int64 __fastcall PiPnpRtlGatherInterfaceDeleteInfo(__int64 a1, __int64 **a2)
{
  void *v2; // rsi
  __int64 *PoolWithTag; // rax
  int Object; // ebx
  __int64 v7; // r9
  int ObjectProperty; // eax
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // r9
  __int64 v15; // [rsp+60h] [rbp-49h] BYREF
  __int64 v16; // [rsp+68h] [rbp-41h] BYREF
  int v17[4]; // [rsp+70h] [rbp-39h] BYREF
  wchar_t v18[40]; // [rsp+80h] [rbp-29h] BYREF

  v2 = 0LL;
  v16 = 0LL;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x47706E50u);
  *a2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    Object = PiDmGetObject(3LL, a1, *a2, v7);
    if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
      goto LABEL_24;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a1,
                       3u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_DeviceInterface_ClassGuid,
                       (__int64)&v15 + 4,
                       (__int64)v17,
                       16,
                       (__int64)&v15,
                       0);
    Object = ObjectProperty;
    if ( ObjectProperty != -1073741772 && ObjectProperty != -1073741275 )
    {
      if ( ObjectProperty < 0 )
        goto LABEL_24;
      if ( PnpStringFromGuid(v17, v18) >= 0 )
      {
        Object = PiDmGetObject(4LL, (__int64)v18, *a2 + 1, v9);
        if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
          goto LABEL_24;
      }
    }
    v10 = PnpGetObjectProperty(
            0x47706E50u,
            0xC8uLL,
            a1,
            3,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_InstanceId,
            (__int64)&v15 + 4,
            (PVOID *)&v16,
            &v15,
            0);
    v2 = (void *)v16;
    Object = v10;
    if ( v10 != -1073741772 && v10 != -1073741275 )
    {
      if ( v10 < 0 )
        goto LABEL_24;
      Object = PiDmGetObject(1LL, v16, *a2 + 2, v11);
      if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
        goto LABEL_24;
    }
    v12 = PnpGetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            a1,
            3u,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_ContainerId,
            (__int64)&v15 + 4,
            (__int64)v17,
            16,
            (__int64)&v15,
            0);
    Object = v12;
    if ( v12 == -1073741772 || v12 == -1073741275 )
    {
      Object = 0;
    }
    else
    {
      if ( v12 < 0 )
        goto LABEL_24;
      Object = PnpStringFromGuid(v17, v18);
      if ( Object < 0 )
        goto LABEL_24;
      Object = PiDmGetObject(5LL, (__int64)v18, *a2 + 3, v13);
      if ( Object == -1073741772 )
      {
        Object = 0;
        goto LABEL_25;
      }
    }
    if ( Object >= 0 )
      goto LABEL_25;
    goto LABEL_24;
  }
  Object = -1073741670;
LABEL_24:
  PiPnpRtlFreeInterfaceDeleteInfo((unsigned int **)*a2);
  *a2 = 0LL;
LABEL_25:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x47706E50u);
  return (unsigned int)Object;
}
