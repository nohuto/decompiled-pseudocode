/*
 * XREFs of KiExitDispatcher @ 0x1400C2EB0
 * Callers:
 *     KeFreezeProcess @ 0x140002940 (KeFreezeProcess.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     KeSetTimerEx @ 0x14001DF70 (KeSetTimerEx.c)
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14004F6A0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAssociateWaitCompletionPacket @ 0x140062B00 (NtAssociateWaitCompletionPacket.c)
 *     KiRundownMutants @ 0x1400898AC (KiRundownMutants.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     KeSetProcess @ 0x14008F630 (KeSetProcess.c)
 *     AlpcpSignalAndWait @ 0x1400ABC10 (AlpcpSignalAndWait.c)
 *     ExpQueueWorkItem @ 0x1400B7260 (ExpQueueWorkItem.c)
 *     KeReleaseMutant @ 0x1400BF950 (KeReleaseMutant.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeReleaseSemaphore @ 0x1400C5E00 (KeReleaseSemaphore.c)
 *     IoSetIoCompletionEx @ 0x1400C6270 (IoSetIoCompletionEx.c)
 *     KeAlertThreadByThreadId @ 0x1400CCE2C (KeAlertThreadByThreadId.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400CDE30 (NtReleaseWorkerFactoryWorker.c)
 *     KeInsertPriQueue @ 0x1400D1940 (KeInsertPriQueue.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     KeInsertQueue @ 0x1400DD080 (KeInsertQueue.c)
 *     KePulseEvent @ 0x1400F0C40 (KePulseEvent.c)
 *     KeRequestTerminationThread @ 0x1400F13C8 (KeRequestTerminationThread.c)
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 *     KiSchedulerApc @ 0x1400F1850 (KiSchedulerApc.c)
 *     KeForceResumeThread @ 0x1400F1C1C (KeForceResumeThread.c)
 *     KeAlertThread @ 0x1400F22B0 (KeAlertThread.c)
 *     KeSuspendThread @ 0x1400F26E8 (KeSuspendThread.c)
 *     KeResumeThread @ 0x1400F27A8 (KeResumeThread.c)
 *     KeForceResumeProcess @ 0x1400F353C (KeForceResumeProcess.c)
 *     KeThawProcess @ 0x1400F493C (KeThawProcess.c)
 *     KeRundownQueueEx @ 0x1400FAA3C (KeRundownQueueEx.c)
 *     KeRegisterObjectNotification @ 0x1400FD340 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x1400FD720 (KeInsertQueueEx.c)
 *     KeSetEventBoostPriorityEx @ 0x140103548 (KeSetEventBoostPriorityEx.c)
 *     KeTimeOutQueueWaiters @ 0x140107034 (KeTimeOutQueueWaiters.c)
 *     KeWakeWaitChain @ 0x140125CA8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     KiSetSystemTimeDpc @ 0x14016FB00 (KiSetSystemTimeDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x14028E758 (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x140295470 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x14029C2F0 (KeRundownPriQueue.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5170 (KiDirectSwitchThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiRequestProcessInSwap @ 0x14010CB00 (KiRequestProcessInSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x140310544 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiExitDispatcher(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned __int8 v5; // r12
  char v6; // al
  unsigned __int8 v7; // r13
  __int64 **v9; // r15
  __int64 v10; // rax
  __int64 *v11; // rsi
  __int64 *v12; // rdi
  __int64 *v13; // r14
  volatile signed __int32 *v14; // rbx
  __int64 *v15; // rcx
  __int64 **v16; // rax
  int v17; // eax
  volatile signed __int32 *v18; // rbx
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  unsigned __int8 v21; // si
  __int64 result; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // eax
  __int64 v31; // rbx
  bool v32; // zf
  struct _KPRCB *v33; // rcx
  struct _KPRCB *v34; // rcx
  __int64 v35; // rcx
  int v36[18]; // [rsp+20h] [rbp-48h] BYREF
  int v37; // [rsp+70h] [rbp+8h] BYREF
  char v38; // [rsp+78h] [rbp+10h]

  v5 = a4;
  v6 = a2 & 1;
  v7 = a3;
  v32 = *(_QWORD *)(a1 + 11528) == 0LL;
  v38 = a2 & 1;
  if ( !v32 )
  {
    if ( !v6 || !(unsigned __int8)KiDirectSwitchThread(a1, a4, (a2 & 2) != 0) )
    {
      v9 = *(__int64 ***)(a1 + 11528);
      *(_QWORD *)(a1 + 11528) = 0LL;
      while ( 1 )
      {
        v10 = *((unsigned __int8 *)v9 + 371);
        v11 = (__int64 *)(v9 - 27);
        v12 = *(v9 - 1);
        v9 = (__int64 **)*v9;
        v13 = &v12[6 * v10];
        do
        {
          if ( *((_BYTE *)v12 + 17) < 5u )
          {
            v14 = (volatile signed __int32 *)v12[4];
            v37 = 0;
            while ( _interlockedbittestandset(v14, 7u) )
            {
              do
                KeYieldProcessorEx(&v37, a2, a3);
              while ( (*v14 & 0x80u) != 0 );
            }
            if ( *((_BYTE *)v12 + 17) == 4 )
            {
              v15 = (__int64 *)*v12;
              v16 = (__int64 **)v12[1];
              if ( *(__int64 **)(*v12 + 8) != v12 || *v16 != v12 )
                __fastfail(3u);
              *v16 = v15;
              v15[1] = (__int64)v16;
            }
            _InterlockedAnd(v14, 0xFFFFFF7F);
          }
          v12 += 6;
        }
        while ( v12 != v13 );
        *((_BYTE *)v11 + 566) = v7;
        *((_BYTE *)v11 + 567) = v5;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceReadyThread(v11, v7, v5, 0LL);
        v17 = *((_DWORD *)v11 + 30);
        if ( (v17 & 0x20000) == 0 )
          break;
        if ( (v17 & 0x100000) != 0 )
        {
          _interlockedbittestandreset((volatile signed __int32 *)v11 + 30, 0x14u);
          if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(v11[23] + 572), 8u) & 7) != 0 )
          {
            v18 = (volatile signed __int32 *)v11[23];
            KiAcquireKobjectLockSafe(v18);
            if ( (v18[143] & 7) != 0 )
              goto LABEL_29;
            _InterlockedAnd(v18, 0xFFFFFF7F);
          }
        }
        KiDeferredReadyThread(a1, v11);
LABEL_30:
        if ( !v9 )
        {
          v6 = v38;
          goto LABEL_32;
        }
      }
      v18 = (volatile signed __int32 *)v11[23];
      KiAcquireKobjectLockSafe(v18);
      if ( (v18[143] & 7) == 0 )
      {
        _InterlockedExchangeAdd(v18 + 143, 8u);
        _InterlockedAnd(v18, 0xFFFFFF7F);
        _interlockedbittestandreset((volatile signed __int32 *)v11 + 30, 0x14u);
        *((_BYTE *)v11 + 388) = 6;
        a2 = (__int64)(v11 + 27);
        _m_prefetchw(&KiStackInSwapListHead);
        v19 = KiStackInSwapListHead;
        do
        {
          *(_QWORD *)a2 = v19;
          v20 = v19;
          v19 = _InterlockedCompareExchange64(&KiStackInSwapListHead, a2, v19);
        }
        while ( v19 != v20 );
        if ( !v19 )
          KeSetEvent(&KiSwapEvent, 10, 0);
        goto LABEL_30;
      }
LABEL_29:
      KiRequestProcessInSwap(v11, v18);
      goto LABEL_30;
    }
    goto LABEL_64;
  }
LABEL_32:
  if ( v6 )
  {
LABEL_64:
    v35 = *(_QWORD *)(a1 + 8);
    result = a5;
    *(_DWORD *)(v35 + 116) |= 4u;
    *(_BYTE *)(v35 + 390) = result;
    return result;
  }
  v21 = a5;
  result = *(_QWORD *)(a1 + 16);
  if ( a5 >= 2u )
  {
    if ( result )
    {
      result = *(unsigned __int8 *)(a1 + 11882);
      if ( !(_BYTE)result )
        return KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
    }
  }
  else
  {
    v23 = *(_QWORD *)(a1 + 8);
    if ( result )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
      CurrentPrcb = KeGetCurrentPrcb();
      v36[0] = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v28 = SchedulerAssist[5];
            SchedulerAssist[5] = v28 + 1;
            if ( v28 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v29 = CurrentPrcb->SchedulerAssist;
        if ( v29 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v30 = v29[5] - 1;
            v29[5] = v30;
            if ( !v30 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(v36, v24, v25);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v31 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v23, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(a1, v31, 0LL, 2LL);
      *(_BYTE *)(v23 + 643) = 32;
      *(_BYTE *)(v23 + 390) = v21;
      KiQueueReadyThread(a1, v23);
      v32 = (unsigned __int8)KiSwapContext(v23, v31, v21) == 0;
    }
    else
    {
      v32 = (*(_DWORD *)(v23 + 116) & 0x40) == 0;
    }
    if ( !v32 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v33);
      }
      __writecr8(1uLL);
      *(_DWORD *)(v23 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v34 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v34);
    }
    result = v21;
    __writecr8(v21);
  }
  return result;
}
