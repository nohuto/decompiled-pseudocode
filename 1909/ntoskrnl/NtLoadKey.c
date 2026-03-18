/*
 * XREFs of NtLoadKey @ 0x1406F1C20
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x14063BC10 (NtLoadKeyEx.c)
 */

NTSTATUS __stdcall NtLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  return NtLoadKeyEx(KeyObjectAttributes, FileObjectAttributes, 0, 0LL);
}
