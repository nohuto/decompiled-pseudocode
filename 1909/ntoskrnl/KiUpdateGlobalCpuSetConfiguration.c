/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x14011F1E0
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x14011EED0 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14000D450 (KiInsertDeferredReadyList.c)
 *     KiSelectNextThread @ 0x1400138D0 (KiSelectNextThread.c)
 *     KiIsThreadRankNonZero @ 0x140014B90 (KiIsThreadRankNonZero.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400FBB28 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiComputeThreadAffinity @ 0x1400FC790 (KiComputeThreadAffinity.c)
 *     KiCheckThreadAffinity @ 0x14011F330 (KiCheckThreadAffinity.c)
 *     KiTryToAcquireThreadLock @ 0x14011F358 (KiTryToAcquireThreadLock.c)
 *     KiSendSoftwareInterrupt @ 0x14012D268 (KiSendSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0380 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x14032D52C (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(__int64 *a1)
{
  __int64 result; // rax
  __int64 i; // r15
  __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebp
  int v9; // r14d
  __int64 v10; // rcx
  char v11; // al
  unsigned int v12; // esi
  __int64 v13; // rsi
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  int v21; // eax
  struct _KPRCB *v22; // rsi
  _DWORD *v23; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  struct _KPRCB *v27; // rsi
  _DWORD *v28; // rcx
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // eax
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  int v34; // eax
  __int64 v35; // rdi
  bool IsThreadRankNonZero; // al
  char v37; // cl
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // [rsp+78h] [rbp+10h] BYREF
  int v42; // [rsp+80h] [rbp+18h] BYREF
  int v43; // [rsp+88h] [rbp+20h] BYREF

  result = (unsigned int)KeNumberProcessors_0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v4 = KiProcessorBlock[i];
    *(_QWORD *)(*(_QWORD *)(v4 + 24) + 568LL) = KiCpuSetSequence;
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v41 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = SchedulerAssist[5];
            SchedulerAssist[5] = v16 + 1;
            if ( v16 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
          break;
        v17 = CurrentPrcb->SchedulerAssist;
        if ( v17 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v18 = v17[5] - 1;
            v17[5] = v18;
            if ( !v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v41);
        while ( *(_QWORD *)(v4 + 48) );
      }
      v7 = *(_QWORD *)(v4 + 8);
      if ( (unsigned __int8)KiTryToAcquireThreadLock(v7, 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v7 + 1420), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
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
      v22 = KeGetCurrentPrcb();
      v42 = 0;
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
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
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
          KeYieldProcessorEx(&v42);
        while ( *(_QWORD *)(v7 + 64) );
      }
      v27 = KeGetCurrentPrcb();
      v43 = 0;
      while ( 1 )
      {
        v28 = v27->SchedulerAssist;
        if ( v28 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v29 = v28[5];
            v28[5] = v29 + 1;
            if ( v29 == -1 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
          break;
        v30 = v27->SchedulerAssist;
        if ( v30 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v31 = v30[5] - 1;
            v30[5] = v31;
            if ( !v31 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        do
          KeYieldProcessorEx(&v43);
        while ( *(_QWORD *)(v4 + 48) );
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v7 + 1420));
      if ( v7 == *(_QWORD *)(v4 + 8) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      if ( v33 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v34 = v33[5] - 1;
          v33[5] = v34;
          if ( !v34 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      KiReleaseThreadLockSafe(v7);
    }
    v8 = *(_DWORD *)(v7 + 588);
    v9 = 0;
    if ( !(unsigned int)KiCheckThreadAffinity(v7) )
    {
      KiComputeThreadAffinity(v10);
      v11 = *(_BYTE *)(v7 + 388);
      if ( v11 == 2 || v11 == 5 )
        v9 = KiRescheduleThreadAfterAffinityChange(v7, v7 + 576, 2, v4, 0LL, a1);
    }
    v12 = *(_DWORD *)(v7 + 588);
    KiReleaseThreadLockSafe(v7);
    if ( (xmmword_140572410 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(v7, 1350LL, v8, v12);
    v13 = *(_QWORD *)(v4 + 16);
    if ( v13 && !(unsigned int)KiCheckThreadAffinity(*(_QWORD *)(v4 + 16)) )
    {
      v35 = *(_QWORD *)(v4 + 8);
      if ( (*(_BYTE *)(v35 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(v4 + 8), (struct _KPRCB *)v4),
            v37 = 1,
            !IsThreadRankNonZero) )
      {
        v37 = *(_BYTE *)(v35 + 195);
      }
      **(_BYTE **)(v4 + 56) = v37;
      if ( *(_QWORD *)(v4 + 25016) )
      {
        v38 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v35 != *(_QWORD *)(v4 + 24) )
          v38 = (unsigned int)v37;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v4 + 25016), v38, 0LL);
      }
      KiSelectNextThread(v4, a1);
      _interlockedbittestandreset((volatile signed __int32 *)(v13 + 120), 0xCu);
      KiInsertDeferredReadyList(a1, v13);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v39 = v15[5] - 1;
        v15[5] = v39;
        if ( !v39 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    if ( v9 )
    {
      v40 = *(unsigned int *)(v4 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v40 )
      {
        LOBYTE(v15) = 2;
        KiSendSoftwareInterrupt(v40, v15);
      }
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
