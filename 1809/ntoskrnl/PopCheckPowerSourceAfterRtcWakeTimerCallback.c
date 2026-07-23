/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1402DE9C0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140417AC8, DelayedWorkQueue);
}
