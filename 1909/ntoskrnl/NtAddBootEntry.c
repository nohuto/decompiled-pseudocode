/*
 * XREFs of NtAddBootEntry @ 0x140910880
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x14090E998 (ExpSetBootEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddBootEntry(PBOOT_ENTRY BootEntry, ULONG Id)
{
  if ( dword_140432490 == 2 )
    return ExpSetBootEntry(1, BootEntry, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
