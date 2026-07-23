/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x140296C70
 * Callers:
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140003AE4 (KiSendSoftwareInterrupt.c)
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x14008A72C (KiGetThreadCpuSetMaskPointer.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiValidateCpuSetMasks @ 0x140117B04 (KiValidateCpuSetMasks.c)
 *     KiUpdateThreadCpuSets @ 0x14018CC14 (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x14018CCA8 (KiWriteCpuSetMasks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x14030FFFC (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  unsigned __int64 *ThreadCpuSetMaskPointer; // r13
  unsigned __int8 CurrentIrql; // r12
  volatile LONG *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  unsigned int v18; // esi
  __int64 updated; // rax
  unsigned int v20; // ebp
  __int64 v21; // rbx
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  struct _KPRCB *v24; // rdi
  __int64 CurrentThread; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _KPRCB *v28; // rbx
  _DWORD *v29; // rcx
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // eax
  __int64 NextThread; // rbx
  __int64 v34; // r8
  unsigned int v35; // r8d
  bool v36; // zf
  struct _KPRCB *v37; // rcx
  struct _KPRCB *v38; // rcx
  unsigned int v39; // [rsp+20h] [rbp-38h] BYREF
  int v40; // [rsp+24h] [rbp-34h] BYREF
  _QWORD *v41[6]; // [rsp+28h] [rbp-30h] BYREF
  int v42; // [rsp+78h] [rbp+20h] BYREF

  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v41[0] = 0LL;
    ThreadCpuSetMaskPointer = (unsigned __int64 *)KiGetThreadCpuSetMaskPointer(a1, &v39);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v10 = (volatile LONG *)(v7 + 64);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    v42 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = SchedulerAssist[5];
          SchedulerAssist[5] = v15 + 1;
          if ( v15 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v16 = CurrentPrcb->SchedulerAssist;
      if ( v16 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v17 = v16[5] - 1;
          v16[5] = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v42, v11, v12);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v18 = *(_DWORD *)(a1 + 588);
    KiWriteCpuSetMasks(ThreadCpuSetMaskPointer, v39, (__int64)a3, a2);
    updated = KiUpdateThreadCpuSets(a1, (__int64)v41);
    v20 = *(_DWORD *)(a1 + 588);
    v21 = updated;
    KiReleaseThreadLockSafe(a1);
    if ( (xmmword_140542350 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1350LL, v18, v20);
    ExReleaseSpinLockSharedFromDpcLevel(v10);
    if ( v21 && KeGetPcr()->Prcb.Number != *(_DWORD *)(v21 + 36) )
      KiSendSoftwareInterrupt();
    v24 = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)v24, v41, v22, v23);
    if ( CurrentIrql >= 2u )
    {
      if ( v24->NextThread && !v24->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v24, 2);
    }
    else
    {
      CurrentThread = (__int64)v24->CurrentThread;
      if ( v24->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v24->CurrentThread, 0);
        v28 = KeGetCurrentPrcb();
        v40 = 0;
        while ( 1 )
        {
          v29 = v28->SchedulerAssist;
          if ( v29 )
          {
            if ( v28->NestingLevel <= 1u )
            {
              v30 = v29[5];
              v29[5] = v30 + 1;
              if ( v30 == -1 )
                KiRemoveSystemWorkPriorityKick((__int64)v28);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v24->PrcbLock, 0LL) )
            break;
          v31 = v28->SchedulerAssist;
          if ( v31 )
          {
            if ( v28->NestingLevel <= 1u )
            {
              v32 = v31[5] - 1;
              v31[5] = v32;
              if ( !v32 )
                KiRemoveSystemWorkPriorityKick((__int64)v28);
            }
          }
          do
            KeYieldProcessorEx(&v40, v26, v27);
          while ( v24->PrcbLock );
        }
        NextThread = (__int64)v24->NextThread;
        v24->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v24, CurrentThread, 0LL);
        _enable();
        KiUpdatePriorityMatrixThreadState((__int64)v24, NextThread, 0, 2LL);
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(v24, CurrentThread, v34);
        LOBYTE(v35) = CurrentIrql;
        v36 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v35) == 0;
      }
      else
      {
        v36 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v36 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v37);
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v38);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
