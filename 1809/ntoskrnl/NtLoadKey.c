/*
 * XREFs of NtLoadKey @ 0x14070F750
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x1405B4D60 (NtLoadKeyEx.c)
 */

NTSTATUS __stdcall NtLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  return NtLoadKeyEx(KeyObjectAttributes, FileObjectAttributes, 0, 0LL);
}
