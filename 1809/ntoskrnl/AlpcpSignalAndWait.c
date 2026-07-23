/*
 * XREFs of AlpcpSignalAndWait @ 0x1400ABC10
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x1406352B0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1406A5DE4 (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 *     AlpcpLogUnwait @ 0x14084CC88 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpSignalAndWait(
        __int64 a1,
        void *a2,
        KWAIT_REASON a3,
        KPROCESSOR_MODE a4,
        PLARGE_INTEGER Timeout,
        char a6)
{
  _QWORD *v7; // rbp
  BOOLEAN v8; // r15
  __int64 v9; // rbx
  char v10; // r12
  unsigned __int8 CurrentIrql; // dl
  unsigned int v12; // eax
  _QWORD *v13; // rsi
  __int64 v14; // rsi
  unsigned __int8 v15; // bl
  __int64 v16; // rbx
  _QWORD *v17; // r12
  unsigned __int8 v18; // cl
  struct _KPRCB *v19; // rbp
  _KTHREAD *CurrentThread; // r14
  _KTHREAD *Thread; // rax
  bool v22; // r13
  unsigned int v23; // eax
  struct _KTHREAD *v24; // rcx
  unsigned int v25; // ebx
  void *v26; // rcx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // edx
  _QWORD *v31; // rcx
  __int64 v32; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 IsThreadRunning; // al
  __int64 v35; // rcx
  _QWORD v36[2]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int8 v37; // [rsp+40h] [rbp-58h]
  char v38; // [rsp+A0h] [rbp+8h]

  v7 = *(_QWORD **)(a1 + 32);
  v8 = (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
  if ( v7 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v9 = v7[6];
      v10 = *(_BYTE *)(a1 + 59);
      v36[1] = v9;
      v36[0] = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v37 = CurrentIrql;
      KxAcquireQueuedSpinLock(v36);
      v12 = *(_DWORD *)(v9 + 12);
      if ( v12 >= *(_DWORD *)(v9 + 8) )
      {
        v14 = 0LL;
        if ( v10 )
          ++*(_DWORD *)(v9 + 20);
        else
          ++*(_DWORD *)(v9 + 16);
      }
      else
      {
        v13 = *(_QWORD **)(v9 + 32);
        if ( v13 )
        {
          *(_QWORD *)(v9 + 32) = *v13;
          v12 = *(_DWORD *)(v9 + 12);
        }
        v14 = v13[1];
        *(_DWORD *)(v9 + 12) = v12 + 1;
      }
      KxReleaseQueuedSpinLock(v36);
      v15 = v37;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v37 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v15);
      if ( _InterlockedCompareExchange64(v7 + 44, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v7 + 44);
      KeAbPostRelease((ULONG_PTR)(v7 + 44));
      if ( v14 )
      {
        v16 = v7[4];
        *(_QWORD *)(v14 + 24) = v7[5];
        *(_QWORD *)(v14 + 32) = -(__int64)(v10 != 0);
        *(_DWORD *)(v14 + 40) = 0;
        v17 = (_QWORD *)(v16 + 8);
        *(_QWORD *)(v14 + 48) = 0LL;
        v18 = KeGetCurrentIrql();
        v38 = v18;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v19 = KeGetCurrentPrcb();
        CurrentThread = v19->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(v19->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v14, IsThreadRunning);
        }
        Thread = CurrentThread;
        if ( CurrentThread[1].WaitBlock[1].Thread )
          Thread = CurrentThread[1].WaitBlock[1].Thread;
        v22 = BYTE2(Thread->Process[2].Header.WaitListHead.Flink) == 2;
        KiAcquireKobjectLockSafe(v16);
        if ( (_QWORD *)*v17 == v17
          || *(_DWORD *)(v16 + 40) >= *(_DWORD *)(v16 + 44) && !v22
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v16 && CurrentThread->WaitReason == 15
          || !(unsigned __int8)KiWakeQueueWaiter(v19, v16, v14) )
        {
          v30 = *(_DWORD *)(v16 + 4);
          *(_DWORD *)(v16 + 4) = v30 + 1;
          v31 = *(_QWORD **)(v16 + 32);
          if ( *v31 != v16 + 24 )
            __fastfail(3u);
          *(_QWORD *)v14 = v16 + 24;
          *(_QWORD *)(v14 + 8) = v31;
          *v31 = v14;
          *(_QWORD *)(v16 + 32) = v14;
          if ( !v30 && (_QWORD *)*v17 != v17 )
            KiWakeOtherQueueWaiters(v19, v16);
        }
        _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)v19, 3, 1, 0, v38);
      }
    }
    else
    {
      KeReleaseSemaphoreEx(v7[31], 1, 1, a4, 1);
    }
  }
  else
  {
    v28 = *(_QWORD *)(a1 + 24);
    if ( v28 )
    {
      v29 = 5;
      if ( a6 )
        v29 = 1;
      KeReleaseSemaphoreEx(v28 + 1608, 1, 1, a4, v29);
    }
    else
    {
      v32 = *(_QWORD *)(a1 + 40);
      if ( v32 )
      {
        KeSetEvent((PRKEVENT)(v32 & 0xFFFFFFFFFFFFFFFEuLL), 0, 1u);
        v35 = *(_QWORD *)(a1 + 40);
        if ( (v35 & 1) != 0 )
          ObfDereferenceObject((PVOID)(v35 & 0xFFFFFFFFFFFFFFFEuLL));
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
  KeLeaveCriticalRegion();
  v23 = KeWaitForSingleObject(a2, a3, a4, v8, Timeout);
  v24 = KeGetCurrentThread();
  v25 = v23;
  --v24->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v23);
  v26 = *(void **)(a1 + 32);
  if ( v26 )
    ObfDereferenceObject(v26);
  return v25;
}
