/*
 * XREFs of KeSignalGate @ 0x1401276B0
 * Callers:
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     MiFinishVadDeletion @ 0x140067770 (MiFinishVadDeletion.c)
 *     MiProcessWorkingSets @ 0x14006CED0 (MiProcessWorkingSets.c)
 *     MiCheckControlArea @ 0x1400764A0 (MiCheckControlArea.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140092C28 (MiUnlockControlAreaSectionExtend.c)
 *     KiRetireDpcList @ 0x1400C64C0 (KiRetireDpcList.c)
 *     MiAttachThreadDone @ 0x1400EEA9C (MiAttachThreadDone.c)
 *     MiReturnWsToExpansionList @ 0x1400F3384 (MiReturnWsToExpansionList.c)
 *     MmDetachSession @ 0x14011A5C0 (MmDetachSession.c)
 *     MiDereferencePageRunsEx @ 0x14012B5F8 (MiDereferencePageRunsEx.c)
 *     MiZeroInParallel @ 0x14013C544 (MiZeroInParallel.c)
 *     MiZeroInParallelWorker @ 0x14013C6C0 (MiZeroInParallelWorker.c)
 *     MiZeroNodePages @ 0x14017F400 (MiZeroNodePages.c)
 *     MiDeleteZeroThreadContext @ 0x1401850B4 (MiDeleteZeroThreadContext.c)
 *     PspGetSetContextSpecialApc @ 0x1401C5230 (PspGetSetContextSpecialApc.c)
 *     KiEpfComplete @ 0x14029BCFC (KiEpfComplete.c)
 *     MiIncrementAweMapCount @ 0x1402B0DB4 (MiIncrementAweMapCount.c)
 *     MiSubsectionProtosCreated @ 0x1402B704C (MiSubsectionProtosCreated.c)
 *     PsWatchWorkingSet @ 0x1402E9CC0 (PsWatchWorkingSet.c)
 *     MiScrubMemoryWorker @ 0x14085FAF0 (MiScrubMemoryWorker.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x14088F0F0 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1400ACA10 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2F70 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4DD0 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDC60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE10 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14028DDA8 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FD8C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSignalGate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 *v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // r12
  _QWORD *v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  char v12; // al
  bool v13; // zf
  __int64 v15; // rsi
  _QWORD *v16; // r14
  unsigned __int8 v17; // cl
  struct _KPRCB *v18; // r15
  _KTHREAD *CurrentThread; // rbp
  __int64 v20; // r8
  __int64 v21; // [rsp+70h] [rbp+8h]
  unsigned int v22; // [rsp+78h] [rbp+10h]
  unsigned __int8 v23; // [rsp+80h] [rbp+18h]

  v22 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v23 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = (__int64)CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3);
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_DWORD *)(a1 + 4) = 1;
    v8 = *(_QWORD **)(a1 + 8);
    while ( v8 != (_QWORD *)(a1 + 8) )
    {
      v9 = (_QWORD *)*v8;
      v10 = (__int64)v8;
      v8 = v9;
      v11 = *(_QWORD **)(v10 + 8);
      if ( v9[1] != v10 || *v11 != v10 )
LABEL_33:
        __fastfail(3u);
      *v11 = v9;
      v9[1] = v11;
      v12 = *(_BYTE *)(v10 + 16);
      if ( v12 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v10, *(unsigned __int16 *)(v10 + 18), 0LL) )
        {
          v13 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v13 )
            break;
        }
      }
      else if ( v12 == 2 )
      {
        *(_BYTE *)(v10 + 17) = 5;
        v15 = *(_QWORD *)(v10 + 24);
        *(_QWORD *)v10 = 0LL;
        v16 = (_QWORD *)(v15 + 8);
        v17 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v18 = KeGetCurrentPrcb();
        CurrentThread = v18->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v20) = KeIsThreadRunning(v18->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v10, v20);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v15, (__int64)v6, v7);
        if ( (_QWORD *)*v16 == v16
          || *(_DWORD *)(v15 + 40) >= *(_DWORD *)(v15 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v15 && CurrentThread->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)v18, v15, v10) )
        {
          v7 = *(unsigned int *)(v15 + 4);
          *(_DWORD *)(v15 + 4) = v7 + 1;
          v6 = *(__int64 **)(v15 + 32);
          if ( *v6 != v15 + 24 )
            goto LABEL_33;
          *(_QWORD *)v10 = v15 + 24;
          *(_QWORD *)(v10 + 8) = v6;
          *v6 = v10;
          *(_QWORD *)(v15 + 32) = v10;
          if ( !(_DWORD)v7 && (_QWORD *)*v16 != v16 )
            KiWakeOtherQueueWaiters((__int64)v18, v15, v7);
        }
        _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
        v13 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v13 )
          break;
        CurrentPrcb = (struct _KPRCB *)v21;
      }
      else
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v10, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return KiExitDispatcher(v21, 0LL, 1LL, v22, v23);
}
