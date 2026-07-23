/*
 * XREFs of ZwGetDevicePowerState @ 0x1401C2A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE PowerState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Device);
}
