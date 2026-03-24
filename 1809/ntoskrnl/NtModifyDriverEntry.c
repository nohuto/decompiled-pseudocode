/*
 * XREFs of NtModifyDriverEntry @ 0x1408D46B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1408D1ECC (ExpSetDriverEntry.c)
 */

NTSTATUS __stdcall NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_140409D90 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
