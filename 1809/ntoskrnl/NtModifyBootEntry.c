/*
 * XREFs of NtModifyBootEntry @ 0x1408D4680
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1408D170C (ExpSetBootEntry.c)
 */

NTSTATUS __stdcall NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_140409D90 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
