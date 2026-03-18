/*
 * XREFs of NtModifyBootEntry @ 0x1408D46A0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1408D172C (ExpSetBootEntry.c)
 */

NTSTATUS __stdcall NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_140409DD0 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
