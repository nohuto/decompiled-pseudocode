/*
 * XREFs of KiTryToAcquireThreadLock @ 0x1400F959C
 * Callers:
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400F9424 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14012B6D8 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KeTryToInsertQueueApc @ 0x1402AB500 (KeTryToInsertQueueApc.c)
 *     KiMonitorCacheErrata @ 0x1402B1790 (KiMonitorCacheErrata.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiTryToAcquireThreadLock(__int64 a1, _BYTE *a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  struct _KPRCB *v7; // rcx
  _DWORD *v8; // rdx
  int v9; // eax
  int v10; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v9 = SchedulerAssist[5];
      SchedulerAssist[5] = v9 + 1;
      if ( v9 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v7 = KeGetCurrentPrcb();
    v8 = v7->SchedulerAssist;
    if ( v8 )
    {
      if ( v7->NestingLevel <= 1u )
      {
        v10 = v8[5] - 1;
        v8[5] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick(v7);
      }
    }
    return 0;
  }
  else
  {
    if ( a2 )
      *a2 = 1;
    return 1;
  }
}
