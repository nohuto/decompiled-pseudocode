/*
 * XREFs of NtOpenKey @ 0x1406C4320
 * Callers:
 *     AdtpObjsInitialize @ 0x140778CF4 (AdtpObjsInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140A0A8D8 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A215E8 (IopProtectSystemPartition.c)
 * Callees:
 *     CmOpenKey @ 0x1405FF600 (CmOpenKey.c)
 */

NTSTATUS __stdcall NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, 0, 0LL);
}
