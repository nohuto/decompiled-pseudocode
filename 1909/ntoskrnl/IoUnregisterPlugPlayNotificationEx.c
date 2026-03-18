/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x140749D70
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x1408B30D0 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140175974 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}
