/*
 * XREFs of KeRemovePriQueue @ 0x1400B60E0
 * Callers:
 *     ExpWorkerThread @ 0x1400B5BB0 (ExpWorkerThread.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1DBC (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400D796C (KiSetBasePriorityAndClearDecrement.c)
 *     KiFastExitThreadWait @ 0x1400F9E2C (KiFastExitThreadWait.c)
 *     KiProcessThreadWaitList @ 0x1400FBEE0 (KiProcessThreadWaitList.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiAttemptFastRemovePriQueue @ 0x140112740 (KiAttemptFastRemovePriQueue.c)
 *     KiSwitchPriQueue @ 0x140136044 (KiSwitchPriQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiAcquirePrcbLock @ 0x14028F350 (KiAcquirePrcbLock.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiGetDueTimeWithThreadTimerDelay @ 0x14029ADDC (KiGetDueTimeWithThreadTimerDelay.c)
 */

__int64 __fastcall KeRemovePriQueue(ULONG_PTR a1, __int64 CurrentIrql, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v5; // r13
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v7; // r11
  unsigned __int64 v8; // rcx
  unsigned __int8 WaitIrql; // r15
  char v10; // si
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  struct _KPRCB *v16; // rcx
  unsigned __int8 v17; // cl
  $6A96EFD8F2CF667E6B14FBA5D10C7BEB *v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rdx
  struct _KPRCB *v21; // rcx
  struct _KPRCB *v22; // rsi
  _KTHREAD *v23; // rbp
  _KTHREAD *NextThread; // rdi
  bool v25; // zf
  struct _KPRCB *v26; // rcx
  struct _KPRCB *v27; // rcx
  int v28; // eax
  __int64 Queue; // r8
  unsigned int v30; // edi
  struct _KPRCB *v31; // rdi
  _DWORD *v32; // rcx
  int v33; // eax
  _DWORD *v34; // rcx
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rbp
  int v38; // r14d
  unsigned __int64 DueTimeWithThreadTimerDelay; // rax
  unsigned __int64 v40; // r11
  struct _KPRCB *v41; // rdi
  _DWORD *v42; // rcx
  int v43; // eax
  _DWORD *v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  int v49; // eax
  struct _LIST_ENTRY *v50; // rcx
  $6A96EFD8F2CF667E6B14FBA5D10C7BEB **v51; // rax
  __int64 result; // rax
  int v53; // esi
  __int64 QueuePriority; // rax
  int v55; // edx
  _DISPATCHER_HEADER *volatile v56; // rcx
  struct _KPRCB *v57; // rcx
  __int64 CycleTime; // rdx
  unsigned __int64 v59; // rcx
  struct _KPRCB *v60; // rdi
  _DWORD *v61; // rcx
  int v62; // eax
  _DWORD *v63; // rcx
  int v64; // eax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *v67; // rsi
  __int64 v68; // [rsp+20h] [rbp-68h] BYREF
  int v69; // [rsp+28h] [rbp-60h] BYREF
  int v70; // [rsp+2Ch] [rbp-5Ch] BYREF
  unsigned __int64 v71; // [rsp+30h] [rbp-58h]
  int v73; // [rsp+98h] [rbp+10h] BYREF
  char v74; // [rsp+A0h] [rbp+18h]
  int v75; // [rsp+A8h] [rbp+20h]

  v74 = a3;
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentIrql;
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( a4 )
  {
    if ( *(int *)(a4 + 4) >= 0 )
    {
      v71 = *(_QWORD *)a4;
      v75 = 1;
    }
    else
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v8 = *v7 + CurrentThread->RelativeTimerBias;
      v75 = 2;
      v71 = UnbiasedInterruptTime - v8;
    }
  }
  else
  {
    v75 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    v10 = v74;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v5;
      if ( v10 )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      LODWORD(v68) = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v13 = SchedulerAssist[5];
            SchedulerAssist[5] = v13 + 1;
            if ( v13 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
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
          KeYieldProcessorEx(&v68, CurrentIrql, a3);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v16);
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      v17 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      CurrentThread->WaitIrql = 0;
    }
    v25 = v10 == 0;
    v18 = &CurrentThread->320;
    if ( v25 )
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && v5 )
        goto LABEL_49;
    }
    else
    {
      if ( CurrentThread->Alerted[v5] )
      {
        CurrentThread->Alerted[v5] = 0;
        v19 = 257LL;
        goto LABEL_50;
      }
      if ( v5 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_49:
        v19 = 192LL;
LABEL_50:
        KiReleaseThreadLockSafe(CurrentThread);
        v22 = KeGetCurrentPrcb();
        if ( WaitIrql >= 2u )
        {
          if ( v22->NextThread && !v22->DpcRoutineActive )
            KiRequestSoftwareInterrupt(v22, 2);
          v18 = &CurrentThread->320;
        }
        else
        {
          v23 = v22->CurrentThread;
          if ( v22->NextThread )
          {
            KiAbProcessContextSwitch((__int64)v22->CurrentThread, 0);
            KiAcquirePrcbLock(v22);
            NextThread = v22->NextThread;
            v22->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(v22, v23, 0LL);
            _enable();
            KiUpdatePriorityMatrixThreadState(v22, NextThread, 0LL, 2LL);
            v23->WaitReason = 32;
            v23->WaitIrql = WaitIrql;
            KiQueueReadyThread(v22, v23);
            v25 = (unsigned __int8)KiSwapContext(v23, NextThread, WaitIrql) == 0;
          }
          else
          {
            v25 = (v23->MiscFlags & 0x40) == 0;
          }
          if ( !v25 )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            {
              v26 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v26);
            }
            __writecr8(1uLL);
            v23->MiscFlags &= ~0x40u;
            KiDeliverApc(0, 0, 0LL);
          }
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v27);
          }
          __writecr8(WaitIrql);
          v18 = &CurrentThread->320;
        }
        goto LABEL_74;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v19 = 257LL;
        goto LABEL_50;
      }
    }
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = 15;
    CurrentThread->ThreadLock = 0LL;
    v21 = KeGetCurrentPrcb();
    v20 = (__int64)v21->SchedulerAssist;
    if ( v20 )
    {
      if ( v21->NestingLevel <= 1u )
      {
        v28 = *(_DWORD *)(v20 + 20) - 1;
        *(_DWORD *)(v20 + 20) = v28;
        if ( !v28 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    v19 = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
LABEL_74:
    if ( v19 )
      return v19;
    Queue = (__int64)CurrentThread->Queue;
    if ( a1 != Queue )
      KiSwitchPriQueue(CurrentThread, a1);
    v18->WaitBlock[0].WaitType = 3;
    v18->WaitBlockFill4[17] = 4;
    v30 = 0;
    v18->WaitBlock[0].WaitKey = 128;
    v18->WaitBlock[0].Object = (PVOID)a1;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
      {
        if ( (++v30 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21, v20, Queue) )
        {
          HvlNotifyLongSpinWait(v30);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v31 = KeGetCurrentPrcb();
      HIDWORD(v68) = 0;
      while ( 1 )
      {
        v32 = v31->SchedulerAssist;
        if ( v32 )
        {
          if ( v31->NestingLevel <= 1u )
          {
            v33 = v32[5];
            v32[5] = v33 + 1;
            if ( v33 == -1 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
        v34 = v31->SchedulerAssist;
        if ( v34 )
        {
          if ( v31->NestingLevel <= 1u )
          {
            v35 = v34[5] - 1;
            v34[5] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
        do
          KeYieldProcessorEx((_DWORD *)&v68 + 1, v20, Queue);
        while ( CurrentThread->ThreadLock );
      }
      v36 = KiAttemptFastRemovePriQueue(a1);
      if ( v36 )
      {
        v53 = v73;
        QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
        if ( (_DWORD)QueuePriority != v73 )
        {
          v55 = CurrentThread->QueuePriority & 0x100;
          if ( !v55 )
          {
            v56 = CurrentThread->Queue;
            _InterlockedDecrement((volatile signed __int32 *)&v56[22].WaitListHead + QueuePriority);
            _InterlockedIncrement((volatile signed __int32 *)&v56[22].WaitListHead + v73);
            v53 = v73;
          }
          CurrentThread->QueuePriority = v55 | (unsigned __int8)v53;
        }
        CurrentThread->Saturation = 0;
        KiSetBasePriorityAndClearDecrement(CurrentThread, &v73, 0LL);
        if ( v53 != CurrentThread->Priority )
        {
          v57 = KeGetCurrentPrcb();
          if ( v57->NestingLevel )
          {
            CycleTime = CurrentThread->CycleTime;
          }
          else
          {
            _disable();
            CycleTime = KiUpdateTotalCyclesCurrentThread(v57, CurrentThread, 0LL);
            _enable();
          }
          v59 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
          CurrentThread->QuantumTarget = v59;
          KiSetPriorityThread(CurrentThread, 0LL);
        }
        KiReleaseThreadLockSafe(CurrentThread);
        goto LABEL_160;
      }
      KiReleaseThreadLockSafe(CurrentThread);
    }
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      break;
    v37 = v71;
    v38 = v75;
    DueTimeWithThreadTimerDelay = v71;
    if ( v75 == 2 )
    {
      KiQueryUnbiasedInterruptTime();
      DueTimeWithThreadTimerDelay = KiGetDueTimeWithThreadTimerDelay(CurrentThread, 2LL, v37, 0LL, v68, v69);
    }
    else
    {
      if ( !v75 )
        goto LABEL_107;
      if ( !v71 )
        goto LABEL_142;
      v40 = MEMORY[0xFFFFF78000000014];
    }
    if ( v40 > DueTimeWithThreadTimerDelay )
    {
LABEL_142:
      v36 = 258LL;
      goto LABEL_160;
    }
LABEL_107:
    v41 = KeGetCurrentPrcb();
    v69 = 0;
    while ( 1 )
    {
      v42 = v41->SchedulerAssist;
      if ( v42 )
      {
        if ( v41->NestingLevel <= 1u )
        {
          v43 = v42[5];
          v42[5] = v43 + 1;
          if ( v43 == -1 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      v44 = v41->SchedulerAssist;
      if ( v44 )
      {
        if ( v41->NestingLevel <= 1u )
        {
          v45 = v44[5] - 1;
          v44[5] = v45;
          if ( !v45 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      do
        KeYieldProcessorEx(&v69, v20, Queue);
      while ( CurrentThread->ThreadLock );
    }
    v46 = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = (unsigned __int8)CurrentThread->QueuePriority | 0x100;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 4 * v46 + 536));
    CurrentThread->ThreadLock = 0LL;
    v47 = KeGetCurrentPrcb();
    v48 = v47->SchedulerAssist;
    if ( v48 )
    {
      if ( v47->NestingLevel <= 1u )
      {
        v49 = v48[5] - 1;
        v48[5] = v49;
        if ( !v49 )
          KiRemoveSystemWorkPriorityKick(v47);
      }
    }
    v50 = *(struct _LIST_ENTRY **)(a1 + 8);
    v51 = ($6A96EFD8F2CF667E6B14FBA5D10C7BEB **)(a1 + 8);
    if ( v50->Blink != (struct _LIST_ENTRY *)(a1 + 8) )
      goto LABEL_163;
    v18->WaitBlock[0].WaitListEntry.Flink = v50;
    v18->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v51;
    v50->Blink = (struct _LIST_ENTRY *)v18;
    *v51 = v18;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)v18, v38, v37);
    CurrentThread->WaitReason = 0;
    if ( result != 256 )
      return result;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v60 = KeGetCurrentPrcb();
  v70 = 0;
  while ( 1 )
  {
    v61 = v60->SchedulerAssist;
    if ( v61 )
    {
      if ( v60->NestingLevel <= 1u )
      {
        v62 = v61[5];
        v61[5] = v62 + 1;
        if ( v62 == -1 )
          KiRemoveSystemWorkPriorityKick(v60);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      break;
    v63 = v60->SchedulerAssist;
    if ( v63 )
    {
      if ( v60->NestingLevel <= 1u )
      {
        v64 = v63[5] - 1;
        v63[5] = v64;
        if ( !v64 )
          KiRemoveSystemWorkPriorityKick(v60);
      }
    }
    do
      KeYieldProcessorEx(&v70, v20, Queue);
    while ( CurrentThread->ThreadLock );
  }
  if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 )
  {
    CurrentThread->Queue = 0LL;
    Flink = CurrentThread->QueueListEntry.Flink;
    Blink = CurrentThread->QueueListEntry.Blink;
    if ( Flink->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
LABEL_163:
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  KiReleaseThreadLockSafe(CurrentThread);
  v36 = 128LL;
LABEL_160:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  CurrentThread->WaitReason = 0;
  v67 = KeGetCurrentPrcb();
  if ( v67->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(v67, 1LL, 0LL);
  LOBYTE(Queue) = 1;
  KiFastExitThreadWait(v67, CurrentThread, Queue);
  return v36;
}
