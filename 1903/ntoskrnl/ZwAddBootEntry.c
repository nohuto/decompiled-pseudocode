/*
 * XREFs of ZwAddBootEntry @ 0x1401C0DF0
 * Callers:
 *     BiAddBootEntry @ 0x14092F968 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAddBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
