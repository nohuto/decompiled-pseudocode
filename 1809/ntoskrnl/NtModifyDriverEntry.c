/*
 * XREFs of NtModifyDriverEntry @ 0x1408D5970
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1408D318C (ExpSetDriverEntry.c)
 */

NTSTATUS __stdcall NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_14040ADF0 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
