/*
 * XREFs of EnableFlushTimer @ 0x14011330C
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x14008BBAC (InsertEventEntryInLookUpTable.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x14013D1F0 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1406BCBC0 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 * Callees:
 *     ExSetTimer @ 0x140114060 (ExSetTimer.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

__int64 __fastcall EnableFlushTimer(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( a1 )
    return ExSetTimer(a1);
  return result;
}
