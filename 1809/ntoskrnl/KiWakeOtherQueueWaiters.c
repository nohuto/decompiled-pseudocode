/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x1400CDC40
 * Callers:
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14004F6A0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAssociateWaitCompletionPacket @ 0x140062B00 (NtAssociateWaitCompletionPacket.c)
 *     KiRundownMutants @ 0x1400898BC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140089A20 (KeTerminateThread.c)
 *     PpmReleaseLock @ 0x14008BC30 (PpmReleaseLock.c)
 *     KeSetProcess @ 0x14008F710 (KeSetProcess.c)
 *     AlpcpSignalAndWait @ 0x1400ABCB0 (AlpcpSignalAndWait.c)
 *     KeReleaseMutant @ 0x1400BF9F0 (KeReleaseMutant.c)
 *     IopCompleteRequest @ 0x1400BFCF0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C10D0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     KeReleaseSemaphore @ 0x1400C5EA0 (KeReleaseSemaphore.c)
 *     IoSetIoCompletionEx @ 0x1400C6310 (IoSetIoCompletionEx.c)
 *     KiTimerWaitTest @ 0x1400C7B50 (KiTimerWaitTest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400CDD90 (NtReleaseWorkerFactoryWorker.c)
 *     KeReleaseSemaphoreEx @ 0x1400D2950 (KeReleaseSemaphoreEx.c)
 *     KeInsertQueue @ 0x1400DCFE0 (KeInsertQueue.c)
 *     KePulseEvent @ 0x1400F0BA0 (KePulseEvent.c)
 *     KiResumeThread @ 0x1400F1C40 (KiResumeThread.c)
 *     KeRundownQueueCommon @ 0x1400FAA80 (KeRundownQueueCommon.c)
 *     KiInsertQueueInternal @ 0x1400FACCC (KiInsertQueueInternal.c)
 *     KiExpireTimer2 @ 0x1400FB8E0 (KiExpireTimer2.c)
 *     KeRegisterObjectNotification @ 0x1400FD2A0 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x1400FD680 (KeInsertQueueEx.c)
 *     KeSetEventBoostPriorityEx @ 0x1401034A8 (KeSetEventBoostPriorityEx.c)
 *     KeWakeWaitChain @ 0x140125BB8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x140127690 (KeSignalGate.c)
 *     KeInsertHeadQueue @ 0x140295180 (KeInsertHeadQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1400CE7E0 (KiSignalThread.c)
 *     KiInsertQueueInternal @ 0x1400FACCC (KiInsertQueueInternal.c)
 *     KiReleaseThreadLockSafe @ 0x14010C3F0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
