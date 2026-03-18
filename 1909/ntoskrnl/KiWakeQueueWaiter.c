/*
 * XREFs of KiWakeQueueWaiter @ 0x14000D290
 * Callers:
 *     KeRegisterObjectNotification @ 0x140008380 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x14000D0C0 (KeInsertQueueEx.c)
 *     AlpcpSignal @ 0x14000D690 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x140014320 (KeReleaseSemaphoreEx.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BAD0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D720 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiCommitThreadWait @ 0x140040480 (KiCommitThreadWait.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14005B710 (NtReleaseWorkerFactoryWorker.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeReleaseMutant @ 0x14006B900 (KeReleaseMutant.c)
 *     KiRundownMutants @ 0x140080F0C (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400810BC (KeTerminateThread.c)
 *     KiResumeThread @ 0x1400817C8 (KiResumeThread.c)
 *     KiExpireTimer2 @ 0x14009F5E0 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1400A35B0 (KiTimerWaitTest.c)
 *     KeSetEventBoostPriorityEx @ 0x1400C659C (KeSetEventBoostPriorityEx.c)
 *     KePulseEvent @ 0x1400DB590 (KePulseEvent.c)
 *     KiInsertQueueInternal @ 0x1400E31B4 (KiInsertQueueInternal.c)
 *     KeRundownQueueCommon @ 0x1400E35B0 (KeRundownQueueCommon.c)
 *     KeSetProcess @ 0x1400EA740 (KeSetProcess.c)
 *     KeInsertQueue @ 0x1400FD170 (KeInsertQueue.c)
 *     IoSetIoCompletionEx @ 0x140104F40 (IoSetIoCompletionEx.c)
 *     PpmCheckRun @ 0x140107FC0 (PpmCheckRun.c)
 *     KeReleaseSemaphore @ 0x1401081E0 (KeReleaseSemaphore.c)
 *     KiActivateWaiterKQueue @ 0x14010CC28 (KiActivateWaiterKQueue.c)
 *     KeWakeWaitChain @ 0x140125CEC (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 *     KeInsertHeadQueue @ 0x1402AB910 (KeInsertHeadQueue.c)
 *     KiSignalSynchronizationObjectEx @ 0x1402B1D2C (KiSignalSynchronizationObjectEx.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14000D450 (KiInsertDeferredReadyList.c)
 *     KiRemovePrcbWaitEntry @ 0x14000D480 (KiRemovePrcbWaitEntry.c)
 *     KiIncrementConcurrencyCount @ 0x14000D588 (KiIncrementConcurrencyCount.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, _QWORD *a2, __int64 a3)
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

  v3 = (_QWORD *)a2[1];
  v4 = a2 + 1;
  do
  {
    v7 = v3;
    v3 = (_QWORD *)*v3;
    if ( *((_BYTE *)v7 + 16) != 3 )
      break;
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
LABEL_26:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
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
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
        }
      }
      do
        KeYieldProcessorEx(&v24);
      while ( *(_QWORD *)(v11 + 64) );
      v19 = CurrentPrcb->SchedulerAssist;
      if ( v19 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = v19[5];
          v19[5] = v22 + 1;
          if ( v22 == -1 )
            goto LABEL_26;
        }
      }
    }
    if ( *(_BYTE *)(v11 + 388) != 5 )
      goto LABEL_13;
    v13 = *(_BYTE *)(v11 + 112);
    v9 = 0;
    v14 = v13 & 7;
    if ( v14 == 1 || v14 == 4 )
    {
      v15 = *(_QWORD *)(v11 + 232);
      if ( v15 )
        KiIncrementConcurrencyCount(v15, v11);
      KiRemovePrcbWaitEntry(v11);
      KiInsertDeferredReadyList(a1 + 11528, v11);
      *(_QWORD *)(v11 + 200) = a3;
      *(_QWORD *)(v11 + 1528) = 0LL;
    }
    else
    {
      if ( (*(_BYTE *)(v11 + 112) & 7) != 0 )
      {
        if ( v14 == 5 )
        {
          *(_BYTE *)(v11 + 112) = v13 & 0xF8 | 6;
        }
        else if ( v14 == 3 )
        {
          *((_BYTE *)v7 + 17) = 2;
        }
        goto LABEL_13;
      }
      *(_BYTE *)(v11 + 112) = v13 & 0xF8 | 2;
      *(_QWORD *)(v11 + 200) = a3;
      *(_QWORD *)(v11 + 1528) = 0LL;
      *((_BYTE *)v7 + 17) = 0;
    }
    v9 = 1;
LABEL_13:
    *(_QWORD *)(v11 + 64) = 0LL;
    v16 = KeGetCurrentPrcb();
    a2 = v16->SchedulerAssist;
    if ( a2 && v16->NestingLevel <= 1u )
    {
      v23 = *((_DWORD *)a2 + 5) - 1;
      *((_DWORD *)a2 + 5) = v23;
      if ( !v23 )
        KiRemoveSystemWorkPriorityKick(v16, a2);
    }
    ++*((_BYTE *)v7 + 17);
    if ( v9 )
      return 1;
  }
  while ( v3 != v4 );
  return 0;
}
