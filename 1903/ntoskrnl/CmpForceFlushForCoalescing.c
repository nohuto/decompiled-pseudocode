/*
 * XREFs of CmpForceFlushForCoalescing @ 0x1408344DC
 * Callers:
 *     CmpCoalescingCallback @ 0x140280390 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x1405D5130 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
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
