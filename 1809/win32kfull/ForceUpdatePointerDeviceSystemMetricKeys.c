/*
 * XREFs of ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C00EA8A8
 * Callers:
 *     RemoveInputDevices @ 0x1C00EA800 (RemoveInputDevices.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01CACD0 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 * Callees:
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C00EA8E0 (AddRemovePointerDeviceSystemMetricKey.c)
 *     AddRemovePointerDevicePresence @ 0x1C00EA9FC (AddRemovePointerDevicePresence.c)
 */

__int64 ForceUpdatePointerDeviceSystemMetricKeys()
{
  AddRemovePointerDeviceSystemMetricKey(gdwSystemMetrics, 1LL);
  AddRemovePointerDeviceSystemMetricKey(gdwSystemMetrics, 0LL);
  return AddRemovePointerDevicePresence(gdwHardwareTypes);
}
