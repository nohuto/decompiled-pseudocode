/*
 * XREFs of ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1406BD430
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     EnableFlushTimer @ 0x140113A7C (EnableFlushTimer.c)
 *     LookUpTableFlushPartial @ 0x1406BD49C (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x14078A9DC (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalFlushWorkItemRoutineKernelMode(void *a1, __int64 a2, __int64 a3)
{
  if ( *((_BYTE *)a1 + 372) )
  {
    *((_BYTE *)a1 + 372) = 0;
    LookUpTableFlushComplete(a1, a2, a3);
  }
  else
  {
    LookUpTableFlushPartial();
  }
  if ( *((_DWORD *)a1 + 64) )
    EnableFlushTimer(*((_QWORD *)a1 + 45));
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)a1 + 33) + 56LL), 0, 1) == 2 )
    KeSetEvent((PRKEVENT)(*((_QWORD *)a1 + 33) + 32LL), 0, 0);
}
