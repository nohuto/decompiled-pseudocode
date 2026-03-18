/*
 * XREFs of ZwModifyBootEntry @ 0x1401C22D0
 * Callers:
 *     BiModifyBootEntry @ 0x140931F54 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry, v1, v2);
}
