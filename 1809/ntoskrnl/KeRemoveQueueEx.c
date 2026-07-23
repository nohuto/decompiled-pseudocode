/*
 * XREFs of KeRemoveQueueEx @ 0x140058D60
 * Callers:
 *     IoRemoveIoCompletion @ 0x140058990 (IoRemoveIoCompletion.c)
 *     KeRemoveQueue @ 0x140136C10 (KeRemoveQueue.c)
 *     ExpWorkerFactoryManagerThread @ 0x14017FFE0 (ExpWorkerFactoryManagerThread.c)
 *     FsRtlWorkerThread @ 0x140192620 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x140192820 (IopPassiveInterruptRealtimeWorker.c)
 *     PopFxEmergencyWorker @ 0x140192F50 (PopFxEmergencyWorker.c)
 *     KiBlockAndActivateUmsThread @ 0x14029D680 (KiBlockAndActivateUmsThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406CC08C (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400BC720 (KiSetVpThreadSpinLockCount.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiFastExitThreadWait @ 0x1400F9E2C (KiFastExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1400FBEE0 (KiProcessThreadWaitList.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiSwitchQueue @ 0x140112478 (KiSwitchQueue.c)
 *     KiTestForAlertPending @ 0x14011F8F0 (KiTestForAlertPending.c)
 *     KiAttemptFastRemoveQueue @ 0x140127884 (KiAttemptFastRemoveQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiAcquirePrcbLock @ 0x14028F350 (KiAcquirePrcbLock.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceDequeueWork @ 0x14030FE60 (EtwTraceDequeueWork.c)
 */

ULONG __stdcall KeRemoveQueueEx(
        PKQUEUE Queue,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PLIST_ENTRY *EntryArray,
        ULONG Count)
{
  struct _KTHREAD *CurrentThread; // rbx
  BOOLEAN v7; // r11
  unsigned __int8 CurrentIrql; // dl
  __int64 v11; // r14
  ULONG v12; // r13d
  struct _LIST_ENTRY *Flink; // rdx
  LIST_ENTRY *p_EntryListHead; // r8
  ULONG v15; // ebp
  struct _LIST_ENTRY *v16; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v18; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int8 WaitIrql; // r15
  _KTHREAD *v21; // r14
  struct _KPRCB *v22; // rdi
  _KTHREAD *NextThread; // rdi
  bool v24; // zf
  struct _KPRCB *v25; // rcx
  struct _KPRCB *v26; // rcx
  unsigned __int8 i; // r12
  struct _KPRCB *v29; // rdi
  _DWORD *v30; // rcx
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  PLIST_ENTRY *v34; // r14
  struct _KPRCB *v35; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v37; // eax
  _DWORD *v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  char v41; // r11
  struct _KPRCB *v42; // rsi
  unsigned __int8 v43; // r15
  _KTHREAD *v44; // rbp
  struct _KPRCB *v45; // rdi
  _DWORD *v46; // rcx
  int v47; // eax
  _DWORD *v48; // rcx
  int v49; // eax
  _KTHREAD *v50; // rdi
  bool v51; // zf
  struct _KPRCB *v52; // rcx
  struct _KPRCB *v53; // rcx
  PLIST_ENTRY *v54; // rdx
  struct _KPRCB *v55; // rcx
  unsigned __int8 v56; // cl
  _DWORD *v57; // rdx
  struct _KPRCB *v58; // rcx
  struct _KPRCB *v59; // rsi
  _KTHREAD *v60; // rbp
  _KTHREAD *v61; // rdi
  bool v62; // zf
  struct _KPRCB *v63; // rcx
  struct _KPRCB *v64; // rcx
  int v65; // eax
  struct _KQUEUE *v66; // r8
  $6A96EFD8F2CF667E6B14FBA5D10C7BEB *v67; // r14
  unsigned int v68; // edi
  ULONG v69; // edi
  __int64 v70; // rdi
  int v71; // edx
  unsigned __int64 v72; // rax
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v74; // rcx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v76; // rcx
  _LIST_ENTRY *v77; // rax
  __int64 v78; // rax
  unsigned __int8 v79; // di
  struct _KPRCB *v80; // rcx
  struct _LIST_ENTRY *v81; // rdx
  struct _LIST_ENTRY *v82; // rcx
  struct _KPRCB *v83; // rsi
  int v84; // [rsp+30h] [rbp-68h] BYREF
  int v85; // [rsp+34h] [rbp-64h] BYREF
  int v86; // [rsp+38h] [rbp-60h] BYREF
  int v87; // [rsp+3Ch] [rbp-5Ch] BYREF
  int v88; // [rsp+40h] [rbp-58h] BYREF
  LONGLONG QuadPart; // [rsp+48h] [rbp-50h]
  int v93; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v7 = Alertable;
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v11 = 0LL;
  v12 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v93 = 1;
    }
    else
    {
      v93 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v93 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue == Queue )
  {
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v84 = 0;
      while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
          KeYieldProcessorEx(&v84);
        while ( (Queue->Header.LockNV & 0x80u) != 0 );
      }
      if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
      {
        Flink = Queue->EntryListHead.Flink;
        p_EntryListHead = &Queue->EntryListHead;
        v15 = 0;
        do
        {
          --Queue->Header.SignalState;
          v16 = Flink->Flink;
          if ( !Flink->Flink )
            KeBugCheckEx(0x96u, (ULONG_PTR)Flink, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)Flink[1].Flink);
          Blink = Flink->Blink;
          if ( v16->Blink != Flink || Blink->Flink != Flink )
            __fastfail(3u);
          Blink->Flink = v16;
          v16->Blink = Blink;
          v18 = v15++;
          Flink->Flink = 0LL;
          EntryArray[v18] = Flink;
          Flink = p_EntryListHead->Flink;
        }
        while ( p_EntryListHead->Flink != p_EntryListHead && v15 < Count );
        if ( v15 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          CurrentPrcb = KeGetCurrentPrcb();
          WaitIrql = CurrentThread->WaitIrql;
          if ( WaitIrql >= 2u )
          {
            if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
              KiRequestSoftwareInterrupt(CurrentPrcb, 2);
          }
          else
          {
            v21 = CurrentPrcb->CurrentThread;
            if ( CurrentPrcb->NextThread )
            {
              KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
              v22 = KeGetCurrentPrcb();
              v85 = 0;
              while ( 1 )
              {
                KiSetVpThreadSpinLockCount(v22, 1LL);
                if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
                  break;
                KiSetVpThreadSpinLockCount(v22, 0LL);
                do
                  KeYieldProcessorEx(&v85);
                while ( CurrentPrcb->PrcbLock );
              }
              NextThread = CurrentPrcb->NextThread;
              CurrentPrcb->NextThread = 0LL;
              _disable();
              KiEndThreadCycleAccumulation(CurrentPrcb, v21, 0LL);
              _enable();
              KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
              v21->WaitReason = 32;
              v21->WaitIrql = WaitIrql;
              KiQueueReadyThread(CurrentPrcb, v21);
              v24 = (unsigned __int8)KiSwapContext(v21, NextThread, WaitIrql) == 0;
            }
            else
            {
              v24 = (v21->MiscFlags & 0x40) == 0;
            }
            if ( !v24 )
            {
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
              {
                v25 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v25);
              }
              __writecr8(1uLL);
              v21->MiscFlags &= ~0x40u;
              KiDeliverApc(0, 0, 0LL);
            }
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            {
              v26 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v26);
            }
            __writecr8(WaitIrql);
          }
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            EtwTraceDequeueWork(CurrentThread, EntryArray, v15);
          return v15;
        }
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      v7 = Alertable;
    }
    else if ( Timeout && !Timeout->QuadPart )
    {
      if ( (Queue->Header.Signalling & 1) != 0 )
      {
        v34 = EntryArray;
        *EntryArray = (PLIST_ENTRY)128;
      }
      else
      {
        if ( Alertable )
        {
          v35 = KeGetCurrentPrcb();
          v86 = 0;
          while ( 1 )
          {
            SchedulerAssist = v35->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( v35->NestingLevel <= 1u )
              {
                v37 = SchedulerAssist[5];
                SchedulerAssist[5] = v37 + 1;
                if ( v37 == -1 )
                  KiRemoveSystemWorkPriorityKick(v35);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
              break;
            v38 = v35->SchedulerAssist;
            if ( v38 )
            {
              if ( v35->NestingLevel <= 1u )
              {
                v39 = v38[5] - 1;
                v38[5] = v39;
                if ( !v39 )
                  KiRemoveSystemWorkPriorityKick(v35);
              }
            }
            do
              KeYieldProcessorEx(&v86);
            while ( CurrentThread->ThreadLock );
          }
          v7 = Alertable;
        }
        v34 = EntryArray;
        v40 = (int)KiTestForAlertPending(CurrentThread, v7, (unsigned __int8)WaitMode, 1LL);
        if ( !v40 )
          v40 = 258LL;
        *EntryArray = (PLIST_ENTRY)v40;
        if ( v41 )
          KiReleaseThreadLockSafe(CurrentThread);
      }
      v42 = KeGetCurrentPrcb();
      v43 = CurrentThread->WaitIrql;
      if ( v43 >= 2u )
      {
        if ( v42->NextThread && !v42->DpcRoutineActive )
          KiRequestSoftwareInterrupt(v42, 2);
      }
      else
      {
        v44 = v42->CurrentThread;
        if ( v42->NextThread )
        {
          KiAbProcessContextSwitch((__int64)v42->CurrentThread, 0);
          v45 = KeGetCurrentPrcb();
          v87 = 0;
          while ( 1 )
          {
            v46 = v45->SchedulerAssist;
            if ( v46 )
            {
              if ( v45->NestingLevel <= 1u )
              {
                v47 = v46[5];
                v46[5] = v47 + 1;
                if ( v47 == -1 )
                  KiRemoveSystemWorkPriorityKick(v45);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&v42->PrcbLock, 0LL) )
              break;
            v48 = v45->SchedulerAssist;
            if ( v48 )
            {
              if ( v45->NestingLevel <= 1u )
              {
                v49 = v48[5] - 1;
                v48[5] = v49;
                if ( !v49 )
                  KiRemoveSystemWorkPriorityKick(v45);
              }
            }
            do
              KeYieldProcessorEx(&v87);
            while ( v42->PrcbLock );
          }
          v50 = v42->NextThread;
          v42->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation(v42, v44, 0LL);
          _enable();
          KiUpdatePriorityMatrixThreadState(v42, v50, 0LL, 2LL);
          v44->WaitReason = 32;
          v44->WaitIrql = v43;
          KiQueueReadyThread(v42, v44);
          v51 = (unsigned __int8)KiSwapContext(v44, v50, v43) == 0;
        }
        else
        {
          v51 = (v44->MiscFlags & 0x40) == 0;
        }
        if ( !v51 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v52 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v52);
          }
          __writecr8(1uLL);
          v44->MiscFlags &= ~0x40u;
          KiDeliverApc(0, 0, 0LL);
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v53);
        }
        __writecr8(v43);
      }
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
        return v12;
      v54 = v34;
LABEL_239:
      EtwTraceDequeueWork(CurrentThread, v54, v12);
      return v12;
    }
  }
  for ( i = CurrentThread->WaitIrql; ; CurrentThread->WaitIrql = i )
  {
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( v7 )
        CurrentThread->MiscFlags |= 0x10u;
      v29 = KeGetCurrentPrcb();
      v88 = 0;
      while ( 1 )
      {
        v30 = v29->SchedulerAssist;
        if ( v30 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v31 = v30[5];
            v30[5] = v31 + 1;
            if ( v31 == -1 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
        v32 = v29->SchedulerAssist;
        if ( v32 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v33 = v32[5] - 1;
            v32[5] = v33;
            if ( !v33 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
        do
          KeYieldProcessorEx(&v88);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || i )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v55->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v55);
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      v56 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v56 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v7 = Alertable;
      CurrentThread->WaitIrql = 0;
    }
    if ( Alertable )
    {
      if ( CurrentThread->Alerted[WaitMode] )
      {
        CurrentThread->Alerted[WaitMode] = 0;
        v11 = 257LL;
        goto LABEL_147;
      }
      if ( WaitMode
        && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_146:
        v11 = 192LL;
LABEL_147:
        KiReleaseThreadLockSafe(CurrentThread);
        v59 = KeGetCurrentPrcb();
        if ( i >= 2u )
        {
          if ( v59->NextThread && !v59->DpcRoutineActive )
            KiRequestSoftwareInterrupt(v59, 2);
        }
        else
        {
          v60 = v59->CurrentThread;
          if ( v59->NextThread )
          {
            KiAbProcessContextSwitch((__int64)v59->CurrentThread, 0);
            KiAcquirePrcbLock(v59);
            v61 = v59->NextThread;
            v59->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(v59, v60, 0LL);
            _enable();
            KiUpdatePriorityMatrixThreadState(v59, v61, 0LL, 2LL);
            v60->WaitReason = 32;
            v60->WaitIrql = i;
            KiQueueReadyThread(v59, v60);
            v62 = (unsigned __int8)KiSwapContext(v60, v61, i) == 0;
          }
          else
          {
            v62 = (v60->MiscFlags & 0x40) == 0;
          }
          if ( !v62 )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            {
              v63 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v63->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v63);
            }
            __writecr8(1uLL);
            v60->MiscFlags &= ~0x40u;
            KiDeliverApc(0, 0, 0LL);
          }
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v64 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v64->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v64);
          }
          __writecr8(i);
        }
        goto LABEL_170;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v11 = 257LL;
        goto LABEL_147;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
    {
      goto LABEL_146;
    }
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = 15;
    CurrentThread->ThreadLock = 0LL;
    v58 = KeGetCurrentPrcb();
    v57 = v58->SchedulerAssist;
    if ( v57 )
    {
      if ( v58->NestingLevel <= 1u )
      {
        v65 = v57[5] - 1;
        v57[5] = v65;
        if ( !v65 )
          KiRemoveSystemWorkPriorityKick(v58);
      }
    }
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
LABEL_170:
    if ( v11 )
    {
      *EntryArray = (PLIST_ENTRY)v11;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
        return v12;
      v54 = EntryArray;
      goto LABEL_239;
    }
    v66 = (struct _KQUEUE *)CurrentThread->Queue;
    if ( Queue != v66 )
      KiSwitchQueue(CurrentThread, Queue);
    v67 = &CurrentThread->320;
    v68 = 0;
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = Queue;
    if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v68 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v58, v57, v66) )
        {
          HvlNotifyLongSpinWait(v68);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
    }
    if ( Queue->Header.SignalState )
    {
      if ( Queue->CurrentCount <= Queue->MaximumCount )
      {
        v69 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue);
        if ( v69 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          goto LABEL_231;
        }
      }
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
    {
      if ( CurrentThread->Queue )
      {
        v81 = CurrentThread->QueueListEntry.Flink;
        v82 = CurrentThread->QueueListEntry.Blink;
        if ( v81->Blink != &CurrentThread->QueueListEntry || v82->Flink != &CurrentThread->QueueListEntry )
LABEL_236:
          __fastfail(3u);
        v82->Flink = v81;
        v81->Blink = v82;
        CurrentThread->Queue = 0LL;
      }
      v78 = 128LL;
LABEL_230:
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      v69 = 1;
      *EntryArray = (PLIST_ENTRY)v78;
LABEL_231:
      CurrentThread->WaitReason = 0;
      v83 = KeGetCurrentPrcb();
      if ( v83->DeferredReadyListHead.Next )
        KiProcessThreadWaitList(v83, 1LL, 0LL);
      KiFastExitThreadWait(v83, CurrentThread, 1LL);
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        EtwTraceDequeueWork(CurrentThread, EntryArray, v69);
      return v69;
    }
    v70 = QuadPart;
    v71 = v93;
    v72 = QuadPart;
    if ( v93 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v74 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v72 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v72 = QuadPart + ThreadTimerDelay;
      }
      v71 = 2;
    }
    else
    {
      if ( !v93 )
        goto LABEL_197;
      if ( !QuadPart )
        goto LABEL_205;
      v74 = MEMORY[0xFFFFF78000000014];
    }
    if ( v74 > v72 )
    {
LABEL_205:
      v78 = 258LL;
      goto LABEL_230;
    }
LABEL_197:
    _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
    p_WaitListHead = &Queue->Header.WaitListHead;
    v76 = Queue->Header.WaitListHead.Flink;
    if ( v76->Blink != &Queue->Header.WaitListHead )
      goto LABEL_236;
    v67->WaitBlock[0].WaitListEntry.Flink = v76;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
    v76->Blink = (struct _LIST_ENTRY *)v67;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v67;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v77 = (_LIST_ENTRY *)KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, v71, v70);
    CurrentThread->WaitReason = 0;
    if ( v77 != (_LIST_ENTRY *)256 )
      break;
    i = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && i < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v7 = Alertable;
    v11 = 0LL;
  }
  *EntryArray = v77;
  if ( Count > 1
    && v77 != (_LIST_ENTRY *)128
    && (unsigned __int64)&v77[-17].Blink + 7 > 1
    && v77 != (_LIST_ENTRY *)192
    && Queue->Header.SignalState )
  {
    v79 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v79 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KiAcquireKobjectLockSafe(Queue);
    if ( Queue->Header.SignalState )
      v12 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue) + 1;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v79 < 2u )
    {
      v80 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v80->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v80);
    }
    __writecr8(v79);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    v54 = EntryArray;
    goto LABEL_239;
  }
  return v12;
}
