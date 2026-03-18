/*
 * XREFs of NtAddBootEntry @ 0x1408D3570
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1408D172C (ExpSetBootEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddBootEntry(PBOOT_ENTRY BootEntry, ULONG Id)
{
  if ( dword_140409DD0 == 2 )
    return ExpSetBootEntry(1, BootEntry, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
