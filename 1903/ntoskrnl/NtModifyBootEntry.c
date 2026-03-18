/*
 * XREFs of NtModifyBootEntry @ 0x140911F40
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x14090EF38 (ExpSetBootEntry.c)
 */

NTSTATUS __stdcall NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_1404324F0 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
