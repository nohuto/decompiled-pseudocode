/*
 * XREFs of PopSetupBluetoothChargingNotification @ 0x14078A648
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x14063F220 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupBluetoothChargingNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (int)&v1,
           (int)&WNF_BLTH_BLUETOOTH_DEVICE_DOCK_STATUS,
           1,
           0,
           (__int64)PopWnfBluetoothChargingCallback,
           0LL);
}
