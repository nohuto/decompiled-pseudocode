/*
 * XREFs of ZwAddBootEntry @ 0x1401C1970
 * Callers:
 *     BiAddBootEntry @ 0x14092F3DC (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAddBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
