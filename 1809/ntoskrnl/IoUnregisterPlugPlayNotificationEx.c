/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x140720320
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x140877790 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140160064 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}
