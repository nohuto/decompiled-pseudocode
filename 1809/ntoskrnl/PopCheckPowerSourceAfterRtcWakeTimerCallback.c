/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1402DE7D0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138CC8 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_1404169E8, DelayedWorkQueue);
}
