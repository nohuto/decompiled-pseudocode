/*
 * XREFs of ZwAddBootEntry @ 0x1401B9010
 * Callers:
 *     BiAddBootEntry @ 0x1408F2F88 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAddBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
