/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1402DE6D0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138CA8 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140416A08, DelayedWorkQueue);
}
