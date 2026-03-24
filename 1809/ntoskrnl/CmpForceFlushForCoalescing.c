/*
 * XREFs of CmpForceFlushForCoalescing @ 0x1407FB11C
 * Callers:
 *     CmpCoalescingCallback @ 0x14026C910 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x1405FAD2C (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 */

void CmpForceFlushForCoalescing()
{
  int v0; // eax

  if ( !CmpNoWrite )
  {
    if ( CmpWorkerDataInitialized )
    {
      v0 = CmpForceFlushPending;
      if ( !CmpForceFlushPending && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
        ExQueueWorkItem(&CmpForceFlushWorkItem, (WORK_QUEUE_TYPE)(v0 + 1));
    }
  }
}
