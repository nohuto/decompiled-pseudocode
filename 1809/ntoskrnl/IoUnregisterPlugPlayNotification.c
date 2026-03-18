/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x1406FF0E0
 * Callers:
 *     SbpWaitForVmbus @ 0x1409FA63C (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14015FF44 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
