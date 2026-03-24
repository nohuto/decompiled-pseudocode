/*
 * XREFs of NtAddDriverEntry @ 0x1408D3580
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1408D1ECC (ExpSetDriverEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddDriverEntry(PEFI_DRIVER_ENTRY BootEntry, ULONG Id)
{
  if ( dword_140409D90 == 2 )
    return ExpSetDriverEntry(1, BootEntry, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
