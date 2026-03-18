/*
 * XREFs of AlpcpSignal @ 0x14000D460
 * Callers:
 *     ExpWorkerFactoryStartDeferredWork @ 0x1400457F0 (ExpWorkerFactoryStartDeferredWork.c)
 *     NtAlpcSendWaitReceivePort @ 0x1405DEDB0 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140645F90 (AlpcpCompleteDeferSignalRequest.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A0B0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     AlpcpQueueIoCompletionPort @ 0x14011C408 (AlpcpQueueIoCompletionPort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032DA48 (EtwTraceEnqueueWork.c)
 */

int __fastcall AlpcpSignal(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  char v7; // si
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp
  int v10; // eax
  int v11; // ecx
  _QWORD *v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  char v16; // al
  bool v17; // zf
  int v18; // ecx
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int8 v21; // cl
  unsigned __int8 IsThreadRunning; // al
  __int64 v23; // r9
  LIST_ENTRY *v24; // r8
  _DISPATCHER_HEADER *volatile v25; // rcx
  char v26; // al
  LONG SignalState; // r9d
  __int64 *Flink; // rdx
  struct _KPRCB *v29; // rcx
  unsigned __int8 v31; // [rsp+30h] [rbp-58h]
  LIST_ENTRY *p_WaitListHead; // [rsp+38h] [rbp-50h]
  struct _KPRCB *v33; // [rsp+40h] [rbp-48h]
  _KTHREAD *CurrentThread; // [rsp+48h] [rbp-40h]
  int v35; // [rsp+90h] [rbp+8h] BYREF
  _DISPATCHER_HEADER *volatile v36; // [rsp+A8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      LOBYTE(a3) = 1;
      LODWORD(v4) = AlpcpQueueIoCompletionPort(
                      *(_QWORD *)(a1 + 32),
                      *(unsigned __int8 *)(a1 + 59),
                      a3,
                      (unsigned __int8)a2);
    }
    else
    {
      LODWORD(v4) = KeReleaseSemaphoreEx(*(_QWORD *)(v4 + 248), 1, 1, a4, (_BYTE)a2 != 0);
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      if ( (_BYTE)a2 )
      {
        v7 = 1;
        if ( !(_BYTE)a3 )
          v7 = 5;
        CurrentIrql = KeGetCurrentIrql();
        v31 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        CurrentPrcb = KeGetCurrentPrcb();
        v35 = 0;
        while ( _interlockedbittestandset((volatile signed __int32 *)(v6 + 1624), 7u) )
        {
          do
            KeYieldProcessorEx(&v35);
          while ( (*(_DWORD *)(v6 + 1624) & 0x80u) != 0 );
        }
        v10 = *(_DWORD *)(v6 + 1628);
        v11 = v10 + 1;
        if ( v10 + 1 > *(_DWORD *)(v6 + 1648) || v11 < v10 )
        {
          _InterlockedAnd((volatile signed __int32 *)(v6 + 1624), 0xFFFFFF7F);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            v29 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v29, a2);
          }
          __writecr8(CurrentIrql);
          RtlRaiseStatus(-1073741753);
        }
        *(_DWORD *)(v6 + 1628) = v11;
        if ( !v10 )
        {
          v12 = *(_QWORD **)(v6 + 1632);
          if ( v12 != (_QWORD *)(v6 + 1632) )
          {
            while ( 1 )
            {
              v13 = (_QWORD *)*v12;
              v14 = (__int64)v12;
              v12 = v13;
              v15 = *(_QWORD **)(v14 + 8);
              if ( v13[1] != v14 || *v15 != v14 )
LABEL_13:
                __fastfail(3u);
              *v15 = v13;
              v13[1] = v15;
              v16 = *(_BYTE *)(v14 + 16);
              if ( v16 == 1 )
              {
                if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
                {
                  v17 = (*(_DWORD *)(v6 + 1628))-- == 1;
                  if ( v17 )
                  {
LABEL_18:
                    CurrentIrql = v31;
                    break;
                  }
                }
              }
              else
              {
                if ( v16 == 2 )
                {
                  *(_BYTE *)(v14 + 17) = 5;
                  v36 = *(_DISPATCHER_HEADER *volatile *)(v14 + 24);
                  p_WaitListHead = &v36->WaitListHead;
                  *(_QWORD *)v14 = 0LL;
                  v21 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 < 2u )
                    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                  v33 = KeGetCurrentPrcb();
                  CurrentThread = v33->CurrentThread;
                  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                  {
                    IsThreadRunning = KeIsThreadRunning(v33->CurrentThread);
                    EtwTraceEnqueueWork(v23, v14, IsThreadRunning);
                  }
                  KiAcquireKobjectLockSafe(v36);
                  v24 = p_WaitListHead;
                  v25 = v36;
                  if ( v24->Flink == v24
                    || LODWORD(v36[1].WaitListHead.Blink) >= HIDWORD(v36[1].WaitListHead.Blink)
                    || CurrentThread->Queue == v36 && CurrentThread->WaitReason == 15 )
                  {
LABEL_51:
                    SignalState = v25->SignalState;
                    v25->SignalState = SignalState + 1;
                    Flink = (__int64 *)v25[1].WaitListHead.Flink;
                    if ( (_DISPATCHER_HEADER *volatile)*Flink != &v25[1] )
                      goto LABEL_13;
                    *(_QWORD *)v14 = v25 + 1;
                    *(_QWORD *)(v14 + 8) = Flink;
                    *Flink = v14;
                    v25[1].WaitListHead.Flink = (struct _LIST_ENTRY *)v14;
                    if ( !SignalState && v24->Flink != v24 )
                    {
                      KiWakeOtherQueueWaiters(v33, v25);
                      v25 = v36;
                    }
                  }
                  else
                  {
                    v26 = KiWakeQueueWaiter((__int64)v33, v36, v14);
                    v25 = v36;
                    if ( !v26 )
                    {
                      v24 = p_WaitListHead;
                      goto LABEL_51;
                    }
                  }
                  _InterlockedAnd(&v25->Lock, 0xFFFFFF7F);
                  v17 = (*(_DWORD *)(v6 + 1628))-- == 1;
                  if ( v17 )
                    goto LABEL_18;
                  goto LABEL_58;
                }
                KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
              }
LABEL_58:
              if ( v12 == (_QWORD *)(v6 + 1632) )
                goto LABEL_18;
            }
          }
        }
        _InterlockedAnd((volatile signed __int32 *)(v6 + 1624), 0xFFFFFF7F);
        v18 = 1;
        if ( (v7 & 4) == 0 )
          v18 = 3;
        LODWORD(v4) = KiExitDispatcher((_DWORD)CurrentPrcb, v18, 1, 1, CurrentIrql);
      }
      else
      {
        LODWORD(v4) = KeReleaseSemaphoreEx((int)v6 + 1624, 1, 1, a4, 2);
      }
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 40);
      if ( (v19 & 1) != 0 )
      {
        if ( v19 >= 4 )
        {
          LODWORD(v4) = KeSetEvent((PRKEVENT)(v19 & 0xFFFFFFFFFFFFFFFCuLL), 0, a2);
          v20 = *(_QWORD *)(a1 + 40);
          if ( (v20 & 2) != 0 )
            LODWORD(v4) = ObfDereferenceObject((PVOID)(v20 & 0xFFFFFFFFFFFFFFFCuLL));
        }
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
  return v4;
}
