/*
 * XREFs of ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1406AF1B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     EnableFlushTimer @ 0x140127D00 (EnableFlushTimer.c)
 *     LookUpTableFlushComplete @ 0x1406AEFB8 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1406AF218 (LookUpTableFlushPartial.c)
 */

void __fastcall TlgAggregateInternalFlushWorkItemRoutineKernelMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_BYTE *)(a1 + 372) )
  {
    *(_BYTE *)(a1 + 372) = 0;
    LookUpTableFlushComplete(a1);
  }
  else
  {
    LookUpTableFlushPartial(a1, a2, a3, a4);
  }
  if ( *(_DWORD *)(a1 + 256) )
    EnableFlushTimer(*(_QWORD *)(a1 + 360), *(_DWORD *)(a1 + 368));
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)(*(_QWORD *)(a1 + 264) + 56LL), 0, 1) == 2 )
    KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 264) + 32LL), 0, 0);
}
