/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x1400CDCE0
 * Callers:
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14004F6A0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAssociateWaitCompletionPacket @ 0x140062B00 (NtAssociateWaitCompletionPacket.c)
 *     KiRundownMutants @ 0x1400898AC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140089A10 (KeTerminateThread.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     KeSetProcess @ 0x14008F630 (KeSetProcess.c)
 *     AlpcpSignalAndWait @ 0x1400ABC10 (AlpcpSignalAndWait.c)
 *     KeReleaseMutant @ 0x1400BF950 (KeReleaseMutant.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeReleaseSemaphore @ 0x1400C5E00 (KeReleaseSemaphore.c)
 *     IoSetIoCompletionEx @ 0x1400C6270 (IoSetIoCompletionEx.c)
 *     KiTimerWaitTest @ 0x1400C7AB0 (KiTimerWaitTest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400CDE30 (NtReleaseWorkerFactoryWorker.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     KeInsertQueue @ 0x1400DD080 (KeInsertQueue.c)
 *     KePulseEvent @ 0x1400F0C40 (KePulseEvent.c)
 *     KiResumeThread @ 0x1400F1CE0 (KiResumeThread.c)
 *     KeRundownQueueCommon @ 0x1400FAB20 (KeRundownQueueCommon.c)
 *     KiInsertQueueInternal @ 0x1400FAD6C (KiInsertQueueInternal.c)
 *     KiExpireTimer2 @ 0x1400FB980 (KiExpireTimer2.c)
 *     KeRegisterObjectNotification @ 0x1400FD340 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x1400FD720 (KeInsertQueueEx.c)
 *     KeSetEventBoostPriorityEx @ 0x140103548 (KeSetEventBoostPriorityEx.c)
 *     KeWakeWaitChain @ 0x140125CA8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     KeInsertHeadQueue @ 0x140295470 (KeInsertHeadQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1400CE880 (KiSignalThread.c)
 *     KiInsertQueueInternal @ 0x1400FAD6C (KiInsertQueueInternal.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiWakeOtherQueueWaiters(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v6; // rbx
  __int64 result; // rax
  __int64 v8; // rax
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v10; // r14
  __int64 v11; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 v13; // rax
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD **)(a2 + 16);
  do
  {
    v6 = v3;
    v3 = (_QWORD *)v3[1];
    result = *((unsigned __int8 *)v6 + 16);
    if ( (_BYTE)result == 2 )
    {
      v13 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v3 != v6 )
        goto LABEL_20;
      *v3 = v13;
      *(_QWORD *)(v13 + 8) = v3;
      *((_BYTE *)v6 + 17) = 5;
      KiInsertQueueInternal(v6[3], v6);
    }
    else
    {
      if ( (_BYTE)result != 1 )
        return result;
      v8 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v3 != v6 )
LABEL_20:
        __fastfail(3u);
      *v3 = v8;
      *(_QWORD *)(v8 + 8) = v3;
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = *((unsigned __int16 *)v6 + 9);
      v11 = v6[3];
      v19 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v16 = SchedulerAssist[5];
          SchedulerAssist[5] = v16 + 1;
          if ( v16 == -1 )
LABEL_23:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
      {
        v14 = CurrentPrcb->SchedulerAssist;
        if ( v14 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v17 = v14[5] - 1;
            v14[5] = v17;
            if ( !v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v19, a2, a3);
        while ( *(_QWORD *)(v11 + 64) );
        v15 = CurrentPrcb->SchedulerAssist;
        if ( v15 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v18 = v15[5];
            v15[5] = v18 + 1;
            if ( v18 == -1 )
              goto LABEL_23;
          }
        }
      }
      if ( *(_BYTE *)(v11 + 388) == 5 )
        KiSignalThread(a1, v11, v10, v6);
      KiReleaseThreadLockSafe(v11);
      ++*((_BYTE *)v6 + 17);
    }
    result = a2 + 8;
  }
  while ( v3 != (_QWORD *)(a2 + 8) );
  return result;
}
