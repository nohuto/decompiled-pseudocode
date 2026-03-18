/*
 * XREFs of NtModifyDriverEntry @ 0x1408D46D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1408D1EEC (ExpSetDriverEntry.c)
 */

NTSTATUS __stdcall NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_140409DD0 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
