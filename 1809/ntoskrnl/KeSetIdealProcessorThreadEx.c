/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x14015CF4C
 * Callers:
 *     MiZeroInParallelWorker @ 0x14013C7C0 (MiZeroInParallelWorker.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14015CED0 (KeSetIdealProcessorThreadByNumber.c)
 *     MiZeroPageThread @ 0x140179300 (MiZeroPageThread.c)
 *     MiGetPagesToZero @ 0x1401853A0 (MiGetPagesToZero.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400D1644 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiPrcbInGroupAffinity @ 0x1400D57B4 (KiPrcbInGroupAffinity.c)
 *     KiReleaseThreadStateLock @ 0x1400D80E4 (KiReleaseThreadStateLock.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x14030FFFC (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v3; // ebp
  unsigned int v5; // r13d
  __int64 v6; // r8
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  unsigned int v10; // esi
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebp
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  struct _KPRCB *v22; // rcx
  __int64 v23[11]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+80h] [rbp+8h]
  int v25; // [rsp+88h] [rbp+10h] BYREF
  unsigned int *v26; // [rsp+90h] [rbp+18h]
  volatile signed __int64 *v27; // [rsp+98h] [rbp+20h] BYREF

  v26 = a3;
  v3 = a2;
  v5 = -1073741823;
  v6 = KiProcessorBlock[(unsigned int)a2];
  v24 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v25 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = SchedulerAssist[5];
        SchedulerAssist[5] = v18 + 1;
        if ( v18 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v19[5] - 1;
        v19[5] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v25, a2, v6);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = *(_DWORD *)(a1 + 588);
  v11 = *(_DWORD *)(a1 + 196);
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() || (*(_DWORD *)(a1 + 116) & 8) == 0 )
  {
    v12 = *(_DWORD *)(a1 + 588);
    v13 = v12;
    if ( KiPrcbInGroupAffinity(v24, a1 + 576) )
    {
      KiAcquireThreadStateLock(a1, (__int64)v23, (volatile signed __int32 **)&v27);
      v14 = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(a1 + 588) = v3;
      if ( (v14 & 8) == 0 )
        *(_DWORD *)(a1 + 196) = v3;
      KiUpdateSharedReadyQueueAffinityThread(v24, a1);
      KiReleaseThreadStateLock(v15, v23[0], v27);
      v13 = *(_DWORD *)(a1 + 588);
      v5 = 0;
    }
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 196);
    if ( KiPrcbInGroupAffinity(v24, a1 + 552) )
    {
      v5 = 0;
      *(_DWORD *)(a1 + 196) = v3;
    }
    v13 = v10;
  }
  v16 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadLockSafe(a1);
  if ( (xmmword_140542350 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v10, v13);
    if ( (xmmword_140542350 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v11, v16);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v22 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v22);
  }
  __writecr8(CurrentIrql);
  if ( v26 )
    *v26 = v12;
  return v5;
}
