/*
 * XREFs of KiTryToAcquireThreadLock @ 0x1401151F0
 * Callers:
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114E14 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x140129D50 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KeTryToInsertQueueApc @ 0x140294E10 (KeTryToInsertQueueApc.c)
 *     KiMonitorCacheErrata @ 0x14029A680 (KiMonitorCacheErrata.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
