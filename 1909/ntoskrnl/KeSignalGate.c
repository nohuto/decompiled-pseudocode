/*
 * XREFs of KeSignalGate @ 0x140131560
 * Callers:
 *     MiReturnWsToExpansionList @ 0x14004ADB0 (MiReturnWsToExpansionList.c)
 *     MiFinishVadDeletion @ 0x140056BF0 (MiFinishVadDeletion.c)
 *     MiCheckControlArea @ 0x1400711B0 (MiCheckControlArea.c)
 *     MiComputeDataFlushRange @ 0x140071AB0 (MiComputeDataFlushRange.c)
 *     MiWaitForFreePagesToZero @ 0x14007C490 (MiWaitForFreePagesToZero.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140088E10 (MiUnlockControlAreaSectionExtend.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     KiRetireDpcList @ 0x1400A1C50 (KiRetireDpcList.c)
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiReleaseControlAreaWaiters @ 0x1400C0420 (MiReleaseControlAreaWaiters.c)
 *     MiAttachThreadDone @ 0x1400C76B0 (MiAttachThreadDone.c)
 *     MiZeroInParallel @ 0x1400F8BB8 (MiZeroInParallel.c)
 *     MiZeroInParallelWorker @ 0x1400F8EC0 (MiZeroInParallelWorker.c)
 *     MiDereferencePageRunsEx @ 0x14012C280 (MiDereferencePageRunsEx.c)
 *     MiZeroNodePages @ 0x1401886D0 (MiZeroNodePages.c)
 *     MiDeleteZeroThreadContext @ 0x14018FB94 (MiDeleteZeroThreadContext.c)
 *     PspGetSetContextSpecialApc @ 0x1401CC3D0 (PspGetSetContextSpecialApc.c)
 *     KiEpfComplete @ 0x1402B2F90 (KiEpfComplete.c)
 *     MiSubsectionProtosCreated @ 0x1402CD058 (MiSubsectionProtosCreated.c)
 *     MiWakeExtentDeletionWaiters @ 0x1402CD37C (MiWakeExtentDeletionWaiters.c)
 *     MiIncrementAweMapCount @ 0x1402D6340 (MiIncrementAweMapCount.c)
 *     PsWatchWorkingSet @ 0x140306D30 (PsWatchWorkingSet.c)
 *     MiScrubMemoryWorker @ 0x14089CAA0 (MiScrubMemoryWorker.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x1408CCD90 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A320 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSignalGate(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v5; // r12
  _QWORD *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  char v9; // al
  bool v10; // zf
  __int64 v12; // rsi
  _QWORD *v13; // r14
  unsigned __int8 v14; // cl
  struct _KPRCB *v15; // r15
  _KTHREAD *CurrentThread; // rbp
  __int64 v17; // r8
  int v18; // r8d
  __int64 *v19; // rdx
  __int64 v20; // [rsp+70h] [rbp+8h]
  unsigned __int8 v22; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  v22 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = (__int64)CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_DWORD *)(a1 + 4) = 1;
    v5 = *(_QWORD **)(a1 + 8);
    while ( v5 != (_QWORD *)(a1 + 8) )
    {
      v6 = (_QWORD *)*v5;
      v7 = (__int64)v5;
      v5 = v6;
      v8 = *(_QWORD **)(v7 + 8);
      if ( v6[1] != v7 || *v8 != v7 )
LABEL_6:
        __fastfail(3u);
      *v8 = v6;
      v6[1] = v8;
      v9 = *(_BYTE *)(v7 + 16);
      if ( v9 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v7, *(unsigned __int16 *)(v7 + 18), 0LL) )
        {
          v10 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v10 )
            break;
        }
      }
      else if ( v9 == 2 )
      {
        *(_BYTE *)(v7 + 17) = 5;
        v12 = *(_QWORD *)(v7 + 24);
        *(_QWORD *)v7 = 0LL;
        v13 = (_QWORD *)(v12 + 8);
        v14 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v14 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v15 = KeGetCurrentPrcb();
        CurrentThread = v15->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v17) = KeIsThreadRunning(v15->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v7, v17);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v12);
        if ( (_QWORD *)*v13 == v13
          || *(_DWORD *)(v12 + 40) >= *(_DWORD *)(v12 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v12 && CurrentThread->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)v15, (_QWORD *)v12, v7) )
        {
          v18 = *(_DWORD *)(v12 + 4);
          *(_DWORD *)(v12 + 4) = v18 + 1;
          v19 = *(__int64 **)(v12 + 32);
          if ( *v19 != v12 + 24 )
            goto LABEL_6;
          *(_QWORD *)v7 = v12 + 24;
          *(_QWORD *)(v7 + 8) = v19;
          *v19 = v7;
          *(_QWORD *)(v12 + 32) = v7;
          if ( !v18 && (_QWORD *)*v13 != v13 )
            KiWakeOtherQueueWaiters((__int64)v15, v12);
        }
        _InterlockedAnd((volatile signed __int32 *)v12, 0xFFFFFF7F);
        v10 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v10 )
          break;
        CurrentPrcb = (struct _KPRCB *)v20;
      }
      else
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v7, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return KiExitDispatcher(v20, 0LL, 1u, a2, v22);
}
