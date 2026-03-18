/*
 * XREFs of PnpWaitForDevicesToStart @ 0x140A0FEB8
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A10210 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 * Callees:
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14076460C (PnpWaitForEmptyDeviceActionQueue.c)
 */

_BOOL8 PnpWaitForDevicesToStart()
{
  return PnpWaitForEmptyDeviceActionQueue() >= 0;
}
