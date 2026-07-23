/*
 * XREFs of PnpInitializeProcessor @ 0x140287908
 * Callers:
 *     KeStartDynamicProcessor @ 0x140844E10 (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14015F104 (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 6, 0, 1LL, 0LL, 0LL, 0LL);
  return 0LL;
}
