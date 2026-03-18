/*
 * XREFs of ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x14013D1F0
 * Callers:
 *     TlgAggregateFlush @ 0x14034CC4C (TlgAggregateFlush.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     EnableFlushTimer @ 0x14011330C (EnableFlushTimer.c)
 */

void __fastcall TlgAggregateInternalFlushTimerCallbackKernelMode(struct _EX_TIMER *a1, volatile signed __int16 *a2)
{
  signed __int16 v2; // ax

  v2 = _InterlockedCompareExchange16(a2 + 28, 1, 0);
  if ( v2 )
  {
    if ( v2 == 1 )
      EnableFlushTimer((ULONG_PTR)a1);
  }
  else
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a2, DelayedWorkQueue);
  }
}
