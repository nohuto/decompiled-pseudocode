/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x140114E14
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x140114B14 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140003AE4 (KiSendSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiComputeThreadAffinity @ 0x14008A420 (KiComputeThreadAffinity.c)
 *     KiInsertDeferredReadyList @ 0x1400ACB08 (KiInsertDeferredReadyList.c)
 *     KiIsThreadRankNonZero @ 0x1400D1500 (KiIsThreadRankNonZero.c)
 *     KiSelectNextThread @ 0x1400D71E8 (KiSelectNextThread.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiCheckThreadAffinity @ 0x1401151C8 (KiCheckThreadAffinity.c)
 *     KiTryToAcquireThreadLock @ 0x1401151F0 (KiTryToAcquireThreadLock.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140115718 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x14030FFFC (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 i; // r15
  __int64 v6; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // r8
  struct _KPRCB *v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  struct _KPRCB *v17; // rsi
  _DWORD *v18; // rcx
  int v19; // eax
  _DWORD *v20; // rcx
  int v21; // eax
  struct _KPRCB *v22; // rsi
  _DWORD *v23; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  int v29; // eax
  unsigned int v30; // ebp
  int v31; // r14d
  __int64 v32; // rcx
  int v33; // r8d
  char v34; // al
  unsigned int v35; // esi
  __int64 v36; // rsi
  __int64 v37; // r9
  __int64 v38; // rdi
  bool IsThreadRankNonZero; // al
  char v40; // cl
  __int64 v41; // rdx
  struct _KPRCB *v42; // rcx
  int v43; // eax
  int v44; // [rsp+78h] [rbp+10h] BYREF
  int v45; // [rsp+80h] [rbp+18h] BYREF
  int v46; // [rsp+88h] [rbp+20h] BYREF

  result = (unsigned int)KeNumberProcessors_0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v6 = KiProcessorBlock[i];
    *(_QWORD *)(*(_QWORD *)(v6 + 24) + 568LL) = KiCpuSetSequence;
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v44 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v9 = SchedulerAssist[5];
            SchedulerAssist[5] = v9 + 1;
            if ( v9 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
          break;
        v10 = CurrentPrcb->SchedulerAssist;
        if ( v10 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v11 = v10[5] - 1;
            v10[5] = v11;
            if ( !v11 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v44, a2, a3);
        while ( *(_QWORD *)(v6 + 48) );
      }
      v12 = *(_QWORD *)(v6 + 8);
      if ( (unsigned __int8)KiTryToAcquireThreadLock(v12, 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v12 + 1420), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
      v14 = KeGetCurrentPrcb();
      v15 = (__int64)v14->SchedulerAssist;
      if ( v15 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v16 = *(_DWORD *)(v15 + 20) - 1;
          *(_DWORD *)(v15 + 20) = v16;
          if ( !v16 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      v17 = KeGetCurrentPrcb();
      v45 = 0;
      while ( 1 )
      {
        v18 = v17->SchedulerAssist;
        if ( v18 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v19 = v18[5];
            v18[5] = v19 + 1;
            if ( v19 == -1 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v12 + 64), 0LL) )
          break;
        v20 = v17->SchedulerAssist;
        if ( v20 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v21 = v20[5] - 1;
            v20[5] = v21;
            if ( !v21 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        do
          KeYieldProcessorEx(&v45, v15, v13);
        while ( *(_QWORD *)(v12 + 64) );
      }
      v22 = KeGetCurrentPrcb();
      v46 = 0;
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
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
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
          KeYieldProcessorEx(&v46, v15, v13);
        while ( *(_QWORD *)(v6 + 48) );
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v12 + 1420));
      if ( v12 == *(_QWORD *)(v6 + 8) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      if ( v28 )
      {
        if ( v27->NestingLevel <= 1u )
        {
          v29 = v28[5] - 1;
          v28[5] = v29;
          if ( !v29 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
      KiReleaseThreadLockSafe(v12);
    }
    v30 = *(_DWORD *)(v12 + 588);
    v31 = 0;
    if ( !(unsigned int)KiCheckThreadAffinity(v12) )
    {
      KiComputeThreadAffinity(v32);
      v34 = *(_BYTE *)(v12 + 388);
      if ( v34 == 2 || v34 == 5 )
      {
        LOBYTE(v33) = 2;
        v31 = KiRescheduleThreadAfterAffinityChange(v12, (int)v12 + 576, v33, v6, 0LL, a1);
      }
    }
    v35 = *(_DWORD *)(v12 + 588);
    KiReleaseThreadLockSafe(v12);
    if ( (xmmword_140542350 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(v12, 1350LL, v30, v35);
    v36 = *(_QWORD *)(v6 + 16);
    if ( v36 && !(unsigned int)KiCheckThreadAffinity(*(_QWORD *)(v6 + 16)) )
    {
      v38 = *(_QWORD *)(v6 + 8);
      if ( (*(_BYTE *)(v38 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(v6 + 8), (struct _KPRCB *)v6),
            v40 = 1,
            !IsThreadRankNonZero) )
      {
        v40 = *(_BYTE *)(v38 + 195);
      }
      **(_BYTE **)(v6 + 56) = v40;
      if ( *(_QWORD *)(v6 + 25016) )
      {
        v41 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v38 != *(_QWORD *)(v6 + 24) )
          v41 = (unsigned int)v40;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v6 + 25016), v41, 0LL, v37);
      }
      KiSelectNextThread(v6, a1, a3);
      _interlockedbittestandreset((volatile signed __int32 *)(v36 + 120), 0xCu);
      KiInsertDeferredReadyList(a1, v36);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
    v42 = KeGetCurrentPrcb();
    a2 = (__int64)v42->SchedulerAssist;
    if ( a2 )
    {
      if ( v42->NestingLevel <= 1u )
      {
        v43 = *(_DWORD *)(a2 + 20) - 1;
        *(_DWORD *)(a2 + 20) = v43;
        if ( !v43 )
          KiRemoveSystemWorkPriorityKick(v42);
      }
    }
    if ( v31 && KeGetPcr()->Prcb.Number != *(_DWORD *)(v6 + 36) )
      KiSendSoftwareInterrupt();
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
