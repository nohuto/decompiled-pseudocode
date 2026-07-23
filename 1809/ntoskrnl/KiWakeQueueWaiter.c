/*
 * XREFs of KiWakeQueueWaiter @ 0x1400AC950
 * Callers:
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14004F6A0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
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
 *     KiActivateWaiterKQueue @ 0x14011262C (KiActivateWaiterKQueue.c)
 *     KeWakeWaitChain @ 0x140125CA8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     KeInsertHeadQueue @ 0x140295470 (KeInsertHeadQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiInsertDeferredReadyList @ 0x1400ACB08 (KiInsertDeferredReadyList.c)
 *     KiRemovePrcbWaitEntry @ 0x1400ACB50 (KiRemovePrcbWaitEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // r14
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  char v9; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v11; // rsi
  _DWORD *SchedulerAssist; // rcx
  char v13; // cl
  int v14; // eax
  __int64 v15; // rcx
  struct _KPRCB *v16; // rcx
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD **)(a2 + 8);
  v4 = (_QWORD *)(a2 + 8);
  do
  {
    v7 = v3;
    v3 = (_QWORD *)*v3;
    if ( *((_BYTE *)v7 + 16) != 3 )
      return 0;
    v8 = (_QWORD *)v7[1];
    if ( (_QWORD *)v3[1] != v7 || (_QWORD *)*v8 != v7 )
      __fastfail(3u);
    *v8 = v3;
    v9 = 0;
    v3[1] = v8;
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = v7[3];
    v24 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = SchedulerAssist[5];
        SchedulerAssist[5] = v20 + 1;
        if ( v20 == -1 )
LABEL_29:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
    {
      v18 = CurrentPrcb->SchedulerAssist;
      if ( v18 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v21 = v18[5] - 1;
          v18[5] = v21;
          if ( !v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v24, a2, a3);
      while ( *(_QWORD *)(v11 + 64) );
      v19 = CurrentPrcb->SchedulerAssist;
      if ( v19 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = v19[5];
          v19[5] = v22 + 1;
          if ( v22 == -1 )
            goto LABEL_29;
        }
      }
    }
    if ( *(_BYTE *)(v11 + 388) == 5 )
    {
      v13 = *(_BYTE *)(v11 + 112);
      v9 = 0;
      v14 = v13 & 7;
      if ( v14 == 1 || v14 == 4 )
      {
        v15 = *(_QWORD *)(v11 + 232);
        if ( v15 )
        {
          if ( (*(_BYTE *)v15 & 0x7F) == 0x15 )
          {
            *(_DWORD *)(v11 + 540) = (unsigned __int8)*(_DWORD *)(v11 + 540);
            _InterlockedIncrement((volatile signed __int32 *)(v15 + 4LL * *(unsigned int *)(v11 + 540) + 536));
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v15 + 40));
          }
        }
        KiRemovePrcbWaitEntry(v11);
        KiInsertDeferredReadyList(a1 + 11528, v11);
        *(_QWORD *)(v11 + 200) = a3;
        goto LABEL_13;
      }
      if ( (*(_BYTE *)(v11 + 112) & 7) == 0 )
      {
        *(_BYTE *)(v11 + 112) = v13 & 0xF8 | 2;
        *(_QWORD *)(v11 + 200) = a3;
        *((_BYTE *)v7 + 17) = 0;
LABEL_13:
        v9 = 1;
        goto LABEL_14;
      }
      if ( v14 == 5 )
      {
        *(_BYTE *)(v11 + 112) = v13 & 0xF8 | 6;
      }
      else if ( v14 == 3 )
      {
        *((_BYTE *)v7 + 17) = 2;
      }
    }
LABEL_14:
    *(_QWORD *)(v11 + 64) = 0LL;
    v16 = KeGetCurrentPrcb();
    a2 = (__int64)v16->SchedulerAssist;
    if ( a2 && v16->NestingLevel <= 1u )
    {
      v23 = *(_DWORD *)(a2 + 20) - 1;
      *(_DWORD *)(a2 + 20) = v23;
      if ( !v23 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
    ++*((_BYTE *)v7 + 17);
    if ( v9 )
      return 1;
  }
  while ( v3 != v4 );
  return 0;
}
