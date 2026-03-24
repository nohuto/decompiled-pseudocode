/*
 * XREFs of CmpDelayDerefKCBTimerRoutine @ 0x140133440
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 */

void CmpDelayDerefKCBTimerRoutine()
{
  ExQueueWorkItem(&CmpDelayDerefKCBWorkItem, DelayedWorkQueue);
}
