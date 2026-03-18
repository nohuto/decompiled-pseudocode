/*
 * XREFs of NtAddDriverEntry @ 0x1409108B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x14090F178 (ExpSetDriverEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddDriverEntry(PEFI_DRIVER_ENTRY BootEntry, ULONG Id)
{
  if ( dword_140432490 == 2 )
    return ExpSetDriverEntry(1, BootEntry, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
