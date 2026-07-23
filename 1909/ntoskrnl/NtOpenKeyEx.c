/*
 * XREFs of NtOpenKeyEx @ 0x1406018B0
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x1405FF600 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  return CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, OpenOptions, 0LL);
}
