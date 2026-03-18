/*
 * XREFs of ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C00BAFC0
 * Callers:
 *     RemoveInputDevices @ 0x1C00BAF30 (RemoveInputDevices.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01A8798 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 * Callees:
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C00BAFF8 (AddRemovePointerDeviceSystemMetricKey.c)
 *     AddRemovePointerDevicePresence @ 0x1C00BB0F8 (AddRemovePointerDevicePresence.c)
 */

__int64 ForceUpdatePointerDeviceSystemMetricKeys()
{
  AddRemovePointerDeviceSystemMetricKey(gdwSystemMetrics, 1LL);
  AddRemovePointerDeviceSystemMetricKey(gdwSystemMetrics, 0LL);
  return AddRemovePointerDevicePresence(gdwHardwareTypes);
}
