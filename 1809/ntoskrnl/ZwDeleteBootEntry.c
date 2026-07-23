/*
 * XREFs of ZwDeleteBootEntry @ 0x1401B9C50
 * Callers:
 *     BiDeleteBootEntry @ 0x1408F45A4 (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
