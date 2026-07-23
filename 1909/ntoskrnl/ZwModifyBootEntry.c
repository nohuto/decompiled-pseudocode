/*
 * XREFs of ZwModifyBootEntry @ 0x1401C2E50
 * Callers:
 *     BiModifyBootEntry @ 0x1409319C8 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
