/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x14071F0A0
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x140876550 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14015FF44 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}
