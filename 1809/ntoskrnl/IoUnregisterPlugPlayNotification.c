/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x1406FF0C0
 * Callers:
 *     SbpWaitForVmbus @ 0x1409FA64C (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14015FF64 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
