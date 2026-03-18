/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x14076460C
 * Callers:
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 *     PnpWaitForDevicesToStart @ 0x140A0FEB8 (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A0FED8 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}
