/*
 * XREFs of NtModifyBootEntry @ 0x1409119A0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x14090E998 (ExpSetBootEntry.c)
 */

NTSTATUS __stdcall NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_140432490 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
