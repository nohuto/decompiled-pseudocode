/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1402FAFB0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140177F70 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140442328, DelayedWorkQueue);
}
