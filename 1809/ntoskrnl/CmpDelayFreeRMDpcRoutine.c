/*
 * XREFs of CmpDelayFreeRMDpcRoutine @ 0x14013B810
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 */

void CmpDelayFreeRMDpcRoutine()
{
  ExQueueWorkItem(&CmpDelayFreeRMWorkItem, DelayedWorkQueue);
}
