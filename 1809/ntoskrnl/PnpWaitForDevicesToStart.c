/*
 * XREFs of PnpWaitForDevicesToStart @ 0x1409CA968
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1409CACC4 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14073C500 (PnpWaitForEmptyDeviceActionQueue.c)
 */

_BOOL8 PnpWaitForDevicesToStart()
{
  return PnpWaitForEmptyDeviceActionQueue() >= 0;
}
