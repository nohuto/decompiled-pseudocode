/*
 * XREFs of KeTerminateThread @ 0x140089A10
 * Callers:
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 * Callees:
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400F4738 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1400FBEE0 (KiProcessThreadWaitList.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1401124F8 (KiActivateWaiterQueueWithNoLocks.c)
 *     ExQueueWorkItemEx @ 0x1401297B4 (ExQueueWorkItemEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     KeDisableProfiling @ 0x140295D7C (KeDisableProfiling.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeTerminateThread(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // cl
  __int64 v5; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v12; // rdx
  _QWORD *v13; // r14
  _QWORD *v14; // r15
  _QWORD *v15; // rdi
  char v16; // al
  __int64 v17; // r8
  __int64 v18; // rsi
  _QWORD *v19; // r12
  unsigned __int8 v20; // cl
  struct _KPRCB *v21; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v23; // r8
  _QWORD *v24; // rcx
  signed __int64 *v25; // r8
  signed __int64 v26; // rax
  signed __int64 v27; // rcx
  __int64 v28; // r8
  struct _KPRCB *v29; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  signed __int32 v35[8]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v36[11]; // [rsp+30h] [rbp-58h] BYREF
  int v38; // [rsp+98h] [rbp+10h] BYREF
  struct _KPRCB *v39; // [rsp+A0h] [rbp+18h]

  v1 = BugCheckParameter1;
  if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 0x1000) != 0 )
    KeBugCheckEx(0x107u, BugCheckParameter1, 0LL, 0LL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter1 + 360);
  if ( v2 )
    KeDisableProfiling(BugCheckParameter1, *(_QWORD *)(v2 + 8));
  v3 = *(_QWORD *)(v1 + 544);
  *(_BYTE *)(v1 + 643) = 22;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v5 = v1 + 760;
  if ( *(_QWORD *)(v1 + 760) == *(_QWORD *)(v1 + 768) )
  {
    v36[0] = 0LL;
    v36[1] = &KiProcessListLock;
    KxAcquireQueuedSpinLock(v36);
    v6 = *(_QWORD *)(v3 + 576);
    v7 = *(_QWORD **)(v3 + 584);
    if ( *(_QWORD *)(v6 + 8) != v3 + 576 || *v7 != v3 + 576 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    KxReleaseQueuedSpinLock(v36);
  }
  KiAcquireKobjectLockSafe(v3);
  v8 = *(_QWORD *)v5;
  v9 = *(_QWORD **)(v1 + 768);
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v9 != v5 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  if ( *(_QWORD *)(v1 + 104) )
    KiRemoveThreadFromSchedulingGroup(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v10 = *(_QWORD *)(v1 + 232);
  if ( v10 )
    KiActivateWaiterQueueWithNoLocks(v1, v10, v1 + 520);
  CurrentPrcb = KeGetCurrentPrcb();
  v39 = CurrentPrcb;
  KiAcquireKobjectLockSafe(v1);
  v13 = (_QWORD *)(v1 + 8);
  *(_DWORD *)(v1 + 4) = 1;
  v14 = *(_QWORD **)(v1 + 8);
  if ( v14 != (_QWORD *)(v1 + 8) )
  {
    while ( 1 )
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
      v16 = *((_BYTE *)v15 + 16);
      if ( v16 == 1 )
      {
        v17 = *((unsigned __int16 *)v15 + 9);
      }
      else
      {
        if ( v16 == 2 )
        {
          *((_BYTE *)v15 + 17) = 5;
          v18 = v15[3];
          *v15 = 0LL;
          v19 = (_QWORD *)(v18 + 8);
          v20 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v21 = KeGetCurrentPrcb();
          CurrentThread = v21->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v23) = KeIsThreadRunning(v21->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v15, v23);
          }
          KiAcquireKobjectLockSafe(v18);
          if ( (_QWORD *)*v19 == v19
            || *(_DWORD *)(v18 + 40) >= *(_DWORD *)(v18 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v18 && CurrentThread->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v21, v18, v15) )
          {
            v12 = *(unsigned int *)(v18 + 4);
            *(_DWORD *)(v18 + 4) = v12 + 1;
            v24 = *(_QWORD **)(v18 + 32);
            if ( *v24 != v18 + 24 )
              __fastfail(3u);
            *v15 = v18 + 24;
            v15[1] = v24;
            *v24 = v15;
            *(_QWORD *)(v18 + 32) = v15;
            if ( !(_DWORD)v12 && (_QWORD *)*v19 != v19 )
              KiWakeOtherQueueWaiters(v21, v18);
          }
          _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
          CurrentPrcb = v39;
          goto LABEL_43;
        }
        v17 = 256LL;
      }
      KiTryUnwaitThread(CurrentPrcb, v15, v17, 0LL);
LABEL_43:
      if ( v14 == v13 )
      {
        v1 = BugCheckParameter1;
        break;
      }
    }
  }
  v13[1] = v13;
  *v13 = v13;
  _InterlockedAnd((volatile signed __int32 *)v1, 0xFFFFFF7F);
  *(_BYTE *)(v1 + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL);
  v25 = (signed __int64 *)(v1 + 1560);
  _m_prefetchw(&PsReaperListHead);
  v26 = PsReaperListHead;
  do
  {
    *v25 = v26;
    v27 = v26;
    v26 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v25, v26);
  }
  while ( v26 != v27 );
  if ( v26 )
  {
    if ( !qword_14040F538 || !_interlockedbittestandreset((volatile signed __int32 *)&qword_14040F538, 0) )
      goto LABEL_56;
    v28 = 0xFFFFLL;
  }
  else
  {
    v28 = 0xFFFFFFFFLL;
  }
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2LL, v28) )
    _interlockedbittestandset((volatile signed __int32 *)&qword_14040F538, 0);
LABEL_56:
  _InterlockedOr(v35, 0);
  if ( *(_QWORD *)(v1 + 64) )
  {
    v29 = KeGetCurrentPrcb();
    v38 = 0;
    while ( 1 )
    {
      SchedulerAssist = v29->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v29->NestingLevel <= 1u )
        {
          v31 = SchedulerAssist[5];
          SchedulerAssist[5] = v31 + 1;
          if ( v31 == -1 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v1 + 64), 0LL) )
        break;
      v32 = v29->SchedulerAssist;
      if ( v32 )
      {
        if ( v29->NestingLevel <= 1u )
        {
          v33 = v32[5] - 1;
          v32[5] = v33;
          if ( !v33 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
      do
        KeYieldProcessorEx(&v38, v12, (__int64)v25);
      while ( *(_QWORD *)(v1 + 64) );
    }
    KiReleaseThreadLockSafe(v1);
  }
  return KiSwapThread(v1, (__int64)CurrentPrcb);
}
