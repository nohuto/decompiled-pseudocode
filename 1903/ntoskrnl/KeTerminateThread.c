/*
 * XREFs of KeTerminateThread @ 0x140080CBC
 * Callers:
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiSwapThread @ 0x140040E00 (KiSwapThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiTryUnwaitThread @ 0x14006A0B0 (KiTryUnwaitThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExQueueWorkItemEx @ 0x14008074C (ExQueueWorkItemEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400E9570 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14010D238 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiProcessThreadWaitList @ 0x1401148D0 (KiProcessThreadWaitList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 *     KeDisableProfiling @ 0x1402AC350 (KeDisableProfiling.c)
 *     EtwTraceEnqueueWork @ 0x14032DA48 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeTerminateThread(ULONG_PTR BugCheckParameter1)
{
  bool v2; // zf
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // cl
  __int64 *v6; // rsi
  __int64 *v7; // rdx
  __int64 **v8; // rax
  __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v11; // r14
  _QWORD *v12; // r15
  signed __int64 *v13; // r8
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v18; // rsi
  char v19; // al
  __int64 v20; // r8
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rbp
  _QWORD *v24; // r12
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // rax
  _KTHREAD *CurrentThread; // r13
  __int64 v28; // r13
  int v29; // ecx
  __int64 *v30; // rdx
  __int64 v31; // r8
  struct _KPRCB *v32; // rsi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v34; // rcx
  int v35; // eax
  int v36; // eax
  signed __int32 v37[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v39; // [rsp+90h] [rbp+8h] BYREF
  struct _KPRCB *v40; // [rsp+98h] [rbp+10h]
  struct _KPRCB *v41; // [rsp+A0h] [rbp+18h]

  v2 = (*(_DWORD *)(BugCheckParameter1 + 116) & 0x1000) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v2 )
    KeBugCheckEx(0x107u, BugCheckParameter1, 0LL, 0LL, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter1 + 360);
  if ( v3 )
    KeDisableProfiling(BugCheckParameter1, *(_QWORD *)(v3 + 8));
  v4 = *(_QWORD *)(BugCheckParameter1 + 544);
  *(_BYTE *)(BugCheckParameter1 + 643) = 22;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v6 = (__int64 *)(BugCheckParameter1 + 760);
  if ( *(_QWORD *)(BugCheckParameter1 + 760) == *(_QWORD *)(BugCheckParameter1 + 768) )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)KiProcessListLock;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, KiProcessListLock);
    v21 = *(_QWORD *)(v4 + 584);
    v22 = *(_QWORD **)(v4 + 592);
    if ( *(_QWORD *)(v21 + 8) != v4 + 584 || *v22 != v4 + 584 )
LABEL_44:
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  KiAcquireKobjectLockSafe(v4);
  v7 = (__int64 *)*v6;
  v8 = *(__int64 ***)(BugCheckParameter1 + 768);
  if ( *(__int64 **)(*v6 + 8) != v6 || *v8 != v6 )
    goto LABEL_44;
  *v8 = v7;
  v7[1] = (__int64)v8;
  _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
  if ( *(_QWORD *)(BugCheckParameter1 + 104) )
    KiRemoveThreadFromSchedulingGroup(BugCheckParameter1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v9 = *(_QWORD *)(BugCheckParameter1 + 232);
  if ( v9 )
    KiActivateWaiterQueueWithNoLocks(BugCheckParameter1, v9, BugCheckParameter1 + 520);
  CurrentPrcb = KeGetCurrentPrcb();
  v41 = CurrentPrcb;
  KiAcquireKobjectLockSafe(BugCheckParameter1);
  v11 = (_QWORD *)(BugCheckParameter1 + 8);
  *(_DWORD *)(BugCheckParameter1 + 4) = 1;
  v12 = *(_QWORD **)(BugCheckParameter1 + 8);
  while ( v12 != v11 )
  {
    v18 = (__int64)v12;
    v12 = (_QWORD *)*v12;
    v19 = *(_BYTE *)(v18 + 16);
    if ( v19 == 1 )
    {
      v20 = *(unsigned __int16 *)(v18 + 18);
      goto LABEL_28;
    }
    if ( v19 == 2 )
    {
      *(_BYTE *)(v18 + 17) = 5;
      v23 = *(_QWORD *)(v18 + 24);
      *(_QWORD *)v18 = 0LL;
      v24 = (_QWORD *)(v23 + 8);
      v25 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v26 = KeGetCurrentPrcb();
      v40 = v26;
      CurrentThread = v26->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v31) = KeIsThreadRunning(v26->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v18, v31);
      }
      KiAcquireKobjectLockSafe(v23);
      if ( (_QWORD *)*v24 == v24
        || *(_DWORD *)(v23 + 40) >= *(_DWORD *)(v23 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v23 && CurrentThread->WaitReason == 15 )
      {
        v28 = (__int64)v40;
      }
      else
      {
        v28 = (__int64)v40;
        if ( KiWakeQueueWaiter((__int64)v40, (_QWORD *)v23, v18) )
          goto LABEL_48;
      }
      v29 = *(_DWORD *)(v23 + 4);
      *(_DWORD *)(v23 + 4) = v29 + 1;
      v30 = *(__int64 **)(v23 + 32);
      if ( *v30 != v23 + 24 )
        goto LABEL_44;
      *(_QWORD *)v18 = v23 + 24;
      *(_QWORD *)(v18 + 8) = v30;
      *v30 = v18;
      *(_QWORD *)(v23 + 32) = v18;
      if ( !v29 && (_QWORD *)*v24 != v24 )
        KiWakeOtherQueueWaiters(v28, v23);
LABEL_48:
      _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
      CurrentPrcb = v41;
    }
    else
    {
      v20 = 256LL;
LABEL_28:
      KiTryUnwaitThread((__int64)CurrentPrcb, v18, v20, 0LL);
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 16) = BugCheckParameter1 + 8;
  *v11 = v11;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter1, 0xFFFFFF7F);
  *(_BYTE *)(BugCheckParameter1 + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL);
  v13 = (signed __int64 *)(BugCheckParameter1 + 1576);
  _m_prefetchw(&PsReaperListHead);
  v14 = PsReaperListHead;
  do
  {
    *v13 = v14;
    v15 = v14;
    v14 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v13, v14);
  }
  while ( v14 != v15 );
  if ( v14 )
  {
    if ( qword_140436C38 && _interlockedbittestandreset((volatile signed __int32 *)&qword_140436C38, 0) )
    {
      v16 = 0xFFFF;
      goto LABEL_20;
    }
  }
  else
  {
    v16 = -1;
LABEL_20:
    if ( !ExQueueWorkItemEx(&PsReaperWorkItem, 2u, v16) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_140436C38, 0);
  }
  _InterlockedOr(v37, 0);
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v32 = KeGetCurrentPrcb();
    v39 = 0;
    while ( 1 )
    {
      SchedulerAssist = v32->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v35 = SchedulerAssist[5];
          SchedulerAssist[5] = v35 + 1;
          if ( v35 == -1 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v34 = v32->SchedulerAssist;
      if ( v34 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v36 = v34[5] - 1;
          v34[5] = v36;
          if ( !v36 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      do
        KeYieldProcessorEx(&v39);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    KiReleaseThreadLockSafe(BugCheckParameter1);
  }
  return KiSwapThread(BugCheckParameter1, (__int64)CurrentPrcb);
}
