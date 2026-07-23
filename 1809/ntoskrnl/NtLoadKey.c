/*
 * XREFs of NtLoadKey @ 0x1407109F0
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x1405B5D60 (NtLoadKeyEx.c)
 */

NTSTATUS __stdcall NtLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  return NtLoadKeyEx(KeyObjectAttributes, FileObjectAttributes, 0, 0LL);
}
