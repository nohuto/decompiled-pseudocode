/*
 * XREFs of CmpDelayDerefKCBTimerRoutine @ 0x140133420
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

void CmpDelayDerefKCBTimerRoutine()
{
  ExQueueWorkItem(&CmpDelayDerefKCBWorkItem, DelayedWorkQueue);
}
