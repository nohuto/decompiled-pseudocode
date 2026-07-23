/*
 * XREFs of ZwModifyBootEntry @ 0x1401C22D0
 * Callers:
 *     BiModifyBootEntry @ 0x140931F54 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
