/*
 * XREFs of RaidQueueDeferredItem @ 0x1C0001FF4
 * Callers:
 *     StorPortPauseDevice @ 0x1C0001D50 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0001EC0 (StorPortResumeDevice.c)
 *     StorPortNotification @ 0x1C0005250 (StorPortNotification.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C002301C (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C0033FC8 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C0034A70 (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C003A7CC (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C003AEB0 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C003B1A0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C003B330 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C003B570 (StorPortPause.c)
 *     StorPortReady @ 0x1C003B820 (StorPortReady.c)
 *     StorPortResume @ 0x1C003BA80 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
