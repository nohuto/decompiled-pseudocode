/*
 * XREFs of KiTryUnwaitThread @ 0x1400C4D10
 * Callers:
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14004F6A0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     KiRundownMutants @ 0x1400898AC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140089A10 (KeTerminateThread.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     KeSetProcess @ 0x14008F630 (KeSetProcess.c)
 *     KeReleaseMutant @ 0x1400BF950 (KeReleaseMutant.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeReleaseSemaphore @ 0x1400C5E00 (KeReleaseSemaphore.c)
 *     KiTimerWaitTest @ 0x1400C7AB0 (KiTimerWaitTest.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     KePulseEvent @ 0x1400F0C40 (KePulseEvent.c)
 *     KiResumeThread @ 0x1400F1CE0 (KiResumeThread.c)
 *     KeRundownQueueCommon @ 0x1400FAB20 (KeRundownQueueCommon.c)
 *     KiExpireTimer2 @ 0x1400FB980 (KiExpireTimer2.c)
 *     KeSetEventBoostPriorityEx @ 0x140103548 (KeSetEventBoostPriorityEx.c)
 *     KeTimeOutQueueWaiters @ 0x140107034 (KeTimeOutQueueWaiters.c)
 *     KeWakeWaitChain @ 0x140125CA8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiWaitSatisfyMutant @ 0x1400F9CE4 (KiWaitSatisfyMutant.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 */

__int64 __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v5; // rbx
  unsigned __int8 v6; // si
  _DWORD *SchedulerAssist; // r10
  int v12; // eax
  bool v13; // zf
  _DWORD *v14; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  char v18; // al
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rsi
  struct _KPRCB *v22; // rdi
  _DWORD *v23; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  int v31; // eax
  _BYTE *v32; // rcx
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // r8
  int v35; // edx
  __int64 result; // rax
  int v37[14]; // [rsp+20h] [rbp-38h] BYREF
  int v38; // [rsp+68h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)(a2 + 24);
  v6 = 0;
  v38 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( !SchedulerAssist || CurrentPrcb->NestingLevel > 1u )
    goto LABEL_6;
  v12 = SchedulerAssist[5];
  v13 = v12 == -1;
  SchedulerAssist[5] = v12 + 1;
LABEL_4:
  if ( v13 )
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_6:
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = v14[5] - 1;
        v14[5] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v38, a2, a3);
    while ( *(_QWORD *)(v5 + 64) );
    v16 = CurrentPrcb->SchedulerAssist;
    if ( v16 && CurrentPrcb->NestingLevel <= 1u )
    {
      v17 = v16[5];
      v13 = v17 == -1;
      v16[5] = v17 + 1;
      goto LABEL_4;
    }
  }
  if ( *(_BYTE *)(v5 + 388) == 5 )
  {
    v18 = *(_BYTE *)(v5 + 112);
    v6 = 0;
    v19 = v18 & 7;
    if ( v19 == 1 || v19 == 4 )
    {
      v20 = *(_QWORD *)(v5 + 232);
      if ( v20 )
      {
        if ( (*(_BYTE *)v20 & 0x7F) == 0x15 )
        {
          *(_DWORD *)(v5 + 540) = (unsigned __int8)*(_DWORD *)(v5 + 540);
          _InterlockedIncrement((volatile signed __int32 *)(v20 + 4LL * *(unsigned int *)(v5 + 540) + 536));
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v20 + 40));
        }
      }
      v21 = *(_QWORD *)(v5 + 712);
      if ( v21 )
      {
        v22 = KeGetCurrentPrcb();
        v37[0] = 0;
        while ( 1 )
        {
          v23 = v22->SchedulerAssist;
          if ( v23 )
          {
            if ( v22->NestingLevel <= 1u )
            {
              v24 = v23[5];
              v23[5] = v24 + 1;
              if ( v24 == -1 )
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v21 + 22800), 0LL) )
            break;
          v25 = v22->SchedulerAssist;
          if ( v25 )
          {
            if ( v22->NestingLevel <= 1u )
            {
              v26 = v25[5] - 1;
              v25[5] = v26;
              if ( !v26 )
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
          do
            KeYieldProcessorEx(v37, a2, a3);
          while ( *(_QWORD *)(v21 + 22800) );
        }
        if ( *(_QWORD *)(v5 + 712) )
        {
          v27 = *(_QWORD *)(v5 + 216);
          v28 = *(_QWORD **)(v5 + 224);
          if ( *(_QWORD *)(v27 + 8) != v5 + 216 || *v28 != v5 + 216 )
            __fastfail(3u);
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
          *(_QWORD *)(v5 + 712) = 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 22800), 0LL);
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        if ( v30 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v31 = v30[5] - 1;
            v30[5] = v31;
            if ( !v31 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
      }
      if ( *(_BYTE *)(v5 + 388) == 1 )
        *(_DWORD *)(v5 + 116) |= 2u;
      KiSetThreadState(v5, 7LL);
      *(_QWORD *)(v5 + 216) = *(_QWORD *)(a1 + 11528);
      v6 = 1;
      *(_QWORD *)(a1 + 11528) = v5 + 216;
      *(_QWORD *)(v5 + 200) = a3;
    }
    else
    {
      if ( (*(_BYTE *)(v5 + 112) & 7) == 0 )
      {
        v6 = 1;
        *(_BYTE *)(v5 + 112) = v18 & 0xF8 | 2;
        *(_QWORD *)(v5 + 200) = a3;
        *(_BYTE *)(a2 + 17) = 0;
LABEL_53:
        if ( a4 )
        {
          *a4 = v5;
          v32 = *(_BYTE **)(a2 + 32);
          if ( (*v32 & 0x7F) == 2 )
            KiWaitSatisfyMutant(v32, v5, a1);
        }
        goto LABEL_56;
      }
      if ( v19 == 5 )
      {
        *(_BYTE *)(v5 + 112) = v18 & 0xF8 | 6;
        v6 = 0;
        goto LABEL_56;
      }
      if ( v19 == 3 )
        *(_BYTE *)(a2 + 17) = 2;
    }
    if ( !v6 )
      goto LABEL_56;
    goto LABEL_53;
  }
LABEL_56:
  *(_QWORD *)(v5 + 64) = 0LL;
  v33 = KeGetCurrentPrcb();
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v35 = v34[5] - 1;
      v34[5] = v35;
      if ( !v35 )
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  result = v6;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
