/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x140171760
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1407304D4 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x1407308C4 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x140875FD4 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x140036EA0 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0);
}
