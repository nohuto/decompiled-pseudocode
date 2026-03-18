/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x140126AD0
 * Callers:
 *     MiGetPagesToZero @ 0x140029C50 (MiGetPagesToZero.c)
 *     MiZeroInParallelWorker @ 0x140123300 (MiZeroInParallelWorker.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140126A54 (KeSetIdealProcessorThreadByNumber.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x14000FA70 (KiReleaseThreadStateLock.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14000FAD0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x14000FC20 (KiAcquireThreadStateLock.c)
 *     KiPrcbInGroupAffinity @ 0x1400156A4 (KiPrcbInGroupAffinity.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x14032DACC (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v5; // r13d
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  unsigned int v9; // esi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebp
  _DWORD *v17; // rcx
  int v18; // eax
  int v19; // eax
  struct _KPRCB *v21; // rcx
  __int64 v22[11]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+80h] [rbp+8h]
  int v24; // [rsp+88h] [rbp+10h] BYREF
  unsigned int *v25; // [rsp+90h] [rbp+18h]
  volatile signed __int64 *v26; // [rsp+98h] [rbp+20h] BYREF

  v25 = a3;
  v5 = -1073741823;
  v23 = KiProcessorBlock[a2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v24 = 0;
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
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = v17[5] - 1;
        v17[5] = v19;
        if ( !v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v24);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = *(_DWORD *)(a1 + 588);
  v10 = *(_DWORD *)(a1 + 196);
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() || (*(_DWORD *)(a1 + 116) & 8) == 0 )
  {
    v11 = *(_DWORD *)(a1 + 588);
    v12 = v11;
    if ( KiPrcbInGroupAffinity(v23, a1 + 576) )
    {
      KiAcquireThreadStateLock(a1, v22, (volatile signed __int32 **)&v26);
      v13 = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(a1 + 588) = a2;
      if ( (v13 & 8) == 0 )
        *(_DWORD *)(a1 + 196) = a2;
      KiUpdateSharedReadyQueueAffinityThread(v23, a1);
      KiReleaseThreadStateLock(v14, v22[0], v26);
      v12 = *(_DWORD *)(a1 + 588);
      v5 = 0;
    }
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 196);
    if ( KiPrcbInGroupAffinity(v23, a1 + 552) )
    {
      v5 = 0;
      *(_DWORD *)(a1 + 196) = a2;
    }
    v12 = v9;
  }
  v15 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadLockSafe(a1);
  if ( (xmmword_140572410 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v9, v12);
    if ( (xmmword_140572410 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v10, v15);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v21);
  }
  __writecr8(CurrentIrql);
  if ( v25 )
    *v25 = v11;
  return v5;
}
