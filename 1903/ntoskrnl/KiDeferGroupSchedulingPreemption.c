/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x1400151B0
 * Callers:
 *     KiDispatchInterrupt @ 0x1401CA8D0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiShouldPreemptionBeDeferred @ 0x1400153B0 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadRankNonZero @ 0x140015570 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140015600 (KiGetThreadEffectiveRankNonZero.c)
 *     KiPrcbInGroupAffinity @ 0x1400156A4 (KiPrcbInGroupAffinity.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400AF054 (KiInsertDeferredPreemptionApc.c)
 *     KiAddThreadToPrcbQueue @ 0x1400E4D74 (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToScbQueue @ 0x1400E8E44 (KiAddThreadToScbQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0620 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  int ThreadEffectiveRankNonZero; // r14d
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // rdi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbp
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  char IsThreadRankNonZero; // al
  char v16; // cl
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // r8
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  char v25; // [rsp+60h] [rbp+8h] BYREF
  int v26; // [rsp+70h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !(unsigned __int8)KiShouldPreemptionBeDeferred(a1) )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  ThreadEffectiveRankNonZero = 0;
  v26 = 0;
  v25 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = SchedulerAssist[5];
        SchedulerAssist[5] = v20 + 1;
        if ( v20 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v4);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      break;
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = v19[5] - 1;
        v19[5] = v21;
        if ( !v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v4);
      }
    }
    do
      KeYieldProcessorEx(&v26);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v8 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v8 == *(_QWORD *)(a2 + 24)
    || !(unsigned int)KiPrcbInGroupAffinity(a2, a1 + 576)
    || ((v11 = *(_QWORD *)(v8 + 104)) == 0
     || (v11 += *(unsigned int *)(a2 + 216)) == 0
     || (LOBYTE(v10) = 1,
         (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v8, v11, v9, v10, (__int64)&v25)) == 0))
    && *(_BYTE *)(v8 + 195) > *(_BYTE *)(a1 + 195) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    if ( v13 && v12->NestingLevel <= 1u )
    {
      v24 = v13[5] - 1;
      v13[5] = v24;
      if ( !v24 )
        KiRemoveSystemWorkPriorityKick(v12, v13);
    }
    return 0;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0
    || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, a2), v16 = 1, !IsThreadRankNonZero) )
  {
    v16 = *(_BYTE *)(a1 + 195);
  }
  **(_BYTE **)(a2 + 56) = v16;
  if ( *(_QWORD *)(a2 + 25016) )
  {
    v22 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( a1 != *(_QWORD *)(a2 + 24) )
      v22 = (unsigned int)v16;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 25016), v22, 0LL);
  }
  *(_BYTE *)(v8 + 388) = 1;
  if ( ThreadEffectiveRankNonZero )
    KiAddThreadToScbQueue(a2, v11, v8, 1LL);
  else
    KiAddThreadToPrcbQueue(a2, v8, *(char *)(v8 + 195), 1, v25);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  v17 = KeGetCurrentPrcb();
  v18 = v17->SchedulerAssist;
  if ( v18 )
  {
    if ( v17->NestingLevel <= 1u )
    {
      v23 = (unsigned int)(v18[5] - 1);
      v18[5] = v23;
      if ( !(_DWORD)v23 )
        KiRemoveSystemWorkPriorityKick(v17, v23);
    }
  }
  KiInsertDeferredPreemptionApc(a2, a1, 0LL);
  return 1;
}
