/*
 * XREFs of CMouseSensor_Destroy @ 0x1C0131B70
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECMouseSensor@@UEAAPEAXI@Z @ 0x1C0131840 (--_ECMouseSensor@@UEAAPEAXI@Z.c)
 */

CMouseSensor *CMouseSensor_Destroy()
{
  CMouseSensor *result; // rax

  if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink )
  {
    result = CMouseSensor::`vector deleting destructor'(
               (CMouseSensor *)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink,
               1LL);
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = 0LL;
  }
  return result;
}
