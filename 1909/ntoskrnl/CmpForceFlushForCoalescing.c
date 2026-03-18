/*
 * XREFs of CmpForceFlushForCoalescing @ 0x140833B3C
 * Callers:
 *     CmpCoalescingCallback @ 0x1402800F0 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x1405D58F0 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 */

void CmpForceFlushForCoalescing()
{
  int v0; // eax

  if ( !BYTE1(NlsMbCodePageTag) )
  {
    if ( CmpWorkerDataInitialized )
    {
      v0 = CmpForceFlushPending;
      if ( !CmpForceFlushPending && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
        ExQueueWorkItem(&CmpForceFlushWorkItem, (WORK_QUEUE_TYPE)(v0 + 1));
    }
  }
}
