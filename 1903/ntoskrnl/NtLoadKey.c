/*
 * XREFs of NtLoadKey @ 0x1406F0180
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x140638B80 (NtLoadKeyEx.c)
 */

NTSTATUS __stdcall NtLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  return NtLoadKeyEx(KeyObjectAttributes, FileObjectAttributes, 0, 0LL);
}
