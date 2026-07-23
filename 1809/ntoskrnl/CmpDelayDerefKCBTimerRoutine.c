/*
 * XREFs of CmpDelayDerefKCBTimerRoutine @ 0x140133510
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 */

void CmpDelayDerefKCBTimerRoutine()
{
  ExQueueWorkItem(&CmpDelayDerefKCBWorkItem, DelayedWorkQueue);
}
