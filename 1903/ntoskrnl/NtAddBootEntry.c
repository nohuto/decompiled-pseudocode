/*
 * XREFs of NtAddBootEntry @ 0x140910E20
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x14090EF38 (ExpSetBootEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddBootEntry(PBOOT_ENTRY BootEntry, ULONG Id)
{
  if ( dword_1404324F0 == 2 )
    return ExpSetBootEntry(1, BootEntry, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
