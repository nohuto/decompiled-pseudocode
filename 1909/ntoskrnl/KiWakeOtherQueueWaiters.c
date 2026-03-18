/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x14000E290
 * Callers:
 *     KeRegisterObjectNotification @ 0x140008380 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x14000D0C0 (KeInsertQueueEx.c)
 *     AlpcpSignal @ 0x14000D690 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x140014320 (KeReleaseSemaphoreEx.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BAD0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D720 (ExpReleaseResourceExclusiveForThreadLite.c)
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
 *     KeWakeWaitChain @ 0x140125CEC (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 *     KeInsertHeadQueue @ 0x1402AB910 (KeInsertHeadQueue.c)
 *     KiSignalSynchronizationObjectEx @ 0x1402B1D2C (KiSignalSynchronizationObjectEx.c)
 * Callees:
 *     KiRemovePrcbWaitEntry @ 0x14000D480 (KiRemovePrcbWaitEntry.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiInsertQueueInternal @ 0x1400E31B4 (KiInsertQueueInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
