/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x1402AD280
 * Callers:
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x1400F8F08 (KiGetThreadCpuSetMaskPointer.c)
 *     KiValidateCpuSetMasks @ 0x1400F9F0C (KiValidateCpuSetMasks.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x14012C798 (KiSendSoftwareInterrupt.c)
 *     KiSetThreadState @ 0x14013AC0C (KiSetThreadState.c)
 *     KiUpdateThreadCpuSets @ 0x140196754 (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x1401967E8 (KiWriteCpuSetMasks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x14032DACC (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  unsigned __int64 *ThreadCpuSetMaskPointer; // r13
  unsigned __int8 CurrentIrql; // r12
  volatile LONG *v10; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  unsigned int v16; // esi
  __int64 updated; // rax
  unsigned int v18; // ebp
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _KPRCB *v22; // rbx
  __int64 CurrentThread; // rsi
  struct _KPRCB *v24; // rdi
  _DWORD *v25; // rcx
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  __int64 NextThread; // rdi
  __int64 v30; // r8
  unsigned int v31; // r8d
  bool v32; // zf
  struct _KPRCB *v33; // rcx
  struct _KPRCB *v34; // rcx
  unsigned int v35; // [rsp+20h] [rbp-38h] BYREF
  int v36; // [rsp+24h] [rbp-34h] BYREF
  _QWORD *v37[6]; // [rsp+28h] [rbp-30h] BYREF
  int v38; // [rsp+78h] [rbp+20h] BYREF

  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v37[0] = 0LL;
    ThreadCpuSetMaskPointer = (unsigned __int64 *)KiGetThreadCpuSetMaskPointer(a1, &v35);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v10 = (volatile LONG *)(v7 + 64);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    v38 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = SchedulerAssist[5];
          SchedulerAssist[5] = v13 + 1;
          if ( v13 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v14[5] - 1;
          v14[5] = v15;
          if ( !v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v38);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v16 = *(_DWORD *)(a1 + 588);
    KiWriteCpuSetMasks(ThreadCpuSetMaskPointer, v35, (__int64)a3, a2);
    updated = KiUpdateThreadCpuSets(a1, (__int64 *)v37);
    v18 = *(_DWORD *)(a1 + 588);
    v19 = updated;
    KiReleaseThreadLockSafe(a1);
    if ( (xmmword_140572410 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1350LL, v16, v18);
    ExReleaseSpinLockSharedFromDpcLevel(v10);
    if ( v19 )
    {
      v21 = *(unsigned int *)(v19 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v21 )
      {
        LOBYTE(v20) = 2;
        KiSendSoftwareInterrupt(v21, v20);
      }
    }
    v22 = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)v22, v37);
    if ( CurrentIrql >= 2u )
    {
      if ( v22->NextThread && !v22->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v22, 2);
    }
    else
    {
      CurrentThread = (__int64)v22->CurrentThread;
      if ( v22->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v22->CurrentThread, 0);
        v24 = KeGetCurrentPrcb();
        v36 = 0;
        while ( 1 )
        {
          v25 = v24->SchedulerAssist;
          if ( v25 )
          {
            if ( v24->NestingLevel <= 1u )
            {
              v26 = v25[5];
              v25[5] = v26 + 1;
              if ( v26 == -1 )
                KiRemoveSystemWorkPriorityKick((__int64)v24);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v22->PrcbLock, 0LL) )
            break;
          v27 = v24->SchedulerAssist;
          if ( v27 )
          {
            if ( v24->NestingLevel <= 1u )
            {
              v28 = v27[5] - 1;
              v27[5] = v28;
              if ( !v28 )
                KiRemoveSystemWorkPriorityKick((__int64)v24);
            }
          }
          do
            KeYieldProcessorEx(&v36);
          while ( v22->PrcbLock );
        }
        NextThread = (__int64)v22->NextThread;
        v22->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v22, CurrentThread, 0LL);
        _enable();
        v22->CurrentThread = (_KTHREAD *)NextThread;
        if ( *(_BYTE *)(NextThread + 388) == 1 )
          *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                        - *(_DWORD *)(NextThread + 436)
                                        + MEMORY[0xFFFFF78000000320];
        KiSetThreadState(NextThread, 2);
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread((__int64)v22, CurrentThread, v30);
        LOBYTE(v31) = CurrentIrql;
        v32 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v31) == 0;
      }
      else
      {
        v32 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v32 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v33);
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v34 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v34);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
