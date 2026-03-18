/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x14000E060
 * Callers:
 *     KeRegisterObjectNotification @ 0x1400082F0 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x14000CE90 (KeInsertQueueEx.c)
 *     AlpcpSignal @ 0x14000D460 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BD90 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D9E0 (ExpReleaseResourceExclusiveForThreadLite.c)
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
 *     KeWakeWaitChain @ 0x14012567C (KeWakeWaitChain.c)
 *     KeInsertQueue @ 0x14012D860 (KeInsertQueue.c)
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
 *     KeInsertHeadQueue @ 0x1402ABBB0 (KeInsertHeadQueue.c)
 *     KiSignalSynchronizationObjectEx @ 0x1402B1FCC (KiSignalSynchronizationObjectEx.c)
 * Callees:
 *     KiRemovePrcbWaitEntry @ 0x14000D250 (KiRemovePrcbWaitEntry.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiInsertQueueInternal @ 0x1400AA238 (KiInsertQueueInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiWakeOtherQueueWaiters(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbp
  _QWORD *v5; // rdi
  __int64 result; // rax
  __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v9; // r12
  __int64 v10; // rbx
  _DWORD *SchedulerAssist; // rcx
  char v12; // cl
  int v13; // eax
  __int64 v14; // rcx
  struct _KPRCB *v15; // rcx
  __int64 v16; // rax
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD **)(a2 + 16);
  v3 = a2;
  do
  {
    v5 = v2;
    v2 = (_QWORD *)v2[1];
    result = *((unsigned __int8 *)v5 + 16);
    if ( (_BYTE)result == 2 )
    {
      v16 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v2 != v5 )
        goto LABEL_27;
      *v2 = v16;
      *(_QWORD *)(v16 + 8) = v2;
      *((_BYTE *)v5 + 17) = 5;
      KiInsertQueueInternal(v5[3], v5);
    }
    else
    {
      if ( (_BYTE)result != 1 )
        return result;
      v7 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v2 != v5 )
LABEL_27:
        __fastfail(3u);
      *v2 = v7;
      *(_QWORD *)(v7 + 8) = v2;
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = *((unsigned __int16 *)v5 + 9);
      v10 = v5[3];
      v23 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v19 = SchedulerAssist[5];
          SchedulerAssist[5] = v19 + 1;
          if ( v19 == -1 )
LABEL_30:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 64), 0LL) )
      {
        v17 = CurrentPrcb->SchedulerAssist;
        if ( v17 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v20 = v17[5] - 1;
            v17[5] = v20;
            if ( !v20 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
          }
        }
        do
          KeYieldProcessorEx(&v23);
        while ( *(_QWORD *)(v10 + 64) );
        v18 = CurrentPrcb->SchedulerAssist;
        if ( v18 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v21 = v18[5];
            v18[5] = v21 + 1;
            if ( v21 == -1 )
              goto LABEL_30;
          }
        }
      }
      if ( *(_BYTE *)(v10 + 388) == 5 )
      {
        v12 = *(_BYTE *)(v10 + 112);
        v13 = v12 & 7;
        if ( v13 == 1 || v13 == 4 )
        {
          v14 = *(_QWORD *)(v10 + 232);
          if ( v14 )
          {
            if ( (*(_BYTE *)v14 & 0x7F) == 0x15 )
            {
              *(_DWORD *)(v10 + 540) = (unsigned __int8)*(_DWORD *)(v10 + 540);
              _InterlockedIncrement((volatile signed __int32 *)(v14 + 4LL * *(unsigned int *)(v10 + 540) + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v14 + 40));
            }
          }
          KiRemovePrcbWaitEntry((_QWORD *)v10, a2);
          if ( *(_BYTE *)(v10 + 388) == 1 )
            *(_DWORD *)(v10 + 116) |= 2u;
          *(_BYTE *)(v10 + 388) = 7;
          *(_QWORD *)(v10 + 216) = *(_QWORD *)(a1 + 11528);
          *(_QWORD *)(a1 + 11528) = v10 + 216;
          *(_QWORD *)(v10 + 200) = v9;
          *(_QWORD *)(v10 + 1528) = 0LL;
        }
        else if ( (*(_BYTE *)(v10 + 112) & 7) != 0 )
        {
          if ( v13 == 5 )
          {
            *(_BYTE *)(v10 + 112) = v12 & 0xF8 | 6;
          }
          else if ( v13 == 3 )
          {
            *((_BYTE *)v5 + 17) = 2;
          }
        }
        else
        {
          *(_BYTE *)(v10 + 112) = v12 & 0xF8 | 2;
          *(_QWORD *)(v10 + 200) = v9;
          *(_QWORD *)(v10 + 1528) = 0LL;
          *((_BYTE *)v5 + 17) = 0;
        }
      }
      *(_QWORD *)(v10 + 64) = 0LL;
      v15 = KeGetCurrentPrcb();
      a2 = (__int64)v15->SchedulerAssist;
      if ( a2 && v15->NestingLevel <= 1u )
      {
        v22 = *(_DWORD *)(a2 + 20) - 1;
        *(_DWORD *)(a2 + 20) = v22;
        if ( !v22 )
          KiRemoveSystemWorkPriorityKick(v15, a2);
      }
      ++*((_BYTE *)v5 + 17);
    }
    result = v3 + 8;
  }
  while ( v2 != (_QWORD *)(v3 + 8) );
  return result;
}
