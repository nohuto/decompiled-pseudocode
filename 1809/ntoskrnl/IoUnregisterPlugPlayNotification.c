/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x140700360
 * Callers:
 *     SbpWaitForVmbus @ 0x1409FB64C (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140160064 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
