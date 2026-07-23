/*
 * XREFs of ZwDeleteBootEntry @ 0x1401C1A50
 * Callers:
 *     BiDeleteBootEntry @ 0x140930F78 (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
