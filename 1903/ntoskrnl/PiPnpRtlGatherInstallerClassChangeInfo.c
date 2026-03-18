/*
 * XREFs of PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406FA9C4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDA80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x1405BC368 (_PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1405BEA50 (PiDmGetObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F9B64 (PiDmAddCacheReferenceForObject.c)
 *     _PnpStringFromGuid @ 0x1406FE2E0 (_PnpStringFromGuid.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140714EB4 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 */

__int64 __fastcall PiPnpRtlGatherInstallerClassChangeInfo(__int64 a1, _WORD *a2, __int64 **a3)
{
  __int64 *PoolWithTag; // rax
  int Object; // ebx
  int ObjectProperty; // eax
  _BYTE v10[4]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v11[4]; // [rsp+64h] [rbp-94h] BYREF
  _QWORD v12[3]; // [rsp+68h] [rbp-90h] BYREF
  _BYTE v13[80]; // [rsp+80h] [rbp-78h] BYREF

  v12[0] = 0LL;
  v12[1] = 0LL;
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
    Object = PiDmAddCacheReferenceForObject(2u, a2, (volatile signed __int32 **)*a3 + 2);
    if ( Object < 0 )
      goto LABEL_12;
  }
  Object = PiDmGetObject(1LL, a1, *a3);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_12;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ClassGuid,
                     (__int64)v11,
                     (__int64)v12,
                     16,
                     (__int64)v10,
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
    Object = PnpStringFromGuid(v12, v13);
    if ( Object < 0 )
      goto LABEL_12;
    Object = PiDmGetObject(2LL, (__int64)v13, *a3 + 1);
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
