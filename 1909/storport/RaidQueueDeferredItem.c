/*
 * XREFs of RaidQueueDeferredItem @ 0x1C0001FA4
 * Callers:
 *     StorPortPauseDevice @ 0x1C0001D00 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0001E70 (StorPortResumeDevice.c)
 *     StorPortNotification @ 0x1C00052A0 (StorPortNotification.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C0023180 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C00353B8 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C0035E60 (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C003BBBC (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C003C2A0 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C003C590 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C003C720 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C003C960 (StorPortPause.c)
 *     StorPortReady @ 0x1C003CC10 (StorPortReady.c)
 *     StorPortResume @ 0x1C003CE70 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
