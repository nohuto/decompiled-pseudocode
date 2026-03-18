/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1402FB500
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140177880 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140442388, DelayedWorkQueue);
}
