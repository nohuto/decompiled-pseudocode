/*
 * XREFs of KeRemoveQueueEx @ 0x140044B60
 * Callers:
 *     IoRemoveIoCompletion @ 0x140044840 (IoRemoveIoCompletion.c)
 *     KeRemoveQueue @ 0x1401271E0 (KeRemoveQueue.c)
 *     FsRtlWorkerThread @ 0x14019C760 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x14019C920 (IopPassiveInterruptRealtimeWorker.c)
 *     PopFxEmergencyWorker @ 0x14019D8F0 (PopFxEmergencyWorker.c)
 *     KiBlockAndActivateUmsThread @ 0x1402B5EFC (KiBlockAndActivateUmsThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406EB2C8 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BD60 (KiSetVpThreadSpinLockCount.c)
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiTestForAlertPending @ 0x1400BA8F8 (KiTestForAlertPending.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiSwitchQueue @ 0x14010D1B8 (KiSwitchQueue.c)
 *     KiProcessThreadWaitList @ 0x1401148D0 (KiProcessThreadWaitList.c)
 *     KiFastExitThreadWait @ 0x14011AF94 (KiFastExitThreadWait.c)
 *     KiAttemptFastRemoveQueue @ 0x14012863C (KiAttemptFastRemoveQueue.c)
 *     KiSetThreadState @ 0x14013AC0C (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceDequeueWork @ 0x14032D924 (EtwTraceDequeueWork.c)
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
  unsigned __int8 CurrentIrql; // dl
  unsigned __int64 v11; // rdx
  ULONG v12; // r15d
  LONGLONG QuadPart; // rbp
  __int64 v14; // r12
  struct _KPRCB *v15; // rsi
  _DWORD *v16; // rcx
  $B82006E644A0B3C21B5C2164048F272C *v17; // r14
  __int64 v18; // rbp
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // rsi
  unsigned int v22; // esi
  ULONG v23; // r13d
  int v24; // edx
  unsigned __int64 v25; // rax
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v27; // rcx
  _LIST_ENTRY *v28; // rax
  PLIST_ENTRY *v29; // r14
  struct _LIST_ENTRY *Flink; // rdx
  LIST_ENTRY *p_EntryListHead; // r8
  PLIST_ENTRY *v33; // r12
  __int64 v34; // rsi
  struct _LIST_ENTRY *v35; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 WaitIrql; // bp
  __int64 v39; // r14
  int v40; // eax
  __int64 v41; // rcx
  struct _KPRCB *v42; // rdi
  unsigned __int8 v43; // si
  __int64 v44; // rbp
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v46; // rcx
  PLIST_ENTRY *v47; // r14
  struct _KPRCB *v48; // rdi
  __int64 v49; // r9
  PLIST_ENTRY *v50; // rcx
  __int64 v51; // rdx
  struct _KPRCB *v52; // r13
  __int64 v53; // r12
  unsigned __int8 v54; // r13
  struct _KPRCB *v55; // r12
  _KTHREAD *NextThread; // r13
  __int64 v57; // r8
  struct _KPRCB *v58; // rcx
  struct _KPRCB *v59; // r13
  _DWORD *v60; // rcx
  _KTHREAD *v61; // r13
  __int64 v62; // r8
  struct _KPRCB *v63; // rcx
  unsigned __int8 v64; // cl
  _DWORD *v65; // rcx
  _DWORD *v66; // rcx
  struct _KPRCB *v67; // rcx
  _DWORD *v68; // rdx
  _KTHREAD *v69; // r14
  __int64 v70; // r8
  _KTHREAD *v71; // rcx
  char v72; // al
  _DWORD *v73; // rcx
  _DWORD *v74; // rcx
  struct _KPRCB *v75; // rcx
  struct _KPRCB *v76; // rcx
  struct _KPRCB *v77; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v79; // eax
  _DWORD *v80; // rcx
  int v81; // eax
  _DWORD *v82; // rcx
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  struct _KPRCB *v87; // rcx
  int v88; // eax
  int v89; // eax
  int v90; // eax
  struct _KPRCB *v91; // rcx
  int v92; // eax
  struct _KTHREAD *Thread; // rcx
  int v94; // eax
  struct _KTHREAD *v95; // rcx
  int Blink_high; // eax
  struct _KPRCB *v97; // rcx
  struct _KPRCB *v98; // rcx
  struct _KPRCB *v99; // rcx
  int v100; // eax
  struct _LIST_ENTRY *v101; // rdx
  struct _LIST_ENTRY *v102; // rcx
  PLIST_ENTRY *v103; // rdx
  int v104; // [rsp+30h] [rbp-78h] BYREF
  int v105; // [rsp+34h] [rbp-74h] BYREF
  int v106; // [rsp+38h] [rbp-70h] BYREF
  int v107; // [rsp+3Ch] [rbp-6Ch] BYREF
  int v108; // [rsp+40h] [rbp-68h] BYREF
  __int64 v109; // [rsp+48h] [rbp-60h]
  LONGLONG v110; // [rsp+50h] [rbp-58h]
  _KTHREAD *v111; // [rsp+58h] [rbp-50h]
  int v112; // [rsp+B0h] [rbp+8h]
  int v115; // [rsp+C8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v11 = 0xFFFFF78000000008uLL;
  v12 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      v112 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v112 = 1;
    }
    v110 = QuadPart;
  }
  else
  {
    v112 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue == Queue )
  {
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v115 = 0;
      while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
          KeYieldProcessorEx(&v115);
        while ( (Queue->Header.LockNV & 0x80u) != 0 );
      }
      if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
      {
        Flink = Queue->EntryListHead.Flink;
        p_EntryListHead = &Queue->EntryListHead;
        v33 = EntryArray;
        v34 = 0LL;
        Timeout = (PLARGE_INTEGER)Count;
        do
        {
          --Queue->Header.SignalState;
          v35 = Flink->Flink;
          if ( !Flink->Flink )
            KeBugCheckEx(0x96u, (ULONG_PTR)Flink, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)Flink[1].Flink);
          Blink = Flink->Blink;
          if ( v35->Blink != Flink || Blink->Flink != Flink )
            goto LABEL_288;
          Blink->Flink = v35;
          v35->Blink = Blink;
          Flink->Flink = 0LL;
          v33[v34] = Flink;
          v34 = (unsigned int)(v34 + 1);
          Flink = p_EntryListHead->Flink;
        }
        while ( p_EntryListHead->Flink != p_EntryListHead && (unsigned int)v34 < (unsigned int)Timeout );
        if ( (_DWORD)v34 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          CurrentPrcb = KeGetCurrentPrcb();
          WaitIrql = CurrentThread->WaitIrql;
          if ( WaitIrql >= 2u )
          {
            if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
            {
              LOBYTE(Flink) = 2;
              KiRequestSoftwareInterrupt(CurrentPrcb, Flink);
            }
          }
          else
          {
            v39 = (__int64)CurrentPrcb->CurrentThread;
            if ( CurrentPrcb->NextThread )
            {
              KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
              v55 = KeGetCurrentPrcb();
              v104 = 0;
              while ( 1 )
              {
                KiSetVpThreadSpinLockCount((__int64)v55, 1);
                if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
                  break;
                KiSetVpThreadSpinLockCount((__int64)v55, 0);
                do
                  KeYieldProcessorEx(&v104);
                while ( CurrentPrcb->PrcbLock );
              }
              NextThread = CurrentPrcb->NextThread;
              CurrentPrcb->NextThread = 0LL;
              _disable();
              KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v39, 0LL);
              _enable();
              CurrentPrcb->CurrentThread = NextThread;
              if ( NextThread->WaitBlockFill6[68] == 1 )
                NextThread->ReadyTime = NextThread->ReadyTime
                                      - NextThread->WaitBlock[2].SpareLong
                                      + MEMORY[0xFFFFF78000000320];
              KiSetThreadState(NextThread, 2LL);
              *(_BYTE *)(v39 + 643) = 32;
              *(_BYTE *)(v39 + 390) = WaitIrql;
              KiQueueReadyThread((__int64)CurrentPrcb, v39, v57);
              if ( (unsigned __int8)KiSwapContext(v39, NextThread, WaitIrql) )
              {
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
                {
                  v75 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v75->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v75);
                }
                __writecr8(1uLL);
                *(_DWORD *)(v39 + 116) &= ~0x40u;
                KiDeliverApc(0, 0, 0LL);
                v33 = EntryArray;
              }
              else
              {
                v33 = EntryArray;
              }
            }
            else if ( (*(_DWORD *)(v39 + 116) & 0x40) != 0 )
            {
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
              {
                v58 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v58->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v58);
              }
              __writecr8(1uLL);
              *(_DWORD *)(v39 + 116) &= ~0x40u;
              KiDeliverApc(0, 0, 0LL);
            }
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            {
              v76 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v76->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v76);
            }
            __writecr8(WaitIrql);
          }
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            EtwTraceDequeueWork(CurrentThread, v33, (unsigned int)v34, Timeout);
          return v34;
        }
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      goto LABEL_11;
    }
    if ( Timeout && !Timeout->QuadPart )
    {
      if ( (Queue->Header.Signalling & 1) != 0 )
      {
        v29 = EntryArray;
        *EntryArray = (PLIST_ENTRY)128;
      }
      else
      {
        if ( Alertable )
        {
          v77 = KeGetCurrentPrcb();
          v105 = 0;
          SchedulerAssist = v77->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v77->NestingLevel <= 1u )
            {
              v79 = SchedulerAssist[5];
              SchedulerAssist[5] = v79 + 1;
              if ( v79 == -1 )
LABEL_202:
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
              KeYieldProcessorEx(&v105);
            while ( CurrentThread->ThreadLock );
            v82 = v77->SchedulerAssist;
            if ( v82 )
            {
              if ( v77->NestingLevel <= 1u )
              {
                v83 = v82[5];
                v82[5] = v83 + 1;
                if ( v83 == -1 )
                  goto LABEL_202;
              }
            }
          }
        }
        v40 = KiTestForAlertPending(CurrentThread, Alertable, (unsigned __int8)WaitMode, 1LL);
        v41 = v40;
        if ( !v40 )
          v41 = 258LL;
        v29 = EntryArray;
        *EntryArray = (PLIST_ENTRY)v41;
        if ( Alertable )
          KiReleaseThreadLockSafe(CurrentThread);
      }
      v42 = KeGetCurrentPrcb();
      v43 = CurrentThread->WaitIrql;
      if ( v43 >= 2u )
      {
        if ( v42->NextThread && !v42->DpcRoutineActive )
        {
          LOBYTE(v11) = 2;
          KiRequestSoftwareInterrupt(v42, v11);
        }
LABEL_39:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
          return v12;
        v103 = v29;
        goto LABEL_289;
      }
      v44 = (__int64)v42->CurrentThread;
      if ( v42->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v42->CurrentThread, 0);
        v59 = KeGetCurrentPrcb();
        v106 = 0;
        v60 = v59->SchedulerAssist;
        if ( v60 )
        {
          if ( v59->NestingLevel <= 1u )
          {
            v84 = v60[5];
            v60[5] = v84 + 1;
            if ( v84 == -1 )
LABEL_215:
              KiRemoveSystemWorkPriorityKick(v59);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v42->PrcbLock, 0LL) )
        {
          v73 = v59->SchedulerAssist;
          if ( v73 )
          {
            if ( v59->NestingLevel <= 1u )
            {
              v85 = v73[5] - 1;
              v73[5] = v85;
              if ( !v85 )
                KiRemoveSystemWorkPriorityKick(v59);
            }
          }
          do
            KeYieldProcessorEx(&v106);
          while ( v42->PrcbLock );
          v74 = v59->SchedulerAssist;
          if ( v74 )
          {
            if ( v59->NestingLevel <= 1u )
            {
              v86 = v74[5];
              v74[5] = v86 + 1;
              if ( v86 == -1 )
                goto LABEL_215;
            }
          }
        }
        v61 = v42->NextThread;
        v42->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v42, v44, 0LL);
        _enable();
        v42->CurrentThread = v61;
        if ( v61->WaitBlockFill6[68] == 1 )
          v61->ReadyTime = v61->ReadyTime - v61->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        KiSetThreadState(v61, 2LL);
        *(_BYTE *)(v44 + 643) = 32;
        *(_BYTE *)(v44 + 390) = v43;
        KiQueueReadyThread((__int64)v42, v44, v62);
        if ( !(unsigned __int8)KiSwapContext(v44, v61, v43) )
        {
LABEL_71:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            goto LABEL_228;
          goto LABEL_72;
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          goto LABEL_153;
      }
      else
      {
        if ( (*(_DWORD *)(v44 + 116) & 0x40) == 0 )
          goto LABEL_71;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
LABEL_153:
          v63 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v63->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v63);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v44 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
      goto LABEL_71;
    }
  }
LABEL_11:
  LOBYTE(v14) = CurrentThread->WaitIrql;
  v109 = (unsigned __int8)v14;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v15 = KeGetCurrentPrcb();
      v107 = 0;
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v88 = v16[5];
          v16[5] = v88 + 1;
          if ( v88 == -1 )
LABEL_232:
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v65 = v15->SchedulerAssist;
        if ( v65 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v89 = v65[5] - 1;
            v65[5] = v89;
            if ( !v89 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        do
          KeYieldProcessorEx(&v107);
        while ( CurrentThread->ThreadLock );
        v66 = v15->SchedulerAssist;
        if ( v66 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v90 = v66[5];
            v66[5] = v90 + 1;
            if ( v90 == -1 )
              goto LABEL_232;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)v14 )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v91 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v91->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v91);
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      v64 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v64 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      CurrentThread->WaitIrql = 0;
    }
    v17 = &CurrentThread->320;
    v18 = v110;
    if ( !Alertable )
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !WaitMode )
      {
LABEL_22:
        CurrentThread->WaitBlockFill6[68] = 5;
        CurrentThread->WaitReason = 15;
        CurrentThread->ThreadLock = 0LL;
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        if ( v20 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v100 = v20[5] - 1;
            v20[5] = v100;
            if ( !v100 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        v21 = 0LL;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        goto LABEL_24;
      }
      goto LABEL_110;
    }
    if ( CurrentThread->Alerted[WaitMode] )
    {
      CurrentThread->Alerted[WaitMode] = 0;
      v21 = 257LL;
      goto LABEL_111;
    }
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
    {
      CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_110:
      v21 = 192LL;
      goto LABEL_111;
    }
    if ( !CurrentThread->Alerted[0] )
      goto LABEL_22;
    CurrentThread->Alerted[0] = 0;
    v21 = 257LL;
LABEL_111:
    KiReleaseThreadLockSafe(CurrentThread);
    v52 = KeGetCurrentPrcb();
    if ( (unsigned __int8)v14 >= 2u )
    {
      if ( v52->NextThread && !v52->DpcRoutineActive )
      {
        LOBYTE(v51) = 2;
        KiRequestSoftwareInterrupt(v52, v51);
      }
    }
    else
    {
      v53 = (__int64)v52->CurrentThread;
      if ( v52->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v52->CurrentThread, 0);
        v67 = KeGetCurrentPrcb();
        v111 = (_KTHREAD *)v67;
        v108 = 0;
        v68 = v67->SchedulerAssist;
        if ( v68 )
        {
          if ( v67->NestingLevel <= 1u )
          {
            v92 = v68[5];
            v68[5] = v92 + 1;
            if ( v92 == -1 )
              KiRemoveSystemWorkPriorityKick(v67);
          }
        }
        v69 = v111;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v52->PrcbLock, 0LL) )
        {
          Thread = v69[16].WaitBlock[2].Thread;
          if ( Thread )
          {
            if ( LOBYTE(v69->QuantumTarget) <= 1u )
            {
              v94 = HIDWORD(Thread->Header.WaitListHead.Blink) - 1;
              HIDWORD(Thread->Header.WaitListHead.Blink) = v94;
              if ( !v94 )
                KiRemoveSystemWorkPriorityKick(v69);
            }
          }
          do
            KeYieldProcessorEx(&v108);
          while ( v52->PrcbLock );
          v95 = v69[16].WaitBlock[2].Thread;
          if ( v95 )
          {
            if ( LOBYTE(v69->QuantumTarget) <= 1u )
            {
              Blink_high = HIDWORD(v95->Header.WaitListHead.Blink);
              HIDWORD(v95->Header.WaitListHead.Blink) = Blink_high + 1;
              if ( Blink_high == -1 )
                KiRemoveSystemWorkPriorityKick(v69);
            }
          }
        }
        v111 = v52->NextThread;
        v52->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v52, v53, 0LL);
        _enable();
        v71 = v111;
        v17 = &CurrentThread->320;
        v52->CurrentThread = v111;
        if ( v71->WaitBlockFill6[68] == 1 )
        {
          v70 = v71->ReadyTime - v71->WaitBlock[2].SpareLong;
          v71->ReadyTime = v70 + MEMORY[0xFFFFF78000000320];
        }
        v72 = v109;
        v71->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v53 + 390) = v72;
        *(_BYTE *)(v53 + 643) = 32;
        KiQueueReadyThread((__int64)v52, v53, v70);
        v54 = v109;
        if ( (unsigned __int8)KiSwapContext(v53, v111, (unsigned __int8)v109) )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v97 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v97->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v97);
          }
          __writecr8(1uLL);
          *(_DWORD *)(v53 + 116) &= ~0x40u;
          KiDeliverApc(0, 0, 0LL);
        }
      }
      else
      {
        if ( (*(_DWORD *)(v53 + 116) & 0x40) != 0 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v98 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v98->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v98);
          }
          __writecr8(1uLL);
          *(_DWORD *)(v53 + 116) &= ~0x40u;
          KiDeliverApc(0, 0, 0LL);
        }
        v54 = v109;
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v99 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v99->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v99);
      }
      __writecr8(v54);
    }
LABEL_24:
    if ( v21 )
    {
      v50 = EntryArray;
      *EntryArray = (PLIST_ENTRY)v21;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
        return v12;
      v103 = v50;
LABEL_289:
      EtwTraceDequeueWork(CurrentThread, v103, v12, Timeout);
      return v12;
    }
    if ( Queue != (PKQUEUE)CurrentThread->Queue )
      KiSwitchQueue(CurrentThread, Queue);
    v17->WaitBlock[0].WaitType = 3;
    v22 = 0;
    v17->WaitBlockFill4[17] = 4;
    v17->WaitBlock[0].WaitKey = 128;
    v17->WaitBlock[0].Object = Queue;
    if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v22 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19) )
        {
          HvlNotifyLongSpinWait(v22);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
    }
    v23 = Count;
    if ( Queue->Header.SignalState )
    {
      if ( Queue->CurrentCount <= Queue->MaximumCount )
      {
        LODWORD(v34) = KiAttemptFastRemoveQueue((ULONG_PTR)Queue);
        if ( (_DWORD)v34 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          v47 = EntryArray;
          goto LABEL_101;
        }
      }
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
      break;
    v24 = v112;
    v25 = v18;
    if ( v112 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v46 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v25 = v18;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v25 = ThreadTimerDelay + v18;
      }
      v24 = 2;
    }
    else
    {
      if ( !v112 )
        goto LABEL_32;
      if ( !v18 )
      {
LABEL_138:
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        v47 = EntryArray;
        *EntryArray = (PLIST_ENTRY)258;
        goto LABEL_139;
      }
      v46 = MEMORY[0xFFFFF78000000014];
    }
    if ( v46 > v25 )
      goto LABEL_138;
LABEL_32:
    _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
    p_WaitListHead = &Queue->Header.WaitListHead;
    v27 = Queue->Header.WaitListHead.Flink;
    if ( v27->Blink != &Queue->Header.WaitListHead )
      goto LABEL_288;
    v17->WaitBlock[0].WaitListEntry.Flink = v27;
    v17->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
    v27->Blink = (struct _LIST_ENTRY *)v17;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v17;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v28 = (_LIST_ENTRY *)KiCommitThreadWait((__int64)CurrentThread, (__int64 *)v17, v24, v18);
    CurrentThread->WaitReason = 0;
    if ( v28 != (_LIST_ENTRY *)256 )
    {
      v29 = EntryArray;
      *EntryArray = v28;
      if ( v23 <= 1
        || (unsigned __int64)&v28[-17].Blink + 7 <= 1
        || v28 == (_LIST_ENTRY *)128
        || v28 == (_LIST_ENTRY *)192
        || !Queue->Header.SignalState )
      {
        goto LABEL_39;
      }
      v43 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v43 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KiAcquireKobjectLockSafe(Queue);
      if ( Queue->Header.SignalState )
        v12 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue) + 1;
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v43 < 2u )
      {
LABEL_228:
        v87 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v87->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v87);
      }
LABEL_72:
      __writecr8(v43);
      goto LABEL_39;
    }
    v14 = KeGetCurrentIrql();
    v109 = v14;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v14 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = v14;
  }
  if ( !CurrentThread->Queue )
    goto LABEL_287;
  v101 = CurrentThread->QueueListEntry.Flink;
  v102 = CurrentThread->QueueListEntry.Blink;
  if ( v101->Blink != &CurrentThread->QueueListEntry || v102->Flink != &CurrentThread->QueueListEntry )
LABEL_288:
    __fastfail(3u);
  v102->Flink = v101;
  v101->Blink = v102;
  CurrentThread->Queue = 0LL;
LABEL_287:
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  v47 = EntryArray;
  *EntryArray = (PLIST_ENTRY)128;
LABEL_139:
  LODWORD(v34) = 1;
LABEL_101:
  CurrentThread->WaitReason = 0;
  v48 = KeGetCurrentPrcb();
  if ( v48->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(v48, 1LL, 0LL);
  KiFastExitThreadWait(v48, CurrentThread, 1LL);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
    return v34;
  EtwTraceDequeueWork(CurrentThread, v47, (unsigned int)v34, v49);
  return v34;
}
