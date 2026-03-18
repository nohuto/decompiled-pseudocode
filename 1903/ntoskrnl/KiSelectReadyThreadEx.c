/*
 * XREFs of KiSelectReadyThreadEx @ 0x14000FF70
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KiSchedulerApc @ 0x1400816F0 (KiSchedulerApc.c)
 *     KiApplyForegroundBoostThread @ 0x1400E49D0 (KiApplyForegroundBoostThread.c)
 *     KeYieldExecution @ 0x140109BD0 (KeYieldExecution.c)
 * Callees:
 *     KiSelectLowestRankedThread @ 0x140013804 (KiSelectLowestRankedThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140015600 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectReadyThread @ 0x140042260 (KiSelectReadyThread.c)
 *     KiChooseLowestRankedThread @ 0x1400E8A30 (KiChooseLowestRankedThread.c)
 */

__int64 __fastcall KiSelectReadyThreadEx(struct _KPRCB *a1, _KTHREAD *a2, char a3)
{
  char Priority; // al
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  bool v12; // r9
  __int64 v13; // r10

  if ( a2 )
  {
    Priority = a2->Priority;
    if ( Priority == 31 )
      return 0LL;
    SchedulingGroup = a2->SchedulingGroup;
    v8 = Priority + 1;
    if ( (a3 & 2) != 0 )
      v8 = Priority;
    if ( SchedulingGroup )
    {
      v11 = (__int64)SchedulingGroup + a1->ScbOffset;
      if ( v11 )
      {
        v12 = a1 == KeGetCurrentPrcb() || a2 != a1->CurrentThread;
        if ( (unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)a2, v11, a3, v12, 0LL) )
          return KiChooseLowestRankedThread(a1, v13, v8);
      }
    }
    v9 = v8;
    return KiSelectReadyThread(v9, a1);
  }
  result = KiSelectReadyThread(1LL, a1);
  if ( !result )
  {
    result = KiSelectLowestRankedThread(a1);
    if ( !result && (a3 & 1) == 0 )
    {
      v9 = 0LL;
      return KiSelectReadyThread(v9, a1);
    }
  }
  return result;
}
