/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x1400152E0
 * Callers:
 *     KiDispatchInterrupt @ 0x1401CB450 (KiDispatchInterrupt.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140014B90 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140014C20 (KiGetThreadEffectiveRankNonZero.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400154E0 (KiShouldPreemptionBeDeferred.c)
 *     KiPrcbInGroupAffinity @ 0x140015A88 (KiPrcbInGroupAffinity.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400E55A4 (KiInsertDeferredPreemptionApc.c)
 *     KiAddThreadToPrcbQueue @ 0x1400E9D14 (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToScbQueue @ 0x140115AB4 (KiAddThreadToScbQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0380 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  int ThreadEffectiveRankNonZero; // r14d
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rbp
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  bool IsThreadRankNonZero; // al
  char v15; // cl
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // r8
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // eax
  char v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+70h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !(unsigned __int8)KiShouldPreemptionBeDeferred(a1) )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  ThreadEffectiveRankNonZero = 0;
  v25 = 0;
  v24 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = SchedulerAssist[5];
        SchedulerAssist[5] = v19 + 1;
        if ( v19 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v4);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      break;
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v18[5] - 1;
        v18[5] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v4);
      }
    }
    do
      KeYieldProcessorEx(&v25);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v8 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v8 == *(_QWORD *)(a2 + 24)
    || !(unsigned int)KiPrcbInGroupAffinity(a2, a1 + 576)
    || ((v10 = *(_QWORD *)(v8 + 104)) == 0
     || (v10 += *(unsigned int *)(a2 + 216)) == 0
     || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v8, v10, v9, 1, (bool *)&v24)) == 0)
    && *(_BYTE *)(v8 + 195) > *(_BYTE *)(a1 + 195) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    v11 = KeGetCurrentPrcb();
    v12 = v11->SchedulerAssist;
    if ( v12 && v11->NestingLevel <= 1u )
    {
      v23 = v12[5] - 1;
      v12[5] = v23;
      if ( !v23 )
        KiRemoveSystemWorkPriorityKick(v11, v12);
    }
    return 0;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0
    || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, (struct _KPRCB *)a2), v15 = 1, !IsThreadRankNonZero) )
  {
    v15 = *(_BYTE *)(a1 + 195);
  }
  **(_BYTE **)(a2 + 56) = v15;
  if ( *(_QWORD *)(a2 + 25016) )
  {
    v21 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( a1 != *(_QWORD *)(a2 + 24) )
      v21 = (unsigned int)v15;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 25016), v21, 0LL);
  }
  *(_BYTE *)(v8 + 388) = 1;
  if ( ThreadEffectiveRankNonZero )
    KiAddThreadToScbQueue(a2, v10, v8, 1LL);
  else
    KiAddThreadToPrcbQueue(a2, v8, *(char *)(v8 + 195), 1, v24);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v16 = KeGetCurrentPrcb();
  v17 = v16->SchedulerAssist;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v22 = (unsigned int)(v17[5] - 1);
      v17[5] = v22;
      if ( !(_DWORD)v22 )
        KiRemoveSystemWorkPriorityKick(v16, v22);
    }
  }
  KiInsertDeferredPreemptionApc(a2, a1, 0LL);
  return 1;
}
