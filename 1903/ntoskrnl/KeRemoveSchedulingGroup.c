/*
 * XREFs of KeRemoveSchedulingGroup @ 0x1400E79BC
 * Callers:
 *     PspEstablishJobHierarchy @ 0x140695344 (PspEstablishJobHierarchy.c)
 *     PspRemoveCpuRateControl @ 0x140698874 (PspRemoveCpuRateControl.c)
 *     MiSessionObjectDelete @ 0x14088BB40 (MiSessionObjectDelete.c)
 *     PspEstablishDfssHierarchy @ 0x1408C7A50 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400E807C (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1400E82F4 (KiUpdateMinimumWeight.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeRemoveSchedulingGroup(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  unsigned __int16 **v3; // rcx
  __int64 v4; // r15
  __int64 v5; // rbp
  unsigned int v6; // r12d
  __int64 v7; // rdi
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v9; // r14
  __int64 v10; // r13
  _DWORD *SchedulerAssist; // rcx
  unsigned __int16 *v12; // rax
  __int64 v13; // rdx
  unsigned __int16 **v14; // rcx
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // r8
  unsigned __int8 OldIrql; // bl
  _DWORD *v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  struct _KPRCB *v25; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v27; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v2 = *((_QWORD *)a1 + 7);
  v3 = (unsigned __int16 **)*((_QWORD *)a1 + 8);
  if ( *(unsigned __int16 **)(v2 + 8) != a1 + 28 || *v3 != a1 + 28 )
    goto LABEL_43;
  *v3 = (unsigned __int16 *)v2;
  v4 = 0LL;
  *(_QWORD *)(v2 + 8) = v3;
  v5 = 0LL;
  v6 = KeNumberProcessors_0;
  v7 = *((_QWORD *)a1 + 12);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = KiProcessorBlock[v5];
      v10 = 212LL * (unsigned int)v5;
      v27 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v21 = SchedulerAssist[5];
            SchedulerAssist[5] = v21 + 1;
            if ( v21 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          break;
        v20 = CurrentPrcb->SchedulerAssist;
        if ( v20 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v22 = v20[5] - 1;
            v20[5] = v22;
            if ( !v22 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v27);
        while ( *(_QWORD *)(v9 + 48) );
      }
      v12 = &a1[v10 + 100];
      v13 = *(_QWORD *)v12;
      v14 = (unsigned __int16 **)*((_QWORD *)v12 + 1);
      if ( *(unsigned __int16 **)(*(_QWORD *)v12 + 8LL) != v12 || *v14 != v12 )
        break;
      *v14 = (unsigned __int16 *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v23 = v16[5] - 1;
          v16[5] = v23;
          if ( !v23 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      v4 += *(_QWORD *)&a1[v10 + 92];
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v6 )
        goto LABEL_11;
    }
LABEL_43:
    __fastfail(3u);
  }
LABEL_11:
  if ( (*((_DWORD *)a1 + 1) & 1) == 0 )
  {
    v24 = *a1;
    if ( v7 )
      *(_DWORD *)(v7 + 20) -= v24;
    else
      KiGroupSchedulingTotalWeight -= v24;
  }
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 80) == v7 + 80 )
    {
      *(_DWORD *)(v7 + 16) = 0;
      *(_DWORD *)(v7 + 12) = 0;
      goto LABEL_17;
    }
    v17 = v7;
  }
  else
  {
    if ( (__int64 *)KiSchedulingGroupList == &KiSchedulingGroupList )
    {
      KiGroupSchedulingMinimumWeight = 0;
      KiGroupSchedulingMinimumRate = 0;
      goto LABEL_17;
    }
    v17 = 0LL;
  }
  if ( (unsigned __int8)KiUpdateMinimumWeight(*((_DWORD *)a1 + 1) & 1, 0LL, v17) || (*((_DWORD *)a1 + 1) & 1) == 0 )
    KiAssignSchedulingGroupWeights(*((_DWORD *)a1 + 1) & 1, 0LL);
LABEL_17:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
  }
  __writecr8(OldIrql);
  return v4;
}
