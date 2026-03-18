/*
 * XREFs of KiAddProcessorToGroupSchedulingDatabase @ 0x1405ABA00
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087E80C (KiStartDynamicProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400447B0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAddProcessorToGroupSchedulingList @ 0x1402B2AB8 (KiAddProcessorToGroupSchedulingList.c)
 *     KiInitializeProcessorGroupSchedulingData @ 0x1402B2B54 (KiInitializeProcessorGroupSchedulingData.c)
 */

void __fastcall KiAddProcessorToGroupSchedulingDatabase(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v6; // eax
  _DWORD *v7; // rcx
  int v8; // eax
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  int v11; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KiInitializeProcessorGroupSchedulingData(a1);
  v3 = *(_DWORD *)(v2 + 36);
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( KiGroupSchedulingEnabled )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v6 = SchedulerAssist[5];
          SchedulerAssist[5] = v6 + 1;
          if ( v6 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        break;
      v7 = CurrentPrcb->SchedulerAssist;
      if ( v7 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v8 = v7[5] - 1;
          v7[5] = v8;
          if ( !v8 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v13);
      while ( *(_QWORD *)(a1 + 48) );
    }
    KiAddProcessorToGroupSchedulingList(a1, (_QWORD **)&KiSchedulingGroupList, v3);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v9 = KeGetCurrentPrcb();
    v10 = v9->SchedulerAssist;
    if ( v10 )
    {
      if ( v9->NestingLevel <= 1u )
      {
        v11 = v10[5] - 1;
        v10[5] = v11;
        if ( !v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v9);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
