/*
 * XREFs of PopPreSleepNotifyWorker @ 0x1408B5F30
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14013DC1C (PopOkayToQueueNextWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 */

__int64 PopPreSleepNotifyWorker()
{
  ++PopPreSleepWnfPayload;
  ZwUpdateWnfStateData((__int64)&WNF_PO_PRESLEEP_NOTIFICATION, (__int64)&PopPreSleepWnfPayload, 8LL);
  return PopOkayToQueueNextWorkItem((__int64)&PopPreSleepNotifyWorkItem);
}
