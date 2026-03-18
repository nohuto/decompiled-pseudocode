/*
 * XREFs of ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1C00CE300
 * Callers:
 *     <none>
 * Callees:
 *     EnableFlushTimer @ 0x1C003B23C (EnableFlushTimer.c)
 *     LookUpTableFlushComplete @ 0x1C0091E94 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1C00CE27C (LookUpTableFlushPartial.c)
 */

void __fastcall TlgAggregateInternalFlushWorkItemRoutineKernelMode(_DWORD *a1)
{
  if ( *((_BYTE *)a1 + 372) )
  {
    *((_BYTE *)a1 + 372) = 0;
    LookUpTableFlushComplete(a1);
  }
  else
  {
    LookUpTableFlushPartial((__int64)a1);
  }
  if ( a1[64] )
    EnableFlushTimer(*((_QWORD *)a1 + 45), a1[92]);
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)a1 + 33) + 56LL), 0, 1) == 2 )
    KeSetEvent((PRKEVENT)(*((_QWORD *)a1 + 33) + 32LL), 0, 0);
}
