/*
 * XREFs of KiSelectReadyThreadEx @ 0x14005ADA0
 * Callers:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetPriorityBoost @ 0x1400CEF60 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x1400CFE60 (KiRemoveBoostThread.c)
 *     KeYieldExecution @ 0x1400D6650 (KeYieldExecution.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7EEC (KiApplyForegroundBoostThread.c)
 *     KiSchedulerApc @ 0x1400F1850 (KiSchedulerApc.c)
 * Callees:
 *     KiSelectReadyThread @ 0x140057A20 (KiSelectReadyThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400D15A0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectLowestRankedThread @ 0x1400D7280 (KiSelectLowestRankedThread.c)
 *     KiChooseLowestRankedThread @ 0x140116B1C (KiChooseLowestRankedThread.c)
 */

_QWORD *__fastcall KiSelectReadyThreadEx(struct _KPRCB *a1, _KTHREAD *a2, __int64 a3)
{
  char v3; // di
  char Priority; // al
  unsigned int v7; // esi
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  signed int v9; // ecx
  _QWORD *result; // rax
  __int64 v11; // rdx
  bool v12; // r9
  __int64 v13; // r10

  v3 = a3;
  if ( a2 )
  {
    Priority = a2->Priority;
    if ( Priority == 31 )
      return 0LL;
    v7 = Priority;
    if ( (a3 & 2) == 0 )
      v7 = Priority + 1;
    SchedulingGroup = a2->SchedulingGroup;
    if ( SchedulingGroup )
    {
      v11 = (__int64)SchedulingGroup + a1->ScbOffset;
      if ( v11 )
      {
        v12 = a1 == KeGetCurrentPrcb() || a2 != a1->CurrentThread;
        if ( (unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)a2, v11, a3, v12, 0LL) )
          return (_QWORD *)KiChooseLowestRankedThread(a1, v13, v7);
      }
    }
    v9 = v7;
    return KiSelectReadyThread(v9, (__int64)a1, a3);
  }
  result = KiSelectReadyThread(1, (__int64)a1, a3);
  if ( !result )
  {
    result = (_QWORD *)KiSelectLowestRankedThread(a1);
    if ( !result && (v3 & 1) == 0 )
    {
      v9 = 0;
      return KiSelectReadyThread(v9, (__int64)a1, a3);
    }
  }
  return result;
}
