/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x140737AC0
 * Callers:
 *     SbpWaitForVmbus @ 0x140A4007C (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140175974 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
