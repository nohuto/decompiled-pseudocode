/*
 * XREFs of KeInsertSchedulingGroup @ 0x140115A60
 * Callers:
 *     PspEstablishJobHierarchy @ 0x140605FE0 (PspEstablishJobHierarchy.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140699C74 (PspAddSchedulingGroupToJobChain.c)
 *     MiSessionObjectCreate @ 0x14071655C (MiSessionObjectCreate.c)
 *     PspEstablishDfssHierarchy @ 0x14088AD70 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x140115F1C (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateCpuTargetByRate @ 0x1401162B8 (KiUpdateCpuTargetByRate.c)
 *     KiEnableGroupScheduling @ 0x140191418 (KiEnableGroupScheduling.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall KeInsertSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  bool v7; // zf
  _QWORD *v8; // rsi
  unsigned int v9; // ebp
  __int64 v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rax
  unsigned int v18; // r13d
  unsigned int v19; // r12d
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v21; // r15
  __int64 v22; // rsi
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  struct _KPRCB *v26; // rcx
  int v27; // eax
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  _DWORD *v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // ecx
  int v39; // eax
  struct _KPRCB *v40; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v42; // [rsp+80h] [rbp+8h] BYREF
  __int64 v43; // [rsp+88h] [rbp+10h]
  __int64 v44; // [rsp+90h] [rbp+18h]

  v43 = a2;
  if ( !KiGroupSchedulingEnabled )
    KiEnableGroupScheduling();
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = KeMaximumProcessors == 0;
  v8 = (_QWORD *)(a1 + 56);
  *(LARGE_INTEGER *)(a1 + 24) = PerformanceCounter;
  v9 = 0;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  *(_QWORD *)(a1 + 64) = a1 + 56;
  *(_QWORD *)(a1 + 56) = a1 + 56;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( !v7 )
  {
    v10 = a1 + 136;
    do
    {
      memset((void *)(v10 - 8), 0, 0x88uLL);
      v11 = (_QWORD *)(v10 + 128);
      v12 = 16LL;
      do
      {
        v11[1] = v11;
        *v11 = v11;
        v11 += 2;
        --v12;
      }
      while ( v12 );
      v13 = KiCycleDivisorShortTerm;
      *(_QWORD *)v10 = KiCycleDivisorShortTerm;
      *(_QWORD *)(v10 + 8) = v13;
      *(_QWORD *)(v10 + 384) = 0LL;
      *(_QWORD *)(v10 + 392) = 0LL;
      if ( a3 )
      {
        v31 = 424LL * v9 + a3 + 128;
        *(_QWORD *)(v10 + 400) = v31;
        *(_QWORD *)(v10 + 408) = *(_QWORD *)(v31 + 416);
        v14 = *(_BYTE *)(v31 + 113) + 1;
      }
      else
      {
        *(_QWORD *)(v10 + 400) = 0LL;
        v14 = 0;
        *(_QWORD *)(v10 + 408) = v10 - 8;
      }
      *(_BYTE *)(v10 + 105) = v14;
      ++v9;
      v10 += 424LL;
    }
    while ( v9 < KeMaximumProcessors );
  }
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 96) = a3;
    v32 = *(_QWORD **)(a3 + 88);
    if ( *v32 != a3 + 80 )
      goto LABEL_70;
    *v8 = a3 + 80;
    *(_QWORD *)(a1 + 64) = v32;
    *v32 = v8;
    *(_QWORD *)(a3 + 88) = v8;
  }
  else
  {
    v17 = (_QWORD *)qword_140422E08;
    if ( *(__int64 **)qword_140422E08 != &KiSchedulingGroupList )
      goto LABEL_70;
    *v8 = &KiSchedulingGroupList;
    *(_QWORD *)(a1 + 64) = v17;
    *v17 = v8;
    qword_140422E08 = a1 + 56;
  }
  v18 = KeNumberProcessors_0;
  v19 = 0;
  v44 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = KiProcessorBlock[v19];
      v22 = a1 + 424LL * v19;
      v42 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v33 = SchedulerAssist[5];
            SchedulerAssist[5] = v33 + 1;
            if ( v33 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v21 + 48), 0LL) )
          break;
        v30 = CurrentPrcb->SchedulerAssist;
        if ( v30 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v34 = v30[5] - 1;
            v30[5] = v34;
            if ( !v34 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v42, v15, v16);
        while ( *(_QWORD *)(v21 + 48) );
      }
      v24 = *(_QWORD **)(v21 + 24336);
      v25 = (_QWORD *)(v22 + 200);
      if ( *v24 != v21 + 24328 )
        break;
      v7 = (v43 & 0x400000000LL) == 0;
      *v25 = v21 + 24328;
      *(_QWORD *)(v22 + 208) = v24;
      *v24 = v25;
      *(_QWORD *)(v21 + 24336) = v25;
      if ( !v7 )
      {
        *(_BYTE *)(v22 + 240) |= 0xCu;
        *(_DWORD *)(v22 + 244) = 1;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 48), 0LL);
      v26 = KeGetCurrentPrcb();
      v15 = (__int64)v26->SchedulerAssist;
      if ( v15 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v35 = *(_DWORD *)(v15 + 20) - 1;
          *(_DWORD *)(v15 + 20) = v35;
          if ( !v35 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      if ( *(_QWORD *)(v21 + 24896) )
      {
        if ( *(_BYTE *)(v21 + 209) == *(_BYTE *)(*(_QWORD *)(v21 + 24904) + 593LL) )
        {
          *(_BYTE *)(v22 + 240) |= 0x20u;
          v15 = v22 + 256;
          v44 = v22 + 256;
        }
        else
        {
          v15 = v44;
        }
        *(_QWORD *)(v22 + 248) = v15;
      }
      if ( ++v19 >= v18 )
        goto LABEL_26;
    }
LABEL_70:
    __fastfail(3u);
  }
LABEL_26:
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    if ( a3 )
    {
      v38 = *(_DWORD *)(a3 + 12);
      if ( !v38 || (v39 = (unsigned __int16)a2, (unsigned __int16)a2 < v38) )
      {
        *(_DWORD *)(a3 + 12) = (unsigned __int16)a2;
LABEL_64:
        KiAssignSchedulingGroupWeights(1LL, 0LL);
        goto LABEL_65;
      }
    }
    else
    {
      v38 = KiGroupSchedulingMinimumRate;
      if ( !KiGroupSchedulingMinimumRate
        || (v39 = (unsigned __int16)a2, (unsigned __int16)a2 < (unsigned int)KiGroupSchedulingMinimumRate) )
      {
        KiGroupSchedulingMinimumRate = (unsigned __int16)a2;
        goto LABEL_64;
      }
    }
    *(_DWORD *)(a1 + 8) = (v39 << 7) / v38;
LABEL_65:
    KiUpdateCpuTargetByRate(a1, 0LL);
    goto LABEL_32;
  }
  if ( a3 )
  {
    v36 = *(_DWORD *)(a3 + 16);
    if ( !v36 || (v37 = (unsigned __int16)a2, (unsigned __int16)a2 < v36) )
    {
      v37 = (unsigned __int16)a2;
      *(_DWORD *)(a3 + 16) = (unsigned __int16)a2;
    }
    *(_DWORD *)(a3 + 20) += v37;
  }
  else
  {
    if ( !KiGroupSchedulingMinimumWeight
      || (v27 = (unsigned __int16)a2, (unsigned __int16)a2 < (unsigned int)KiGroupSchedulingMinimumWeight) )
    {
      v27 = (unsigned __int16)a2;
      KiGroupSchedulingMinimumWeight = (unsigned __int16)a2;
    }
    KiGroupSchedulingTotalWeight += v27;
  }
  KiAssignSchedulingGroupWeights(0LL, 0LL);
LABEL_32:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v40 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v40);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
