/*
 * XREFs of NtModifyDriverEntry @ 0x140911F70
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x14090F718 (ExpSetDriverEntry.c)
 */

NTSTATUS __stdcall NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_1404324F0 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
