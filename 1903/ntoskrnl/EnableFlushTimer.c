/*
 * XREFs of EnableFlushTimer @ 0x140113A7C
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x14008A8AC (InsertEventEntryInLookUpTable.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x14013CC10 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1406BD430 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 * Callees:
 *     ExSetTimer @ 0x1401147D0 (ExSetTimer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

__int64 __fastcall EnableFlushTimer(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( a1 )
    return ExSetTimer(a1);
  return result;
}
