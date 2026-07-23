/*
 * XREFs of ZwModifyBootEntry @ 0x1401BA4D0
 * Callers:
 *     BiModifyBootEntry @ 0x1408F553C (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
