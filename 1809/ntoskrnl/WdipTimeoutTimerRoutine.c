/*
 * XREFs of WdipTimeoutTimerRoutine @ 0x14013A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

void WdipTimeoutTimerRoutine()
{
  ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
}
