/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x14071F080
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x140876530 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14015FF64 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}
