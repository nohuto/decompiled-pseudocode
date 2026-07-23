/*
 * XREFs of ZwModifyDriverEntry @ 0x1401C22F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
