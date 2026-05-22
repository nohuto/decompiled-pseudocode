/*
 * XREFs of ?OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x180038810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall InputStateManager::OnDeviceRemoval(__int64 a1, struct DeviceInfo *a2)
{
  return InputStateManager::OnDeviceRemoval((InputStateManager *)(a1 - 8), a2);
}
