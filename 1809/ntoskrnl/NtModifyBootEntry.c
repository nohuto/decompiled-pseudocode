/*
 * XREFs of NtModifyBootEntry @ 0x1408D5940
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1408D29CC (ExpSetBootEntry.c)
 */

NTSTATUS __stdcall NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_14040ADF0 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
