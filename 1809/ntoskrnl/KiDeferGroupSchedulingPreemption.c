/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x1400D2D20
 * Callers:
 *     KiDispatchInterrupt @ 0x1401C41B0 (KiDispatchInterrupt.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1400D1500 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400D15A0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400D3850 (KiShouldPreemptionBeDeferred.c)
 *     KiPrcbInGroupAffinity @ 0x1400D57B4 (KiPrcbInGroupAffinity.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400F2868 (KiInsertDeferredPreemptionApc.c)
 *     KiAddThreadToScbQueue @ 0x140117004 (KiAddThreadToScbQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1401175DC (KiAddThreadToPrcbQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KPRCB *CurrentPrcb; // rdi
  int ThreadEffectiveRankNonZero; // r14d
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  bool IsThreadRankNonZero; // al
  char v17; // cl
  __int64 v18; // rdx
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // r8
  int v21; // edx
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  int v25; // eax
  char v26; // [rsp+60h] [rbp+8h] BYREF
  int v27; // [rsp+70h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !(unsigned __int8)KiShouldPreemptionBeDeferred(a1) )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  ThreadEffectiveRankNonZero = 0;
  v27 = 0;
  v26 = 0;
  while ( 1 )
  {
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
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      break;
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v10[5] - 1;
        v10[5] = v11;
        if ( !v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v27, v4, v5);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v12 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v12 == *(_QWORD *)(a2 + 24)
    || !(unsigned int)KiPrcbInGroupAffinity(a2, a1 + 576)
    || ((v15 = *(_QWORD *)(v12 + 104)) == 0
     || (v15 += *(unsigned int *)(a2 + 216)) == 0
     || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v12, v15, v13, 1, (bool *)&v26)) == 0)
    && *(_BYTE *)(v12 + 195) > *(_BYTE *)(a1 + 195) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    v23 = KeGetCurrentPrcb();
    v24 = v23->SchedulerAssist;
    if ( v24 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        v25 = v24[5] - 1;
        v24[5] = v25;
        if ( !v25 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    return 0;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0
    || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, (struct _KPRCB *)a2), v17 = 1, !IsThreadRankNonZero) )
  {
    v17 = *(_BYTE *)(a1 + 195);
  }
  **(_BYTE **)(a2 + 56) = v17;
  if ( *(_QWORD *)(a2 + 25016) )
  {
    v18 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( a1 != *(_QWORD *)(a2 + 24) )
      v18 = (unsigned int)v17;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 25016), v18, 0LL, v14);
  }
  KiSetThreadState(v12, 1LL);
  if ( ThreadEffectiveRankNonZero )
    KiAddThreadToScbQueue(a2, v15, v12, 1LL);
  else
    KiAddThreadToPrcbQueue(a2, v12, *(char *)(v12 + 195), 1, v26);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v19 = KeGetCurrentPrcb();
  v20 = v19->SchedulerAssist;
  if ( v20 )
  {
    if ( v19->NestingLevel <= 1u )
    {
      v21 = v20[5] - 1;
      v20[5] = v21;
      if ( !v21 )
        KiRemoveSystemWorkPriorityKick(v19);
    }
  }
  KiInsertDeferredPreemptionApc(a2, a1, 0LL);
  return 1;
}
