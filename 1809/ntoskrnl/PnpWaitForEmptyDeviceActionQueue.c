/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x14073C4E0
 * Callers:
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 *     PnpWaitForDevicesToStart @ 0x1409CA968 (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x1409CA988 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}
