/*
 * XREFs of NtAddBootEntry @ 0x1408D3550
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1408D170C (ExpSetBootEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddBootEntry(PBOOT_ENTRY BootEntry, ULONG Id)
{
  if ( dword_140409D90 == 2 )
    return ExpSetBootEntry(1, BootEntry, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
