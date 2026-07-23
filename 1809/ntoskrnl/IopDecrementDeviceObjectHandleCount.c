/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x14016A290
 * Callers:
 *     IopRemoveDevice @ 0x1406EE0A4 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1406EE6C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x14083C470 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x1400B8B60 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0, 0LL);
}
