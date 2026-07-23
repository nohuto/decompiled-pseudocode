/*
 * XREFs of KeRemoveSchedulingGroup @ 0x140115890
 * Callers:
 *     PspEstablishJobHierarchy @ 0x140605FE0 (PspEstablishJobHierarchy.c)
 *     PspRemoveCpuRateControl @ 0x140699B14 (PspRemoveCpuRateControl.c)
 *     MiSessionObjectDelete @ 0x140853310 (MiSessionObjectDelete.c)
 *     PspEstablishDfssHierarchy @ 0x14088AD70 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x140115F1C (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x140116198 (KiUpdateMinimumWeight.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeRemoveSchedulingGroup(unsigned __int16 *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 *v4; // rcx
  __int64 v5; // r15
  __int64 v6; // rbp
  unsigned int v7; // r12d
  __int64 v8; // rdi
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v10; // r14
  __int64 v11; // r13
  _DWORD *SchedulerAssist; // rcx
  unsigned __int16 *v13; // rax
  __int64 v14; // rdx
  unsigned __int16 **v15; // rcx
  struct _KPRCB *v16; // rcx
  __int64 v17; // r8
  unsigned __int8 OldIrql; // bl
  _DWORD *v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  struct _KPRCB *v25; // rcx
  struct _KLOCK_QUEUE_HANDLE v26; // [rsp+20h] [rbp-48h] BYREF
  int v27; // [rsp+70h] [rbp+8h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &v26);
  v3 = *((_QWORD *)a1 + 7);
  v4 = (__int64 *)*((_QWORD *)a1 + 8);
  if ( *(unsigned __int16 **)(v3 + 8) != a1 + 28 || (unsigned __int16 *)*v4 != a1 + 28 )
    goto LABEL_43;
  *v4 = v3;
  v5 = 0LL;
  *(_QWORD *)(v3 + 8) = v4;
  v6 = 0LL;
  v7 = KeNumberProcessors_0;
  v8 = *((_QWORD *)a1 + 12);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = KiProcessorBlock[v6];
      v11 = 212LL * (unsigned int)v6;
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
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 48), 0LL) )
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
          KeYieldProcessorEx(&v27, v3, v2);
        while ( *(_QWORD *)(v10 + 48) );
      }
      v13 = &a1[v11 + 100];
      v14 = *(_QWORD *)v13;
      v15 = (unsigned __int16 **)*((_QWORD *)v13 + 1);
      if ( *(unsigned __int16 **)(*(_QWORD *)v13 + 8LL) != v13 || *v15 != v13 )
        break;
      *v15 = (unsigned __int16 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
      v16 = KeGetCurrentPrcb();
      v3 = (__int64)v16->SchedulerAssist;
      if ( v3 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v23 = *(_DWORD *)(v3 + 20) - 1;
          *(_DWORD *)(v3 + 20) = v23;
          if ( !v23 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      v5 += *(_QWORD *)&a1[v11 + 92];
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v7 )
        goto LABEL_11;
    }
LABEL_43:
    __fastfail(3u);
  }
LABEL_11:
  if ( (*((_DWORD *)a1 + 1) & 1) == 0 )
  {
    v24 = *a1;
    if ( v8 )
      *(_DWORD *)(v8 + 20) -= v24;
    else
      KiGroupSchedulingTotalWeight -= v24;
  }
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 80) == v8 + 80 )
    {
      *(_DWORD *)(v8 + 16) = 0;
      *(_DWORD *)(v8 + 12) = 0;
      goto LABEL_17;
    }
    v17 = v8;
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
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v26);
  OldIrql = v26.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v26.OldIrql < 2u )
  {
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
  }
  __writecr8(OldIrql);
  return v5;
}
