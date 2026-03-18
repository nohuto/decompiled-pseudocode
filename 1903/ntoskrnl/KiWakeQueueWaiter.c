/*
 * XREFs of KiWakeQueueWaiter @ 0x14000D060
 * Callers:
 *     KeRegisterObjectNotification @ 0x1400082F0 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x14000CE90 (KeInsertQueueEx.c)
 *     AlpcpSignal @ 0x14000D460 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BD90 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D9E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14005B670 (NtReleaseWorkerFactoryWorker.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeReleaseMutant @ 0x14006B690 (KeReleaseMutant.c)
 *     KiRundownMutants @ 0x140080B0C (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140080CBC (KeTerminateThread.c)
 *     KiResumeThread @ 0x1400813C8 (KiResumeThread.c)
 *     KeSetEventBoostPriorityEx @ 0x14009E75C (KeSetEventBoostPriorityEx.c)
 *     KiInsertQueueInternal @ 0x1400AA238 (KiInsertQueueInternal.c)
 *     KeRundownQueueCommon @ 0x1400AA5B0 (KeRundownQueueCommon.c)
 *     KiExpireTimer2 @ 0x1400BF760 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1400C3730 (KiTimerWaitTest.c)
 *     KeSetProcess @ 0x1400E57A0 (KeSetProcess.c)
 *     KePulseEvent @ 0x1400F3050 (KePulseEvent.c)
 *     IoSetIoCompletionEx @ 0x140100320 (IoSetIoCompletionEx.c)
 *     PpmCheckRun @ 0x140108FC0 (PpmCheckRun.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     KiActivateWaiterKQueue @ 0x14010D378 (KiActivateWaiterKQueue.c)
 *     KeWakeWaitChain @ 0x14012567C (KeWakeWaitChain.c)
 *     KeInsertQueue @ 0x14012D860 (KeInsertQueue.c)
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
 *     KeInsertHeadQueue @ 0x1402ABBB0 (KeInsertHeadQueue.c)
 *     KiSignalSynchronizationObjectEx @ 0x1402B1FCC (KiSignalSynchronizationObjectEx.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14000D220 (KiInsertDeferredReadyList.c)
 *     KiRemovePrcbWaitEntry @ 0x14000D250 (KiRemovePrcbWaitEntry.c)
 *     KiIncrementConcurrencyCount @ 0x14000D358 (KiIncrementConcurrencyCount.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
