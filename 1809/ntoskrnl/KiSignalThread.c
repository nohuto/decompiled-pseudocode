/*
 * XREFs of KiSignalThread @ 0x1400CE880
 * Callers:
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     KeAlertThreadByThreadId @ 0x1400CCE2C (KeAlertThreadByThreadId.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400CDE30 (NtReleaseWorkerFactoryWorker.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1400CE670 (KiTryUnwaitThreadWithPriority.c)
 *     KiResumeThread @ 0x1400F1CE0 (KiResumeThread.c)
 *     KiSignalThreadForApc @ 0x1400F2004 (KiSignalThreadForApc.c)
 *     KeAlertThread @ 0x1400F22B0 (KeAlertThread.c)
 *     KiSuspendThread @ 0x1400F2428 (KiSuspendThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 */

char __fastcall KiSignalThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  __int64 v7; // rdx
  char result; // al
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  int v21; // eax
  int v22; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a2 + 112);
  v7 = v4 & 7;
  if ( (_DWORD)v7 == 1 || (_DWORD)v7 == 4 )
  {
    v10 = *(_QWORD *)(a2 + 232);
    if ( v10 )
    {
      if ( (*(_BYTE *)v10 & 0x7F) == 0x15 )
      {
        *(_DWORD *)(a2 + 540) = (unsigned __int8)*(_DWORD *)(a2 + 540);
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 4LL * *(unsigned int *)(a2 + 540) + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 40));
      }
    }
    v11 = *(_QWORD *)(a2 + 712);
    if ( v11 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = SchedulerAssist[5];
            SchedulerAssist[5] = v14 + 1;
            if ( v14 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 22800), 0LL) )
          break;
        v15 = CurrentPrcb->SchedulerAssist;
        if ( v15 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v15[5] - 1;
            v15[5] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v22, v7, a3);
        while ( *(_QWORD *)(v11 + 22800) );
      }
      if ( *(_QWORD *)(a2 + 712) )
      {
        v17 = *(_QWORD *)(a2 + 216);
        v18 = *(_QWORD **)(a2 + 224);
        if ( *(_QWORD *)(v17 + 8) != a2 + 216 || *v18 != a2 + 216 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *(_QWORD *)(a2 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 22800), 0LL);
      v19 = KeGetCurrentPrcb();
      v20 = v19->SchedulerAssist;
      if ( v20 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v21 = v20[5] - 1;
          v20[5] = v21;
          if ( !v21 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    if ( *(_BYTE *)(a2 + 388) == 1 )
      *(_DWORD *)(a2 + 116) |= 2u;
    KiSetThreadState(a2, 7LL);
    *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 11528);
    result = 1;
    *(_QWORD *)(a1 + 11528) = a2 + 216;
    *(_QWORD *)(a2 + 200) = a3;
  }
  else
  {
    if ( !a4 )
      return 0;
    if ( (v4 & 7) == 0 )
    {
      *(_BYTE *)(a2 + 112) = v4 & 0xF8 | 2;
      result = 1;
      *(_QWORD *)(a2 + 200) = a3;
      *(_BYTE *)(a4 + 17) = 0;
      return result;
    }
    if ( (_DWORD)v7 == 5 )
    {
      *(_BYTE *)(a2 + 112) = v4 & 0xF8 | 6;
      return 0;
    }
    result = 0;
    if ( (_DWORD)v7 == 3 )
      *(_BYTE *)(a4 + 17) = 2;
  }
  return result;
}
