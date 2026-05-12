/*
 * XREFs of RaidQueueDeferredItem @ 0x1C000246C
 * Callers:
 *     StorPortPauseDevice @ 0x1C00021B0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0002330 (StorPortResumeDevice.c)
 *     StorPortNotification @ 0x1C00053A0 (StorPortNotification.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C0025E20 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C00383E0 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C0038E78 (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C003E268 (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C003E780 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C003EA70 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C003EC10 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C003EE40 (StorPortPause.c)
 *     StorPortReady @ 0x1C003F0F0 (StorPortReady.c)
 *     StorPortResume @ 0x1C003F340 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
