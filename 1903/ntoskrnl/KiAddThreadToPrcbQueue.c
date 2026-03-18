/*
 * XREFs of KiAddThreadToPrcbQueue @ 0x1400E4D74
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140011CF4 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140014610 (KiGroupSchedulingGenerationEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140014880 (KiTransitionSchedulingGroupGeneration.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400151B0 (KiDeferGroupSchedulingPreemption.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1400E927C (KiMoveScbThreadsToNewReadylist.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400E9570 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiAddThreadToReadyQueue @ 0x1402AEF34 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAddThreadToPrcbQueue(__int64 a1, __int64 a2, signed int a3, int a4, char a5)
{
  int v5; // eax
  __int64 v10; // rcx
  __int64 v11; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v13; // rbx
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  _QWORD *v24; // rcx
  _DWORD *v25; // rcx
  int v26; // eax
  int v27; // eax
  _QWORD *v28; // rdx
  int v29; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a2 + 120);
  if ( (v5 & 0x400000) != 0 )
  {
    _InterlockedOr(*(volatile signed __int32 **)(a2 + 1520), 0x40000u);
    v5 = *(_DWORD *)(a2 + 120);
  }
  v10 = *(_QWORD *)(a1 + 24896);
  if ( (v5 & 0x2000) == 0 || !v10 || (v10 & *(_QWORD *)(a2 + 576)) != v10 || a5 )
  {
    v20 = (_QWORD *)(a2 + 216);
    v21 = (_QWORD *)(a1 + 16 * (a3 + 1432LL));
    if ( a4 )
    {
      v22 = *v21;
      if ( *(_QWORD **)(*v21 + 8LL) != v21 )
        goto LABEL_35;
      *v20 = v22;
      v20[1] = v21;
      *(_QWORD *)(v22 + 8) = v20;
      *v21 = v20;
      _bittestandset((signed __int32 *)(a1 + 22812), a3);
    }
    else
    {
      v28 = (_QWORD *)v21[1];
      if ( (_QWORD *)*v28 != v21 )
        goto LABEL_35;
      *v20 = v21;
      v20[1] = v28;
      *v28 = v20;
      v21[1] = v20;
    }
    v23 = *(_DWORD *)(a1 + 22808);
    ++*(_DWORD *)(a1 + 23476);
    *(_DWORD *)(a1 + 22808) = v23 | (1 << a3);
    result = *(unsigned int *)(a2 + 84);
    *(_DWORD *)(a2 + 2032) = result;
    *(_QWORD *)(a1 + 23480) += result;
    return result;
  }
  v11 = *(_QWORD *)(a1 + 24904);
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = (_QWORD *)(v11 + 16 * (a3 + 1LL));
  v29 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = SchedulerAssist[5];
        SchedulerAssist[5] = v26 + 1;
        if ( v26 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      break;
    v25 = CurrentPrcb->SchedulerAssist;
    if ( v25 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = v25[5] - 1;
        v25[5] = v27;
        if ( !v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v29);
    while ( *(_QWORD *)v11 );
  }
  v15 = (_QWORD *)(a2 + 216);
  if ( !a4 )
  {
    v24 = (_QWORD *)v13[1];
    if ( (_QWORD *)*v24 == v13 )
    {
      *v15 = v13;
      *(_QWORD *)(a2 + 224) = v24;
      *v24 = v15;
      v13[1] = v15;
      goto LABEL_13;
    }
LABEL_35:
    __fastfail(3u);
  }
  v16 = *v13;
  if ( *(_QWORD **)(*v13 + 8LL) != v13 )
    goto LABEL_35;
  *v15 = v16;
  *(_QWORD *)(a2 + 224) = v13;
  *(_QWORD *)(v16 + 8) = v15;
  *v13 = v15;
  _bittestandreset((signed __int32 *)(a1 + 22812), a3);
LABEL_13:
  *(_DWORD *)(v11 + 8) |= 1 << a3;
  *(_DWORD *)(a2 + 536) |= 0x80000000;
  ++*(_DWORD *)(v11 + 608);
  result = *(unsigned int *)(a2 + 84);
  *(_DWORD *)(a2 + 2032) = result;
  *(_QWORD *)(v11 + 616) += result;
  _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
  v18 = KeGetCurrentPrcb();
  v19 = v18->SchedulerAssist;
  if ( v19 && v18->NestingLevel <= 1u )
  {
    result = (unsigned int)(v19[5] - 1);
    v19[5] = result;
    if ( !(_DWORD)result )
      return KiRemoveSystemWorkPriorityKick(v18);
  }
  return result;
}
