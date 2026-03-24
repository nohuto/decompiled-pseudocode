/*
 * XREFs of CmpLazyCommitDpcRoutine @ 0x14026C540
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 */

void CmpLazyCommitDpcRoutine()
{
  if ( CmpLazyCommitWorkItemActive )
    ExQueueWorkItem(&CmpLazyCommitWorkItem, DelayedWorkQueue);
}
