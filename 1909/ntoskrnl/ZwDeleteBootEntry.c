/*
 * XREFs of ZwDeleteBootEntry @ 0x1401C25D0
 * Callers:
 *     BiDeleteBootEntry @ 0x1409309EC (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
