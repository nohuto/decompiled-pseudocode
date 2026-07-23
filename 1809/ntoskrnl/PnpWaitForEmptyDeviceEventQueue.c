/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x14073D6A4
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x1409CB988 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
