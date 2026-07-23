/*
 * XREFs of KiReleaseThreadStateLock @ 0x1400D80E4
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x1400D1E00 (KeQueryTotalCycleTimeThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7EEC (KiApplyForegroundBoostThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400F3B18 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400F4738 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetAffinityThread @ 0x1401154EC (KiSetAffinityThread.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     KeUpdateThreadTag @ 0x14013E8F0 (KeUpdateThreadTag.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CF4C (KeSetIdealProcessorThreadEx.c)
 *     KeTryToFreezeThreadStack @ 0x140160F24 (KeTryToFreezeThreadStack.c)
 *     KiUpdateThreadCpuSets @ 0x14018CC14 (KiUpdateThreadCpuSets.c)
 *     KeSetThreadSchedulerAssist @ 0x140297F34 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140298EE0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14029924C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
