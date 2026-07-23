/*
 * XREFs of PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406F2C4C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14059BCE4 (_PnpStringFromGuid.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F2D80 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406FA96C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 */

__int64 __fastcall PiPnpRtlGatherInstallerClassChangeInfo(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *PoolWithTag; // rax
  __int64 v7; // r9
  int Object; // ebx
  int ObjectProperty; // eax
  __int64 v11; // r9
  _BYTE v12[4]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v13[4]; // [rsp+64h] [rbp-94h] BYREF
  int v14[6]; // [rsp+68h] [rbp-90h] BYREF
  wchar_t v15[40]; // [rsp+80h] [rbp-78h] BYREF

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x47706E50u);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Object = -1073741670;
    goto LABEL_12;
  }
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  if ( a2 )
  {
    Object = PiDmAddCacheReferenceForObject(2LL, a2, *a3 + 2);
    if ( Object < 0 )
      goto LABEL_12;
  }
  Object = PiDmGetObject(1LL, a1, *a3, v7);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_12;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ClassGuid,
                     (__int64)v13,
                     (__int64)v14,
                     16,
                     (__int64)v12,
                     0);
  Object = ObjectProperty;
  if ( ObjectProperty == -1073741275 || ObjectProperty == -1073741772 )
  {
    Object = 0;
  }
  else
  {
    if ( ObjectProperty < 0 )
      goto LABEL_12;
    Object = PnpStringFromGuid(v14, v15);
    if ( Object < 0 )
      goto LABEL_12;
    Object = PiDmGetObject(2LL, (__int64)v15, *a3 + 1, v11);
    if ( Object == -1073741772 )
      return 0;
  }
  if ( Object < 0 )
  {
LABEL_12:
    PiPnpRtlFreeInstallerClassChangeInfo(*a3);
    *a3 = 0LL;
  }
  return (unsigned int)Object;
}
