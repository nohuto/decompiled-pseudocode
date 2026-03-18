/*
 * XREFs of KiReleaseThreadStateLock @ 0x14000FA70
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140012BB0 (KeQueryTotalCycleTimeThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400E49D0 (KiApplyForegroundBoostThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400E94A8 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400E9570 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetAffinityThread @ 0x1400F7E40 (KiSetAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x140126AD0 (KeSetIdealProcessorThreadEx.c)
 *     MiSwapStackPage @ 0x1401345A4 (MiSwapStackPage.c)
 *     KeUpdateThreadTag @ 0x140142860 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSets @ 0x140196754 (KiUpdateThreadCpuSets.c)
 *     KeTryToFreezeThreadStack @ 0x1402A4C38 (KeTryToFreezeThreadStack.c)
 *     KeSetThreadSchedulerAssist @ 0x1402AEBF4 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402AFCD4 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
