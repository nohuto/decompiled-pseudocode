/*
 * XREFs of NtOpenKey @ 0x1406C5160
 * Callers:
 *     AdtpObjsInitialize @ 0x140775714 (AdtpObjsInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140A0A3AC (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A21504 (IopProtectSystemPartition.c)
 * Callees:
 *     CmOpenKey @ 0x1405FDBD0 (CmOpenKey.c)
 */

NTSTATUS __stdcall NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, 0, 0LL);
}
