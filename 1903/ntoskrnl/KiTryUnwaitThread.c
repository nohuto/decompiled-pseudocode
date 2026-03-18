/*
 * XREFs of KiTryUnwaitThread @ 0x14006A0B0
 * Callers:
 *     AlpcpSignal @ 0x14000D460 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BD90 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D9E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeReleaseMutant @ 0x14006B690 (KeReleaseMutant.c)
 *     KiRundownMutants @ 0x140080B0C (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140080CBC (KeTerminateThread.c)
 *     KiResumeThread @ 0x1400813C8 (KiResumeThread.c)
 *     KeSetEventBoostPriorityEx @ 0x14009E75C (KeSetEventBoostPriorityEx.c)
 *     KeRundownQueueCommon @ 0x1400AA5B0 (KeRundownQueueCommon.c)
 *     KiExpireTimer2 @ 0x1400BF760 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1400C3730 (KiTimerWaitTest.c)
 *     KeSetProcess @ 0x1400E57A0 (KeSetProcess.c)
 *     KePulseEvent @ 0x1400F3050 (KePulseEvent.c)
 *     PpmCheckRun @ 0x140108FC0 (PpmCheckRun.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     KeTimeOutQueueWaiters @ 0x140122CF0 (KeTimeOutQueueWaiters.c)
 *     KeWakeWaitChain @ 0x14012567C (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
 *     KiSignalSynchronizationObjectEx @ 0x1402B1FCC (KiSignalSynchronizationObjectEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiWaitSatisfyMutant @ 0x14011B4D8 (KiWaitSatisfyMutant.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v5; // rbx
  unsigned __int8 v7; // di
  _DWORD *SchedulerAssist; // rdx
  char v12; // cl
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rax
  __int64 result; // rax
  struct _KPRCB *v19; // rbp
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  _BYTE *v25; // rcx
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // edx
  int v38[14]; // [rsp+20h] [rbp-38h] BYREF
  int v39; // [rsp+68h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)(a2 + 24);
  v7 = 0;
  v39 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v30 = SchedulerAssist[5];
      SchedulerAssist[5] = v30 + 1;
      if ( v30 == -1 )
LABEL_43:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    v26 = CurrentPrcb->SchedulerAssist;
    if ( v26 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v31 = v26[5] - 1;
        v26[5] = v31;
        if ( !v31 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v39);
    while ( *(_QWORD *)(v5 + 64) );
    v27 = CurrentPrcb->SchedulerAssist;
    if ( v27 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v32 = v27[5];
        v27[5] = v32 + 1;
        if ( v32 == -1 )
          goto LABEL_43;
      }
    }
  }
  if ( *(_BYTE *)(v5 + 388) == 5 )
  {
    v12 = *(_BYTE *)(v5 + 112);
    v7 = 0;
    v13 = v12 & 7;
    if ( v13 == 1 || v13 == 4 )
    {
      v14 = *(_QWORD *)(v5 + 232);
      if ( v14 )
      {
        if ( (*(_BYTE *)v14 & 0x7F) == 0x15 )
        {
          *(_DWORD *)(v5 + 540) = (unsigned __int8)*(_DWORD *)(v5 + 540);
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 4LL * *(unsigned int *)(v5 + 540) + 536));
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 40));
        }
      }
      v15 = *(_QWORD *)(v5 + 712);
      if ( v15 )
      {
        v19 = KeGetCurrentPrcb();
        v38[0] = 0;
        v20 = v19->SchedulerAssist;
        if ( v20 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v33 = v20[5];
            v20[5] = v33 + 1;
            if ( v33 == -1 )
LABEL_53:
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 22800), 0LL) )
        {
          v28 = v19->SchedulerAssist;
          if ( v28 )
          {
            if ( v19->NestingLevel <= 1u )
            {
              v34 = v28[5] - 1;
              v28[5] = v34;
              if ( !v34 )
                KiRemoveSystemWorkPriorityKick(v19);
            }
          }
          do
            KeYieldProcessorEx(v38);
          while ( *(_QWORD *)(v15 + 22800) );
          v29 = v19->SchedulerAssist;
          if ( v29 )
          {
            if ( v19->NestingLevel <= 1u )
            {
              v35 = v29[5];
              v29[5] = v35 + 1;
              if ( v35 == -1 )
                goto LABEL_53;
            }
          }
        }
        if ( *(_QWORD *)(v5 + 712) )
        {
          v21 = *(_QWORD *)(v5 + 216);
          v22 = *(_QWORD **)(v5 + 224);
          if ( *(_QWORD *)(v21 + 8) != v5 + 216 || *v22 != v5 + 216 )
            __fastfail(3u);
          *v22 = v21;
          *(_QWORD *)(v21 + 8) = v22;
          *(_QWORD *)(v5 + 712) = 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 22800), 0LL);
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        if ( v24 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v36 = v24[5] - 1;
            v24[5] = v36;
            if ( !v36 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
      }
      if ( *(_BYTE *)(v5 + 388) == 1 )
        *(_DWORD *)(v5 + 116) |= 2u;
      *(_BYTE *)(v5 + 388) = 7;
      v7 = 1;
      *(_QWORD *)(v5 + 216) = *(_QWORD *)(a1 + 11528);
      *(_QWORD *)(a1 + 11528) = v5 + 216;
      *(_QWORD *)(v5 + 200) = a3;
      *(_QWORD *)(v5 + 1528) = 0LL;
    }
    else
    {
      if ( (*(_BYTE *)(v5 + 112) & 7) == 0 )
      {
        v7 = 1;
        *(_BYTE *)(v5 + 112) = v12 & 0xF8 | 2;
        *(_QWORD *)(v5 + 200) = a3;
        *(_QWORD *)(v5 + 1528) = 0LL;
        *(_BYTE *)(a2 + 17) = 0;
LABEL_11:
        if ( a4 )
        {
          *a4 = v5;
          v25 = *(_BYTE **)(a2 + 32);
          if ( (*v25 & 0x7F) == 2 )
            KiWaitSatisfyMutant(v25, v5, a1);
        }
        goto LABEL_12;
      }
      if ( v13 == 5 )
      {
        *(_BYTE *)(v5 + 112) = v12 & 0xF8 | 6;
        v7 = 0;
        goto LABEL_12;
      }
      if ( v13 == 3 )
        *(_BYTE *)(a2 + 17) = 2;
    }
    if ( !v7 )
      goto LABEL_12;
    goto LABEL_11;
  }
LABEL_12:
  *(_QWORD *)(v5 + 64) = 0LL;
  v16 = KeGetCurrentPrcb();
  v17 = v16->SchedulerAssist;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v37 = v17[5] - 1;
      v17[5] = v37;
      if ( !v37 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  result = v7;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
