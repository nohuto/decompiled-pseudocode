/*
 * XREFs of KeSetCpuSetsProcess @ 0x14018C794
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiValidateCpuSetMasks @ 0x140117B04 (KiValidateCpuSetMasks.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x14018CB28 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiWriteCpuSetMasks @ 0x14018CCA8 (KiWriteCpuSetMasks.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x14018CCF0 (KiGetProcessCpuSetMaskPointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  __int64 ProcessCpuSetMaskPointer; // r15
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 CurrentThread; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KPRCB *v16; // rbx
  bool v17; // zf
  _KTHREAD *NextThread; // rbx
  __int64 v19; // r8
  __int64 v20; // r8
  _DWORD *SchedulerAssist; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  struct _KPRCB *v25; // rcx
  struct _KPRCB *v26; // rcx
  int v27; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v28; // [rsp+24h] [rbp-24h] BYREF
  _QWORD *v29[4]; // [rsp+28h] [rbp-20h] BYREF

  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, v7, &v28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, v28, a3, a2);
    KiUpdateThreadCpuSetAffinitiesProcess(a1, v29);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)CurrentPrcb, v29, v11, v12);
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
        v16 = KeGetCurrentPrcb();
        v27 = 0;
        while ( 1 )
        {
          SchedulerAssist = v16->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v16->NestingLevel <= 1u )
            {
              v22 = SchedulerAssist[5];
              SchedulerAssist[5] = v22 + 1;
              if ( v22 == -1 )
                KiRemoveSystemWorkPriorityKick(v16);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          v23 = v16->SchedulerAssist;
          if ( v23 )
          {
            if ( v16->NestingLevel <= 1u )
            {
              v24 = v23[5] - 1;
              v23[5] = v24;
              if ( !v24 )
                KiRemoveSystemWorkPriorityKick(v16);
            }
          }
          do
            KeYieldProcessorEx(&v27, v14, v15);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
        _enable();
        KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, CurrentThread, v19);
        LOBYTE(v20) = CurrentIrql;
        v17 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v20) == 0;
      }
      else
      {
        v17 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v17 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v25);
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v26);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
