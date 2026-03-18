/*
 * XREFs of CmpArmDelayedCloseTimer @ 0x14011E33C
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 *     CmpAddToDelayedClose @ 0x1406C6BE4 (CmpAddToDelayedClose.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void CmpArmDelayedCloseTimer()
{
  if ( !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
    ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
}
