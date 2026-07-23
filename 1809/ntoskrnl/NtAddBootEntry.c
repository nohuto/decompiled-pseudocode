/*
 * XREFs of NtAddBootEntry @ 0x1408D4810
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1408D29CC (ExpSetBootEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddBootEntry(PBOOT_ENTRY BootEntry, ULONG Id)
{
  if ( dword_14040ADF0 == 2 )
    return ExpSetBootEntry(1, BootEntry, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
