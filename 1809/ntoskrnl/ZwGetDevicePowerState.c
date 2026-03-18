/*
 * XREFs of ZwGetDevicePowerState @ 0x1401B9F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE PowerState)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Device, PowerState, v2);
}
