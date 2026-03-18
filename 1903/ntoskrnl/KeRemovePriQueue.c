/*
 * XREFs of KeRemovePriQueue @ 0x140059F90
 * Callers:
 *     ExpWorkerThread @ 0x140059C30 (ExpWorkerThread.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012B6C (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400E45FC (KiSetBasePriorityAndClearDecrement.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiAttemptFastRemovePriQueue @ 0x14010D480 (KiAttemptFastRemovePriQueue.c)
 *     KiProcessThreadWaitList @ 0x1401148D0 (KiProcessThreadWaitList.c)
 *     KiFastExitThreadWait @ 0x14011AF94 (KiFastExitThreadWait.c)
 *     KiSwitchPriQueue @ 0x140139B10 (KiSwitchPriQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiGetDueTimeWithThreadTimerDelay @ 0x1402B1E50 (KiGetDueTimeWithThreadTimerDelay.c)
 */

__int64 __fastcall KeRemovePriQueue(ULONG_PTR a1, char a2, char a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 WaitIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v9; // ebp
  $B82006E644A0B3C21B5C2164048F272C *v10; // r14
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  __int64 v13; // rsi
  _DISPATCHER_HEADER *volatile Queue; // r8
  unsigned int v15; // esi
  __int64 v16; // r15
  unsigned __int64 DueTimeWithThreadTimerDelay; // rax
  struct _KPRCB *v18; // rsi
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  struct _LIST_ENTRY *v23; // rcx
  struct _LIST_ENTRY *v24; // rax
  __int64 result; // rax
  struct _KPRCB *v26; // rsi
  _DWORD *v27; // rcx
  int v28; // ebp
  __int64 QueuePriority; // rax
  struct _KPRCB *v30; // rdi
  struct _KPRCB *v31; // rcx
  __int64 CycleTime; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int8 v34; // r8
  int v35; // edx
  _DISPATCHER_HEADER *volatile v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int8 v38; // dl
  _DWORD *v39; // rcx
  _DWORD *v40; // rcx
  _DWORD *v41; // rcx
  _DWORD *v42; // rcx
  _DWORD *v43; // rcx
  _DWORD *v44; // rcx
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v46; // r11
  int v47; // eax
  int v48; // eax
  int v49; // eax
  struct _KPRCB *v50; // rcx
  unsigned __int8 v51; // cl
  __int64 v52; // rdx
  struct _KPRCB *v53; // rbp
  __int64 v54; // r13
  struct _KPRCB *v55; // r15
  _DWORD *v56; // rcx
  int v57; // eax
  _DWORD *v58; // rcx
  int v59; // eax
  _DWORD *v60; // rcx
  int v61; // eax
  _KTHREAD *NextThread; // r15
  __int64 v63; // r8
  struct _KPRCB *v64; // rcx
  struct _KPRCB *v65; // rcx
  struct _KPRCB *v66; // rcx
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // ecx
  unsigned __int64 v72; // r11
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  struct _KPRCB *v77; // rsi
  _DWORD *v78; // rcx
  int v79; // eax
  _DWORD *v80; // rcx
  int v81; // eax
  _DWORD *v82; // rcx
  int v83; // eax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  int v86; // [rsp+20h] [rbp-68h]
  int v87; // [rsp+24h] [rbp-64h] BYREF
  int v88; // [rsp+28h] [rbp-60h] BYREF
  int v89; // [rsp+2Ch] [rbp-5Ch] BYREF
  int v90; // [rsp+30h] [rbp-58h] BYREF
  int v91; // [rsp+34h] [rbp-54h] BYREF
  unsigned __int64 v92; // [rsp+38h] [rbp-50h]
  int v96; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( a4 )
  {
    if ( *(int *)(a4 + 4) < 0 )
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(0LL);
      v37 = UnbiasedInterruptTime - (*v46 + CurrentThread->RelativeTimerBias);
      v86 = 2;
    }
    else
    {
      v37 = *(_QWORD *)a4;
      v86 = 1;
    }
    v92 = v37;
  }
  else
  {
    v86 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = a2;
      if ( a3 )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v87 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v47 = SchedulerAssist[5];
          SchedulerAssist[5] = v47 + 1;
          if ( v47 == -1 )
LABEL_79:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v39 = CurrentPrcb->SchedulerAssist;
        if ( v39 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v48 = v39[5] - 1;
            v39[5] = v48;
            if ( !v48 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v87);
        while ( CurrentThread->ThreadLock );
        v40 = CurrentPrcb->SchedulerAssist;
        if ( v40 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v49 = v40[5];
            v40[5] = v49 + 1;
            if ( v49 == -1 )
              goto LABEL_79;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v50 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v50);
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      v51 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v51 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      CurrentThread->WaitIrql = 0;
    }
    v9 = v86;
    v10 = &CurrentThread->320;
    if ( a3 )
    {
      if ( CurrentThread->Alerted[a2] )
      {
        CurrentThread->Alerted[a2] = 0;
        v13 = 257LL;
      }
      else if ( !a2
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( !CurrentThread->Alerted[0] )
          goto LABEL_14;
        CurrentThread->Alerted[0] = 0;
        v13 = 257LL;
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_105:
        v13 = 192LL;
      }
      KiReleaseThreadLockSafe(CurrentThread);
      v53 = KeGetCurrentPrcb();
      if ( WaitIrql >= 2u )
      {
        if ( v53->NextThread && !v53->DpcRoutineActive )
        {
          LOBYTE(v52) = 2;
          KiRequestSoftwareInterrupt(v53, v52);
        }
        goto LABEL_144;
      }
      v54 = (__int64)v53->CurrentThread;
      if ( v53->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v53->CurrentThread, 0);
        v55 = KeGetCurrentPrcb();
        v88 = 0;
        v56 = v55->SchedulerAssist;
        if ( v56 )
        {
          if ( v55->NestingLevel <= 1u )
          {
            v57 = v56[5];
            v56[5] = v57 + 1;
            if ( v57 == -1 )
LABEL_111:
              KiRemoveSystemWorkPriorityKick(v55);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v53->PrcbLock, 0LL) )
        {
          v58 = v55->SchedulerAssist;
          if ( v58 )
          {
            if ( v55->NestingLevel <= 1u )
            {
              v59 = v58[5] - 1;
              v58[5] = v59;
              if ( !v59 )
                KiRemoveSystemWorkPriorityKick(v55);
            }
          }
          do
            KeYieldProcessorEx(&v88);
          while ( v53->PrcbLock );
          v60 = v55->SchedulerAssist;
          if ( v60 )
          {
            if ( v55->NestingLevel <= 1u )
            {
              v61 = v60[5];
              v60[5] = v61 + 1;
              if ( v61 == -1 )
                goto LABEL_111;
            }
          }
        }
        NextThread = v53->NextThread;
        v53->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v53, v54, 0LL);
        _enable();
        v53->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
        {
          v63 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
          NextThread->ReadyTime = v63 + MEMORY[0xFFFFF78000000320];
        }
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v54 + 643) = 32;
        *(_BYTE *)(v54 + 390) = WaitIrql;
        KiQueueReadyThread((__int64)v53, v54, v63);
        if ( !(unsigned __int8)KiSwapContext(v54, NextThread, WaitIrql) )
          goto LABEL_130;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v64 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v64->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v64);
        }
      }
      else
      {
        if ( (*(_DWORD *)(v54 + 116) & 0x40) == 0 )
        {
LABEL_130:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v65 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v65->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v65);
          }
          __writecr8(WaitIrql);
LABEL_144:
          v9 = v86;
          goto LABEL_16;
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v66 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v66->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v66);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v54 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
      goto LABEL_130;
    }
    if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && a2 )
      goto LABEL_105;
LABEL_14:
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = 15;
    CurrentThread->ThreadLock = 0LL;
    v11 = KeGetCurrentPrcb();
    v12 = v11->SchedulerAssist;
    if ( v12 )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v67 = v12[5] - 1;
        v12[5] = v67;
        if ( !v67 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    v13 = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
LABEL_16:
    if ( v13 )
      return v13;
    Queue = CurrentThread->Queue;
    if ( (_DISPATCHER_HEADER *volatile)a1 != Queue )
      KiSwitchPriQueue(CurrentThread, a1);
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    v15 = 0;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
        {
          HvlNotifyLongSpinWait(v15);
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
      v26 = KeGetCurrentPrcb();
      v89 = 0;
      v27 = v26->SchedulerAssist;
      if ( v27 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v68 = v27[5];
          v27[5] = v68 + 1;
          if ( v68 == -1 )
LABEL_153:
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v41 = v26->SchedulerAssist;
        if ( v41 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v69 = v41[5] - 1;
            v41[5] = v69;
            if ( !v69 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
        do
          KeYieldProcessorEx(&v89);
        while ( CurrentThread->ThreadLock );
        v42 = v26->SchedulerAssist;
        if ( v42 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v70 = v42[5];
            v42[5] = v70 + 1;
            if ( v70 == -1 )
              goto LABEL_153;
          }
        }
      }
      v13 = KiAttemptFastRemovePriQueue(a1);
      if ( v13 )
      {
        v28 = v96;
        QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
        if ( (_DWORD)QueuePriority != v96 )
        {
          v35 = CurrentThread->QueuePriority & 0x100;
          if ( !v35 )
          {
            v36 = CurrentThread->Queue;
            _InterlockedDecrement((volatile signed __int32 *)&v36[22].WaitListHead + QueuePriority);
            _InterlockedIncrement((volatile signed __int32 *)&v36[22].WaitListHead + v96);
            v28 = v96;
          }
          CurrentThread->QueuePriority = v35 | (unsigned __int8)v28;
        }
        CurrentThread->Saturation = 0;
        KiSetBasePriorityAndClearDecrement(CurrentThread, &v96, 0LL);
        if ( v28 != CurrentThread->Priority )
        {
          v31 = KeGetCurrentPrcb();
          if ( v31->NestingLevel )
          {
            CycleTime = CurrentThread->CycleTime;
          }
          else
          {
            _disable();
            CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)v31, (__int64)CurrentThread, 0LL);
            _enable();
          }
          v33 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
          v34 = v96;
          CurrentThread->QuantumTarget = v33;
          KiSetPriorityThread(CurrentThread, 0LL, v34);
        }
        KiReleaseThreadLockSafe(CurrentThread);
        goto LABEL_36;
      }
      KiReleaseThreadLockSafe(CurrentThread);
    }
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      break;
    v16 = v92;
    DueTimeWithThreadTimerDelay = v92;
    if ( v9 == 2 )
    {
      KiQueryUnbiasedInterruptTime(0LL);
      DueTimeWithThreadTimerDelay = KiGetDueTimeWithThreadTimerDelay(CurrentThread, (unsigned int)(v71 + 2), v16, 0LL);
    }
    else
    {
      if ( !v9 )
        goto LABEL_24;
      if ( !v92 )
        goto LABEL_58;
      v72 = MEMORY[0xFFFFF78000000014];
    }
    if ( v72 > DueTimeWithThreadTimerDelay )
    {
LABEL_58:
      v13 = 258LL;
      goto LABEL_36;
    }
LABEL_24:
    v18 = KeGetCurrentPrcb();
    v90 = 0;
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v73 = v19[5];
        v19[5] = v73 + 1;
        if ( v73 == -1 )
LABEL_166:
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v43 = v18->SchedulerAssist;
      if ( v43 )
      {
        if ( v18->NestingLevel <= 1u )
        {
          v74 = v43[5] - 1;
          v43[5] = v74;
          if ( !v74 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
      do
        KeYieldProcessorEx(&v90);
      while ( CurrentThread->ThreadLock );
      v44 = v18->SchedulerAssist;
      if ( v44 )
      {
        if ( v18->NestingLevel <= 1u )
        {
          v75 = v44[5];
          v44[5] = v75 + 1;
          if ( v75 == -1 )
            goto LABEL_166;
        }
      }
    }
    v20 = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = (unsigned __int8)CurrentThread->QueuePriority | 0x100;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 4 * v20 + 536));
    CurrentThread->ThreadLock = 0LL;
    v21 = KeGetCurrentPrcb();
    v22 = v21->SchedulerAssist;
    if ( v22 )
    {
      if ( v21->NestingLevel <= 1u )
      {
        v76 = v22[5] - 1;
        v22[5] = v76;
        if ( !v76 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    v23 = *(struct _LIST_ENTRY **)(a1 + 8);
    v24 = (struct _LIST_ENTRY *)(a1 + 8);
    if ( v23->Blink != (struct _LIST_ENTRY *)(a1 + 8) )
      goto LABEL_199;
    v10->WaitBlock[0].WaitListEntry.Flink = v23;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v24;
    v23->Blink = (struct _LIST_ENTRY *)v10;
    v24->Flink = (struct _LIST_ENTRY *)v10;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, v9, v16);
    CurrentThread->WaitReason = 0;
    if ( result != 256 )
      return result;
    v38 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v38 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = v38;
  }
  v77 = KeGetCurrentPrcb();
  v91 = 0;
  v78 = v77->SchedulerAssist;
  if ( v78 )
  {
    if ( v77->NestingLevel <= 1u )
    {
      v79 = v78[5];
      v78[5] = v79 + 1;
      if ( v79 == -1 )
LABEL_183:
        KiRemoveSystemWorkPriorityKick(v77);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v80 = v77->SchedulerAssist;
    if ( v80 )
    {
      if ( v77->NestingLevel <= 1u )
      {
        v81 = v80[5] - 1;
        v80[5] = v81;
        if ( !v81 )
          KiRemoveSystemWorkPriorityKick(v77);
      }
    }
    do
      KeYieldProcessorEx(&v91);
    while ( CurrentThread->ThreadLock );
    v82 = v77->SchedulerAssist;
    if ( v82 )
    {
      if ( v77->NestingLevel <= 1u )
      {
        v83 = v82[5];
        v82[5] = v83 + 1;
        if ( v83 == -1 )
          goto LABEL_183;
      }
    }
  }
  if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 )
  {
    CurrentThread->Queue = 0LL;
    Flink = CurrentThread->QueueListEntry.Flink;
    Blink = CurrentThread->QueueListEntry.Blink;
    if ( Flink->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
LABEL_199:
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  KiReleaseThreadLockSafe(CurrentThread);
  v13 = 128LL;
LABEL_36:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  CurrentThread->WaitReason = 0;
  v30 = KeGetCurrentPrcb();
  if ( v30->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(v30, 1LL, 0LL);
  LOBYTE(Queue) = 1;
  KiFastExitThreadWait(v30, CurrentThread, Queue);
  return v13;
}
