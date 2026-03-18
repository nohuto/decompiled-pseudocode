/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x140735860
 * Callers:
 *     SbpWaitForVmbus @ 0x140A402AC (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140175244 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
