/*
 * XREFs of KiReleaseThreadStateLock @ 0x1400D8044
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x1400D1D60 (KeQueryTotalCycleTimeThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7E4C (KiApplyForegroundBoostThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400F3A78 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400F4698 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetAffinityThread @ 0x14011545C (KiSetAffinityThread.c)
 *     MiSwapStackPage @ 0x14012D160 (MiSwapStackPage.c)
 *     KeUpdateThreadTag @ 0x14013E7D0 (KeUpdateThreadTag.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CE2C (KeSetIdealProcessorThreadEx.c)
 *     KeTryToFreezeThreadStack @ 0x140160E04 (KeTryToFreezeThreadStack.c)
 *     KiUpdateThreadCpuSets @ 0x14018CAB4 (KiUpdateThreadCpuSets.c)
 *     KeSetThreadSchedulerAssist @ 0x140297C44 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140298BF0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x140298F5C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
          return KiRemoveSystemWorkPriorityKick(v6);
      }
    }
  }
  return result;
}
