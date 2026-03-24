/*
 * XREFs of ZwAddBootEntry @ 0x1401B8EB0
 * Callers:
 *     BiAddBootEntry @ 0x1408F1CC8 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAddBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EntryName, EntryValue, v2);
}
