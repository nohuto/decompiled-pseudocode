/*
 * XREFs of NtAddDriverEntry @ 0x1408D4840
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1408D318C (ExpSetDriverEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddDriverEntry(PEFI_DRIVER_ENTRY BootEntry, ULONG Id)
{
  if ( dword_14040ADF0 == 2 )
    return ExpSetDriverEntry(1, BootEntry, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
