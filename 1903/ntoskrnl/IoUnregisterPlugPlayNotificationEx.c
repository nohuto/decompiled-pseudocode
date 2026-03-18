/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x140747E70
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x1408B3800 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140175244 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}
