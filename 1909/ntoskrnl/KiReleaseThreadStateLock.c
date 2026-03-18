/*
 * XREFs of KiReleaseThreadStateLock @ 0x14000FFF0
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140012DE0 (KeQueryTotalCycleTimeThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400E9970 (KiApplyForegroundBoostThread.c)
 *     KiSetAffinityThread @ 0x1400FB8E0 (KiSetAffinityThread.c)
 *     KiSetThreadSchedulingGroup @ 0x140114330 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1401143F8 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeSetIdealProcessorThreadEx @ 0x1401275D0 (KeSetIdealProcessorThreadEx.c)
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     KeUpdateThreadTag @ 0x140142DA0 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSets @ 0x140196F34 (KiUpdateThreadCpuSets.c)
 *     KeTryToFreezeThreadStack @ 0x1402A4998 (KeTryToFreezeThreadStack.c)
 *     KeSetThreadSchedulerAssist @ 0x1402AE954 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402AFA34 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x1402AFDA0 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiReleaseThreadStateLock(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  struct _KPRCB *v6; // rcx
  _DWORD *v7; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        result = (unsigned int)(SchedulerAssist[5] - 1);
        SchedulerAssist[5] = result;
        if ( !(_DWORD)result )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist);
      }
    }
  }
  if ( a3 )
  {
    _InterlockedAnd64(a3, 0LL);
    v6 = KeGetCurrentPrcb();
    v7 = v6->SchedulerAssist;
    if ( v7 )
    {
      if ( v6->NestingLevel <= 1u )
      {
        result = (unsigned int)(v7[5] - 1);
        v7[5] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick(v6, v7);
      }
    }
  }
  return result;
}
