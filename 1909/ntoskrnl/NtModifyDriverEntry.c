/*
 * XREFs of NtModifyDriverEntry @ 0x1409119D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x14090F178 (ExpSetDriverEntry.c)
 */

NTSTATUS __stdcall NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_140432490 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
