/*
 * XREFs of PnpInitializeProcessor @ 0x14029D814
 * Callers:
 *     KeStartDynamicProcessor @ 0x14087F660 (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14015D184 (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 6, 0, 1LL, 0LL, 0LL, 0LL);
  return 0LL;
}
