/*
 * XREFs of KeSetCpuSetsProcess @ 0x1401962BC
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiValidateCpuSetMasks @ 0x1400F9F0C (KiValidateCpuSetMasks.c)
 *     KiSetThreadState @ 0x14013AC0C (KiSetThreadState.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x140196668 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiWriteCpuSetMasks @ 0x1401967E8 (KiWriteCpuSetMasks.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x140196830 (KiGetProcessCpuSetMaskPointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  __int64 ProcessCpuSetMaskPointer; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rsi
  struct _KPRCB *v12; // rdi
  bool v13; // zf
  __int64 NextThread; // rdi
  __int64 v15; // r8
  __int64 v16; // r8
  _DWORD *SchedulerAssist; // rcx
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  struct _KPRCB *v21; // rcx
  struct _KPRCB *v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-28h] BYREF
  int v24; // [rsp+24h] [rbp-24h] BYREF
  _QWORD *v25[4]; // [rsp+28h] [rbp-20h] BYREF

  v25[0] = 0LL;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, v7, &v23);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, v23, a3, a2);
    KiUpdateThreadCpuSetAffinitiesProcess(a1, v25);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)CurrentPrcb, v25);
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
    else
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
        v12 = KeGetCurrentPrcb();
        v24 = 0;
        while ( 1 )
        {
          SchedulerAssist = v12->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v12->NestingLevel <= 1u )
            {
              v18 = SchedulerAssist[5];
              SchedulerAssist[5] = v18 + 1;
              if ( v18 == -1 )
                KiRemoveSystemWorkPriorityKick(v12);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          v19 = v12->SchedulerAssist;
          if ( v19 )
          {
            if ( v12->NestingLevel <= 1u )
            {
              v20 = v19[5] - 1;
              v19[5] = v20;
              if ( !v20 )
                KiRemoveSystemWorkPriorityKick(v12);
            }
          }
          do
            KeYieldProcessorEx(&v24);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = (__int64)CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
        if ( *(_BYTE *)(NextThread + 388) == 1 )
          *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                        - *(_DWORD *)(NextThread + 436)
                                        + MEMORY[0xFFFFF78000000320];
        KiSetThreadState(NextThread, 2);
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v15);
        LOBYTE(v16) = CurrentIrql;
        v13 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v16) == 0;
      }
      else
      {
        v13 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v13 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v21);
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v22);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
