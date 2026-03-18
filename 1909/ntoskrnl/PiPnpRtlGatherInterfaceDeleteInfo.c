/*
 * XREFs of PiPnpRtlGatherInterfaceDeleteInfo @ 0x140862E98
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x1405BC608 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1405BC748 (_PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1405BEF20 (PiDmGetObject.c)
 *     _PnpStringFromGuid @ 0x1407000C0 (_PnpStringFromGuid.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140862C24 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 */

__int64 __fastcall PiPnpRtlGatherInterfaceDeleteInfo(__int64 a1, __int64 **a2)
{
  void *v4; // rsi
  __int64 *PoolWithTag; // rax
  int Object; // ebx
  int ObjectProperty; // eax
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+60h] [rbp-49h] BYREF
  __int64 v12; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v13[2]; // [rsp+70h] [rbp-39h] BYREF
  wchar_t v14[40]; // [rsp+80h] [rbp-29h] BYREF

  v13[0] = 0LL;
  v4 = 0LL;
  v13[1] = 0LL;
  v12 = 0LL;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x47706E50u);
  *a2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    Object = PiDmGetObject(3LL, a1, *a2);
    if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
      goto LABEL_24;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a1,
                       3LL,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_DeviceInterface_ClassGuid,
                       (__int64)&v11 + 4,
                       (__int64)v13,
                       16,
                       (__int64)&v11,
                       0);
    Object = ObjectProperty;
    if ( ObjectProperty != -1073741772 && ObjectProperty != -1073741275 )
    {
      if ( ObjectProperty < 0 )
        goto LABEL_24;
      if ( PnpStringFromGuid((int *)v13, v14) >= 0 )
      {
        Object = PiDmGetObject(4LL, (__int64)v14, *a2 + 1);
        if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
          goto LABEL_24;
      }
    }
    v8 = PnpGetObjectProperty(
           0x47706E50u,
           0xC8uLL,
           a1,
           3,
           0LL,
           0LL,
           (__int64)&DEVPKEY_Device_InstanceId,
           (__int64)&v11 + 4,
           (PVOID *)&v12,
           &v11,
           0);
    v4 = (void *)v12;
    Object = v8;
    if ( v8 != -1073741772 && v8 != -1073741275 )
    {
      if ( v8 < 0 )
        goto LABEL_24;
      Object = PiDmGetObject(1LL, v12, *a2 + 2);
      if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
        goto LABEL_24;
    }
    v9 = PnpGetObjectProperty(
           *(__int64 *)&PiPnpRtlCtx,
           a1,
           3LL,
           0LL,
           0LL,
           (__int64)&DEVPKEY_Device_ContainerId,
           (__int64)&v11 + 4,
           (__int64)v13,
           16,
           (__int64)&v11,
           0);
    Object = v9;
    if ( v9 == -1073741772 || v9 == -1073741275 )
    {
      Object = 0;
    }
    else
    {
      if ( v9 < 0 )
        goto LABEL_24;
      Object = PnpStringFromGuid((int *)v13, v14);
      if ( Object < 0 )
        goto LABEL_24;
      Object = PiDmGetObject(5LL, (__int64)v14, *a2 + 3);
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
  if ( v4 )
    ExFreePoolWithTag(v4, 0x47706E50u);
  return (unsigned int)Object;
}
