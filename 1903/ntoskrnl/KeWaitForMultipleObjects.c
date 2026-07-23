/*
 * XREFs of KeWaitForMultipleObjects @ 0x14007C530
 * Callers:
 *     MiWaitForFreePagesToZero @ 0x14007C090 (MiWaitForFreePagesToZero.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400A2514 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401049B0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140105330 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopSleepDeviceList @ 0x14015EA10 (PopSleepDeviceList.c)
 *     CcAsyncReadWorker @ 0x14018C320 (CcAsyncReadWorker.c)
 *     MiMappedPageWriter @ 0x14018C6A0 (MiMappedPageWriter.c)
 *     CcQueueLazyWriteScanThread @ 0x14018D280 (CcQueueLazyWriteScanThread.c)
 *     KeBalanceSetManager @ 0x14018D570 (KeBalanceSetManager.c)
 *     MiDereferenceSegmentThread @ 0x140191000 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x1401924B0 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x140193590 (MiStoreEvictThread.c)
 *     MiPartitionWorkingSetManager @ 0x1402C9C90 (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x1402CA1C8 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x1402CA464 (MiWaitForAsynchronousFlushes.c)
 *     PnprQuiesceWorker @ 0x1405AAA30 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1405ABCD4 (MiZeroAllPageFiles.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14060ACF0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
 *     CmpDoFileWrite @ 0x1406362EC (CmpDoFileWrite.c)
 *     PiUEventNotifyUserMode @ 0x14066BB20 (PiUEventNotifyUserMode.c)
 *     EtwpLogger @ 0x1406B76B0 (EtwpLogger.c)
 *     PfGenerateTrace @ 0x140744728 (PfGenerateTrace.c)
 *     PfTLoggingWorker @ 0x14075B710 (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 *     ExpWorkQueueManagerThread @ 0x140766FB0 (ExpWorkQueueManagerThread.c)
 *     PopThermalReadCounters @ 0x1408A8EA0 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x1408C9464 (PsShutdownSystem.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140901740 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiSelectNextThread @ 0x1400136A0 (KiSelectNextThread.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BD60 (KiSetVpThreadSpinLockCount.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KeAbPreWait @ 0x14009CBA0 (KeAbPreWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiWaitForAllObjects @ 0x14011AAE0 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyMutant @ 0x14011B4D8 (KiWaitSatisfyMutant.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1401C3B00 (KeBugCheck.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     __report_rangecheckfailure @ 0x14027BD8C (__report_rangecheckfailure.c)
 *     KiSatisfyThreadWait @ 0x1402B1ECC (KiSatisfyThreadWait.c)
 */

NTSTATUS __stdcall KeWaitForMultipleObjects(
        ULONG Count,
        PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  PKWAIT_BLOCK WaitBlock; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 WaitIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 *v14; // r15
  ULONG v15; // r13d
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  char *v19; // rsi
  PVOID *__attribute__((__org_arrdim(0,0))) v20; // r10
  unsigned __int64 v21; // r8
  ULONG v22; // r14d
  struct _KPRCB *v23; // r11
  volatile signed __int32 *v24; // rdi
  PVOID *v25; // rdx
  __int64 v26; // r9
  int v27; // ecx
  unsigned __int64 v28; // rax
  unsigned int v29; // esi
  unsigned __int64 v30; // rdi
  volatile __int64 WaitStatus; // r12
  unsigned int v32; // r8d
  unsigned __int64 v33; // rdx
  unsigned int v34; // edx
  unsigned __int8 v35; // dl
  struct _KPRCB *v36; // rsi
  _DWORD *v37; // rcx
  __int64 v38; // r13
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  ULONG_PTR AbWaitObject; // rcx
  __int64 *v42; // rdi
  volatile signed __int32 *v43; // rsi
  __int64 v44; // rax
  __int64 **v45; // rcx
  unsigned __int8 v46; // di
  _KWAIT_STATUS_REGISTER v47; // al
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v50; // rcx
  struct _KPRCB *v51; // rdi
  _DWORD *v52; // rcx
  struct _KPRCB *v53; // rsi
  _DWORD *v54; // rcx
  __int64 v55; // rbx
  unsigned __int8 v56; // cl
  _DWORD *v57; // rcx
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  _DWORD *v60; // rcx
  __int64 v61; // rdx
  struct _KPRCB *v62; // rbx
  __int64 v63; // rdi
  struct _KPRCB *v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // r8
  __int64 v67; // r8
  struct _KPRCB *v68; // rsi
  _DWORD *v69; // rcx
  _DWORD *v70; // rcx
  _DWORD *v71; // rcx
  int v72; // eax
  int v73; // eax
  _DWORD *v74; // rcx
  _DWORD *v75; // rcx
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  struct _KPRCB *v80; // rcx
  unsigned __int64 v81; // rax
  char v82; // r14
  PRTL_BALANCED_NODE v83; // rax
  PRTL_BALANCED_NODE v84; // r12
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // r9
  unsigned __int64 v88; // rsi
  char *v89; // rdi
  unsigned __int64 v90; // rax
  __int64 v91; // r14
  __int64 v92; // rax
  int v93; // esi
  NTSTATUS v94; // r14d
  int v95; // eax
  _KTHREAD *NextThread; // rsi
  __int64 v97; // r8
  struct _KPRCB *v98; // rcx
  struct _KPRCB *v99; // rcx
  int v100; // eax
  _DWORD *v101; // rcx
  int v102; // eax
  _DWORD *v103; // rcx
  int v104; // eax
  struct _KPRCB *v105; // rdi
  _DWORD *v106; // rcx
  int v107; // eax
  _DWORD *v108; // rcx
  int v109; // eax
  _DWORD *v110; // rcx
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  PRTL_BALANCED_NODE v119; // rax
  struct _KPRCB *v120; // rbx
  _DWORD *v121; // rcx
  int v122; // eax
  _DWORD *v123; // rcx
  int v124; // eax
  _DWORD *v125; // rcx
  int v126; // eax
  struct _KPRCB *v127; // rcx
  _DWORD *v128; // rdx
  int v129; // eax
  __int64 v130; // rax
  __int64 v131; // rbx
  struct _KPRCB *v132; // rsi
  _DWORD *v133; // rcx
  int v134; // eax
  _DWORD *v135; // rcx
  int v136; // eax
  _DWORD *v137; // rcx
  int v138; // eax
  __int64 v139; // rsi
  __int64 v140; // r8
  bool v141; // zf
  struct _KPRCB *v142; // rcx
  struct _KPRCB *v143; // rcx
  struct _KPRCB *v144; // rcx
  struct _KPRCB *v145; // rsi
  struct _KPRCB *v146; // rcx
  struct _KPRCB *v147; // rcx
  unsigned __int8 v148; // [rsp+40h] [rbp-89h]
  int v149; // [rsp+44h] [rbp-85h]
  struct _KPRCB *v150; // [rsp+48h] [rbp-81h]
  int v151; // [rsp+48h] [rbp-81h]
  unsigned __int64 v152; // [rsp+50h] [rbp-79h]
  __int64 v153; // [rsp+50h] [rbp-79h]
  __int64 v154; // [rsp+50h] [rbp-79h]
  __int64 v155; // [rsp+50h] [rbp-79h]
  int v157; // [rsp+60h] [rbp-69h] BYREF
  ULONG v158; // [rsp+64h] [rbp-65h]
  KWAIT_REASON v159; // [rsp+68h] [rbp-61h]
  int v160; // [rsp+6Ch] [rbp-5Dh] BYREF
  int v161; // [rsp+70h] [rbp-59h] BYREF
  int v162; // [rsp+74h] [rbp-55h] BYREF
  int v163; // [rsp+78h] [rbp-51h] BYREF
  int v164; // [rsp+7Ch] [rbp-4Dh] BYREF
  int v165; // [rsp+80h] [rbp-49h] BYREF
  int v166; // [rsp+84h] [rbp-45h] BYREF
  int v167; // [rsp+88h] [rbp-41h] BYREF
  int v168; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v169; // [rsp+90h] [rbp-39h] BYREF
  PKWAIT_BLOCK v170; // [rsp+98h] [rbp-31h]
  LONGLONG QuadPart; // [rsp+A0h] [rbp-29h]
  _QWORD *v172; // [rsp+A8h] [rbp-21h] BYREF
  int v173; // [rsp+B0h] [rbp-19h]
  int v174; // [rsp+B4h] [rbp-15h]
  int v175; // [rsp+B8h] [rbp-11h]
  _BYTE v176[12]; // [rsp+BCh] [rbp-Dh]

  WaitBlock = WaitBlockArray;
  v159 = WaitReason;
  v170 = WaitBlockArray;
  v158 = Count;
  if ( Count == 1 )
    return KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  if ( WaitBlockArray )
  {
    if ( Count <= 0x40 )
      goto LABEL_4;
LABEL_170:
    KeBugCheck(0xCu);
  }
  if ( Count > 3 )
    goto LABEL_170;
  WaitBlock = CurrentThread->WaitBlock;
  v170 = CurrentThread->WaitBlock;
LABEL_4:
  if ( WaitType == WaitAll )
    return KiWaitForAllObjects(
             Count,
             (_DWORD)Object,
             WaitReason,
             (unsigned __int8)WaitMode,
             Alertable,
             (__int64)Timeout,
             (__int64)WaitBlock);
  v148 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v148 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v149 = 1;
    }
    else
    {
      v149 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v149 = 0;
  }
LABEL_10:
  WaitIrql = CurrentThread->WaitIrql;
  while ( 1 )
  {
    CurrentThread->MiscFlags &= ~0x10u;
    CurrentThread->WaitRegister.Flags = 0;
    CurrentThread->WaitMode = WaitMode;
    if ( Alertable )
      CurrentThread->MiscFlags |= 0x10u;
    CurrentPrcb = KeGetCurrentPrcb();
    v157 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v77 = SchedulerAssist[5];
        SchedulerAssist[5] = v77 + 1;
        if ( v77 == -1 )
LABEL_176:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v57 = CurrentPrcb->SchedulerAssist;
      if ( v57 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v78 = v57[5] - 1;
          v57[5] = v78;
          if ( !v78 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v157);
      while ( CurrentThread->ThreadLock );
      v58 = CurrentPrcb->SchedulerAssist;
      if ( v58 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v79 = v58[5];
          v58[5] = v79 + 1;
          if ( v79 == -1 )
            goto LABEL_176;
        }
      }
    }
    if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
      break;
    KiReleaseThreadLockSafe(CurrentThread);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v80 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v80->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v80);
    }
    __writecr8(1uLL);
    KiDeliverApc(0, 0, 0LL);
    v56 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v56 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = 0;
  }
  v14 = (__int64 *)v170;
  v15 = v158;
  if ( !Alertable )
  {
    if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
      goto LABEL_123;
    goto LABEL_18;
  }
  if ( !CurrentThread->Alerted[WaitMode] )
  {
    if ( WaitMode && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
    {
      CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_123:
      v94 = 192;
      goto LABEL_124;
    }
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      v94 = 257;
      goto LABEL_124;
    }
LABEL_18:
    v16 = v159;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v16;
    CurrentThread->ThreadLock = 0LL;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v76 = v18[5] - 1;
        v18[5] = v76;
        if ( !v76 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    v19 = (char *)v14 + 17;
    v20 = Object;
    v21 = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v22 = 0;
    v23 = KeGetCurrentPrcb();
    v150 = v23;
    v152 = 0LL;
    while ( 1 )
    {
      v160 = 0;
      v24 = (volatile signed __int32 *)v20[v22];
      *(v19 - 1) = 1;
      *v19 = 4;
      *(_WORD *)(v19 + 1) = v22;
      *(_QWORD *)(v19 + 7) = CurrentThread;
      *(_QWORD *)(v19 + 15) = v24;
      if ( _interlockedbittestandset(v24, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v160);
          while ( (*v24 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset(v24, 7u) );
        v20 = Object;
        v21 = v152;
        v23 = v150;
      }
      if ( (*(_BYTE *)v24 & 0x7F) == 2 )
      {
        if ( (v24[12] & 2) != 0 )
        {
          _bittestandset64((__int64 *)&v21, v22);
          v152 = v21;
        }
        if ( *((int *)v24 + 1) > 0
          || CurrentThread == *((struct _KTHREAD **)v24 + 5) && *((_BYTE *)v24 + 2) == v23->DpcRoutineActive )
        {
          if ( *((_DWORD *)v24 + 1) == 0x80000000 )
          {
            _InterlockedAnd(v24, 0xFFFFFF7F);
            v105 = KeGetCurrentPrcb();
            v163 = 0;
            v106 = v105->SchedulerAssist;
            if ( !v106 )
              goto LABEL_238;
            if ( v105->NestingLevel > 1u )
              goto LABEL_238;
            v107 = v106[5];
            v106[5] = v107 + 1;
            if ( v107 != -1 )
              goto LABEL_238;
            while ( 1 )
            {
              KiRemoveSystemWorkPriorityKick(v105);
              while ( 1 )
              {
LABEL_238:
                if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                {
                  KiSatisfyThreadWait((_DWORD)v150, (_DWORD)CurrentThread, v148, (_DWORD)v14, v22);
                  RtlRaiseStatus(-1073741423);
                }
                v108 = v105->SchedulerAssist;
                if ( v108 )
                {
                  if ( v105->NestingLevel <= 1u )
                  {
                    v109 = v108[5] - 1;
                    v108[5] = v109;
                    if ( !v109 )
                      KiRemoveSystemWorkPriorityKick(v105);
                  }
                }
                do
                  KeYieldProcessorEx(&v163);
                while ( CurrentThread->ThreadLock );
                v110 = v105->SchedulerAssist;
                if ( v110 )
                {
                  if ( v105->NestingLevel <= 1u )
                  {
                    v111 = v110[5];
                    v110[5] = v111 + 1;
                    if ( v111 == -1 )
                      break;
                  }
                }
              }
            }
          }
          v53 = KeGetCurrentPrcb();
          v162 = 0;
          v54 = v53->SchedulerAssist;
          if ( v54 )
          {
            if ( v53->NestingLevel <= 1u )
            {
              v100 = v54[5];
              v54[5] = v100 + 1;
              if ( v100 == -1 )
LABEL_224:
                KiRemoveSystemWorkPriorityKick(v53);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v101 = v53->SchedulerAssist;
            if ( v101 )
            {
              if ( v53->NestingLevel <= 1u )
              {
                v102 = v101[5] - 1;
                v101[5] = v102;
                if ( !v102 )
                  KiRemoveSystemWorkPriorityKick(v53);
              }
            }
            do
              KeYieldProcessorEx(&v162);
            while ( CurrentThread->ThreadLock );
            v103 = v53->SchedulerAssist;
            if ( v103 )
            {
              if ( v53->NestingLevel <= 1u )
              {
                v104 = v103[5];
                v103[5] = v104 + 1;
                if ( v104 == -1 )
                  goto LABEL_224;
              }
            }
          }
          v38 = (__int64)v150;
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          {
            CurrentThread->WaitStatus = v22;
            v141 = (*((_DWORD *)v24 + 1))-- == 1;
            if ( v141 )
              KiWaitSatisfyMutant(v24, CurrentThread, v150);
          }
          _InterlockedAnd(v24, 0xFFFFFF7F);
LABEL_42:
          CurrentThread->WaitBlockFill6[68] = 2;
          CurrentThread->ThreadLock = 0LL;
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          if ( v40 )
          {
            if ( v39->NestingLevel <= 1u )
            {
              v118 = v40[5] - 1;
              v40[5] = v118;
              if ( !v118 )
                KiRemoveSystemWorkPriorityKick(v39);
            }
          }
          WaitStatus = CurrentThread->WaitStatus;
          AbWaitObject = (ULONG_PTR)CurrentThread->AbWaitObject;
          if ( AbWaitObject )
          {
            CurrentThread->AbWaitObject = 0LL;
            v119 = KeAbPreAcquire(AbWaitObject, 0LL, 1);
            if ( v119 )
              BYTE2(v119[1].Left) |= 1u;
          }
          if ( v22 )
          {
            v42 = &v14[6 * (unsigned __int8)v22];
            do
            {
              if ( *((_BYTE *)v14 + 17) < 5u )
              {
                v43 = (volatile signed __int32 *)v14[4];
                KiAcquireKobjectLockSafe(v43);
                if ( *((_BYTE *)v14 + 17) == 4 )
                {
                  v44 = *v14;
                  v45 = (__int64 **)v14[1];
                  if ( *(__int64 **)(*v14 + 8) != v14 || *v45 != v14 )
                    goto LABEL_49;
                  *v45 = (__int64 *)v44;
                  *(_QWORD *)(v44 + 8) = v45;
                }
                _InterlockedAnd(v43, 0xFFFFFF7F);
              }
              v14 += 6;
            }
            while ( v14 != v42 );
          }
          v46 = CurrentThread->WaitIrql;
          v47.Flags = (unsigned __int8)CurrentThread->WaitRegister;
          v172 = 0LL;
          if ( (v47.Flags & 0x38) == 0 )
          {
            if ( !v148 )
            {
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v46 < 2u )
                goto LABEL_357;
              goto LABEL_57;
            }
            if ( v46 < 2u )
            {
              v131 = *(_QWORD *)(v38 + 8);
              if ( *(_QWORD *)(v38 + 16) )
              {
                KiAbProcessContextSwitch(*(_QWORD *)(v38 + 8), 0);
                v145 = KeGetCurrentPrcb();
                v169 = 0;
                while ( 1 )
                {
                  KiSetVpThreadSpinLockCount((__int64)v145, 1);
                  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v38 + 48), 0LL) )
                    break;
                  KiSetVpThreadSpinLockCount((__int64)v145, 0);
                  do
                    KeYieldProcessorEx(&v169);
                  while ( *(_QWORD *)(v38 + 48) );
                }
                v139 = *(_QWORD *)(v38 + 16);
                *(_QWORD *)(v38 + 16) = 0LL;
                _disable();
                KiEndThreadCycleAccumulation(v38, v131, 0LL);
                _enable();
                *(_QWORD *)(v38 + 8) = v139;
                if ( *(_BYTE *)(v139 + 388) == 1 )
                  goto LABEL_341;
                goto LABEL_342;
              }
              if ( (*(_DWORD *)(v131 + 116) & 0x40) != 0 )
              {
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
                {
LABEL_352:
                  v146 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v146->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v146);
                }
LABEL_353:
                __writecr8(1uLL);
                *(_DWORD *)(v131 + 116) &= ~0x40u;
                KiDeliverApc(0, 0, 0LL);
              }
              goto LABEL_354;
            }
            if ( !*(_QWORD *)(v38 + 16) || *(_BYTE *)(v38 + 11882) )
              return WaitStatus;
            goto LABEL_360;
          }
          if ( (v47.Flags & 0x18) != 0 )
          {
            if ( (v47.Flags & 8) != 0 )
              _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
            v120 = KeGetCurrentPrcb();
            v166 = 0;
            v121 = v120->SchedulerAssist;
            if ( v121 )
            {
              if ( v120->NestingLevel <= 1u )
              {
                v122 = v121[5];
                v121[5] = v122 + 1;
                if ( v122 == -1 )
LABEL_279:
                  KiRemoveSystemWorkPriorityKick(v120);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 48), 0LL) )
            {
              v123 = v120->SchedulerAssist;
              if ( v123 )
              {
                if ( v120->NestingLevel <= 1u )
                {
                  v124 = v123[5] - 1;
                  v123[5] = v124;
                  if ( !v124 )
                    KiRemoveSystemWorkPriorityKick(v120);
                }
              }
              do
                KeYieldProcessorEx(&v166);
              while ( *(_QWORD *)(v38 + 48) );
              v125 = v120->SchedulerAssist;
              if ( v125 )
              {
                if ( v120->NestingLevel <= 1u )
                {
                  v126 = v125[5];
                  v125[5] = v126 + 1;
                  if ( v126 == -1 )
                    goto LABEL_279;
                }
              }
            }
            if ( !*(_QWORD *)(v38 + 16) )
              KiSelectNextThread(v38, (__int64 *)&v172);
            _InterlockedAnd64((volatile signed __int64 *)(v38 + 48), 0LL);
            v127 = KeGetCurrentPrcb();
            v128 = v127->SchedulerAssist;
            if ( v128 )
            {
              if ( v127->NestingLevel <= 1u )
              {
                v129 = v128[5] - 1;
                v128[5] = v129;
                if ( !v129 )
                  KiRemoveSystemWorkPriorityKick(v127);
              }
            }
            KiReadyDeferredReadyList(v38, &v172);
            v130 = *(_QWORD *)(v38 + 16);
            if ( v46 < 2u )
            {
              v131 = *(_QWORD *)(v38 + 8);
              if ( v130 )
              {
                KiAbProcessContextSwitch(*(_QWORD *)(v38 + 8), 0);
                v132 = KeGetCurrentPrcb();
                v167 = 0;
                v133 = v132->SchedulerAssist;
                if ( v133 )
                {
                  if ( v132->NestingLevel <= 1u )
                  {
                    v134 = v133[5];
                    v133[5] = v134 + 1;
                    if ( v134 == -1 )
LABEL_301:
                      KiRemoveSystemWorkPriorityKick(v132);
                  }
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 48), 0LL) )
                {
                  v135 = v132->SchedulerAssist;
                  if ( v135 )
                  {
                    if ( v132->NestingLevel <= 1u )
                    {
                      v136 = v135[5] - 1;
                      v135[5] = v136;
                      if ( !v136 )
                        KiRemoveSystemWorkPriorityKick(v132);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v167);
                  while ( *(_QWORD *)(v38 + 48) );
                  v137 = v132->SchedulerAssist;
                  if ( v137 )
                  {
                    if ( v132->NestingLevel <= 1u )
                    {
                      v138 = v137[5];
                      v137[5] = v138 + 1;
                      if ( v138 == -1 )
                        goto LABEL_301;
                    }
                  }
                }
                v139 = *(_QWORD *)(v38 + 16);
                *(_QWORD *)(v38 + 16) = 0LL;
                _disable();
                KiEndThreadCycleAccumulation(v38, v131, 0LL);
                _enable();
                *(_QWORD *)(v38 + 8) = v139;
                if ( *(_BYTE *)(v139 + 388) == 1 )
LABEL_341:
                  *(_DWORD *)(v139 + 132) = *(_DWORD *)(v139 + 132)
                                          - *(_DWORD *)(v139 + 436)
                                          + MEMORY[0xFFFFF78000000320];
LABEL_342:
                *(_BYTE *)(v139 + 388) = 2;
                *(_BYTE *)(v131 + 643) = 32;
                *(_BYTE *)(v131 + 390) = v46;
                KiQueueReadyThread(v38, v131, v140);
                v141 = (unsigned __int8)KiSwapContext(v131, v139, v46) == 0;
              }
              else
              {
                v141 = (*(_DWORD *)(v131 + 116) & 0x40) == 0;
              }
              if ( !v141 )
              {
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
                  goto LABEL_352;
                goto LABEL_353;
              }
LABEL_354:
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
              {
LABEL_357:
                v147 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v147->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v147);
              }
LABEL_57:
              __writecr8(v46);
              return WaitStatus;
            }
            if ( !v130 || *(_BYTE *)(v38 + 11882) )
              return WaitStatus;
LABEL_360:
            LOBYTE(v40) = 2;
            KiRequestSoftwareInterrupt(v38, v40);
            return WaitStatus;
          }
          v55 = *(_QWORD *)(v38 + 8);
          if ( *(_QWORD *)(v38 + 16) )
          {
            KiAbProcessContextSwitch(*(_QWORD *)(v38 + 8), 0);
            v64 = KeGetCurrentPrcb();
            v168 = 0;
            while ( 1 )
            {
              KiSetVpThreadSpinLockCount((__int64)v64, 1);
              if ( !_interlockedbittestandset64((volatile signed __int32 *)(v38 + 48), 0LL) )
                break;
              KiSetVpThreadSpinLockCount((__int64)v64, 0);
              do
                KeYieldProcessorEx(&v168);
              while ( *(_QWORD *)(v38 + 48) );
            }
            v65 = *(_QWORD *)(v38 + 16);
            *(_QWORD *)(v38 + 16) = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(v38, v55, 0LL);
            _enable();
            *(_QWORD *)(v38 + 8) = v65;
            if ( *(_BYTE *)(v65 + 388) == 1 )
              *(_DWORD *)(v65 + 132) = *(_DWORD *)(v65 + 132) - *(_DWORD *)(v65 + 436) + MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(v65 + 388) = 2;
            *(_BYTE *)(v55 + 643) = 32;
            *(_BYTE *)(v55 + 390) = 1;
            KiQueueReadyThread(v38, v55, v66);
            LOBYTE(v67) = 1;
            if ( !(unsigned __int8)KiSwapContext(v55, v65, v67) )
              goto LABEL_99;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
              goto LABEL_320;
          }
          else
          {
            if ( (*(_DWORD *)(v55 + 116) & 0x40) == 0 )
              goto LABEL_99;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            {
LABEL_320:
              v142 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v142->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v142);
            }
          }
          __writecr8(1uLL);
          *(_DWORD *)(v55 + 116) &= ~0x40u;
          KiDeliverApc(0, 0, 0LL);
LABEL_99:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v143 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v143->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v143);
          }
          __writecr8(1uLL);
          KiDeliverApc(0, 0, 0LL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v144 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v144->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v144);
          }
          __writecr8(0LL);
          return WaitStatus;
        }
      }
      else if ( *((int *)v24 + 1) > 0 )
      {
        v36 = KeGetCurrentPrcb();
        v165 = 0;
        v37 = v36->SchedulerAssist;
        if ( v37 )
        {
          if ( v36->NestingLevel <= 1u )
          {
            v115 = v37[5];
            v37[5] = v115 + 1;
            if ( v115 == -1 )
LABEL_261:
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v59 = v36->SchedulerAssist;
          if ( v59 )
          {
            if ( v36->NestingLevel <= 1u )
            {
              v116 = v59[5] - 1;
              v59[5] = v116;
              if ( !v116 )
                KiRemoveSystemWorkPriorityKick(v36);
            }
          }
          do
            KeYieldProcessorEx(&v165);
          while ( CurrentThread->ThreadLock );
          v60 = v36->SchedulerAssist;
          if ( v60 )
          {
            if ( v36->NestingLevel <= 1u )
            {
              v117 = v60[5];
              v60[5] = v117 + 1;
              if ( v117 == -1 )
                goto LABEL_261;
            }
          }
        }
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v22;
          CurrentThread->AbWaitObject = 0LL;
          if ( (*(_BYTE *)v24 & 7) == 1 )
          {
            *((_DWORD *)v24 + 1) = 0;
          }
          else if ( (*(_BYTE *)v24 & 0x7F) == 5 )
          {
            --*((_DWORD *)v24 + 1);
          }
        }
        _InterlockedAnd(v24, 0xFFFFFF7F);
        v38 = (__int64)v150;
        goto LABEL_42;
      }
      v25 = (PVOID *)*((_QWORD *)v24 + 2);
      if ( *v25 != v24 + 2 )
LABEL_49:
        __fastfail(3u);
      *(_QWORD *)(v19 - 9) = v25;
      *(_QWORD *)(v19 - 17) = v24 + 2;
      *v25 = v19 - 17;
      *((_QWORD *)v24 + 2) = v19 - 17;
      _InterlockedAnd(v24, 0xFFFFFF7F);
      ++v22;
      v19 += 48;
      if ( v22 >= v15 )
      {
        v26 = QuadPart;
        v27 = v149;
        v28 = QuadPart;
        if ( v149 == 2 )
        {
          ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
          v50 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
          v28 = QuadPart;
          if ( CurrentThread->WaitMode
            && !CurrentThread->WaitBlock[3].SpareLong
            && !CurrentThread->WaitIrql
            && !CurrentThread->ApcState.InProgressFlags
            && (_DWORD)ThreadTimerDelay )
          {
            v28 = QuadPart + ThreadTimerDelay;
          }
        }
        else
        {
          if ( !v149 )
            goto LABEL_27;
          if ( !QuadPart )
          {
LABEL_81:
            v51 = KeGetCurrentPrcb();
            v164 = 0;
            v52 = v51->SchedulerAssist;
            if ( v52 )
            {
              if ( v51->NestingLevel <= 1u )
              {
                v112 = v52[5];
                v52[5] = v112 + 1;
                if ( v112 == -1 )
LABEL_251:
                  KiRemoveSystemWorkPriorityKick(v51);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              v74 = v51->SchedulerAssist;
              if ( v74 )
              {
                if ( v51->NestingLevel <= 1u )
                {
                  v113 = v74[5] - 1;
                  v74[5] = v113;
                  if ( !v113 )
                    KiRemoveSystemWorkPriorityKick(v51);
                }
              }
              do
                KeYieldProcessorEx(&v164);
              while ( CurrentThread->ThreadLock );
              v75 = v51->SchedulerAssist;
              if ( v75 )
              {
                if ( v51->NestingLevel <= 1u )
                {
                  v114 = v75[5];
                  v75[5] = v114 + 1;
                  if ( v114 == -1 )
                    goto LABEL_251;
                }
              }
            }
            v38 = (__int64)v150;
            if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
            {
              CurrentThread->WaitStatus = 258LL;
              CurrentThread->AbWaitObject = 0LL;
            }
            goto LABEL_42;
          }
          v50 = MEMORY[0xFFFFF78000000014];
        }
        if ( v50 > v28 )
          goto LABEL_81;
        v27 = v149;
LABEL_27:
        CurrentThread->WaitBlockCount = v15;
        v29 = 0;
        v30 = 0LL;
        if ( v21 )
        {
          do
          {
            _BitScanForward64(&v81, v21);
            v82 = v81;
            v173 = v81;
            v153 = v21 & ~(1LL << v81);
            v83 = KeAbPreAcquire((ULONG_PTR)v20[v81], 0LL, 0);
            v84 = v83;
            if ( !v83 )
              break;
            v30 |= 1LL << v82;
            KeAbPreWait(v83);
            v21 = v153;
            v20 = Object;
            v85 = 16 * (LOBYTE(v84[1].Children[0]) - 50LL);
            v86 = v29++;
            v176[v86] = (2
                       * (((((unsigned __int128)(v85 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) & 0x8000000000000000uLL) != 0LL)
                        + ((__int64)((unsigned __int128)(v85 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4))) | 1;
          }
          while ( v153 );
          v14 = (__int64 *)v170;
          v26 = QuadPart;
          v27 = v149;
        }
        v151 = KiCommitThreadWait((__int64)CurrentThread, v14, v27, v26);
        LODWORD(WaitStatus) = v151;
        if ( (v151 & 0xFFFFFF7F) <= 0x3F )
        {
          v32 = 0;
          v33 = v30;
          if ( v30 )
          {
            while ( 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v87, v33);
              v33 &= ~(1LL << v87);
              v174 = v87;
              if ( (v151 & 0xFFFFFF7F) == (_DWORD)v87 )
                break;
              ++v32;
              if ( !v33 )
                goto LABEL_30;
            }
            v88 = v32;
            v154 = v30 & ~(1LL << v87);
            v89 = (char *)KeGetCurrentThread() + 96 * (v176[v32] >> 1);
            KeAbPreAcquire((ULONG_PTR)Object[v87], (PRTL_BALANCED_NODE)(v89 + 800), 1);
            v89[826] |= 1u;
            if ( v88 >= 6 )
              _report_rangecheckfailure();
            v30 = v154;
            v176[v88] = 0;
          }
LABEL_30:
          CurrentThread->AbWaitObject = 0LL;
        }
        v34 = 0;
        if ( v30 )
        {
          do
          {
            _BitScanForward64(&v90, v30);
            v91 = (unsigned int)v90;
            v175 = v90;
            v155 = v30 & ~(1LL << v90);
            v92 = v34 + 1;
            if ( v176[v34] )
              v92 = v34;
            v93 = v92;
            KeAbPreAcquire((ULONG_PTR)Object[v91], &KeGetCurrentThread()->LockEntries[v176[v92] >> 1].TreeNode, 0);
            KeAbPostReleaseEx((ULONG_PTR)Object[v91]);
            v30 = v155;
            v34 = v93 + 1;
          }
          while ( v155 );
          LODWORD(WaitStatus) = v151;
        }
        if ( (_DWORD)WaitStatus == 256 )
        {
          v148 = 0;
          v35 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v35 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          CurrentThread->WaitIrql = v35;
          goto LABEL_10;
        }
        return WaitStatus;
      }
    }
  }
  CurrentThread->Alerted[WaitMode] = 0;
  v94 = 257;
LABEL_124:
  KiReleaseThreadLockSafe(CurrentThread);
  v62 = KeGetCurrentPrcb();
  if ( WaitIrql >= 2u )
  {
    if ( v62->NextThread && !v62->DpcRoutineActive )
    {
      LOBYTE(v61) = 2;
      KiRequestSoftwareInterrupt(v62, v61);
    }
    return v94;
  }
  v63 = (__int64)v62->CurrentThread;
  if ( v62->NextThread )
  {
    KiAbProcessContextSwitch((__int64)v62->CurrentThread, 0);
    v68 = KeGetCurrentPrcb();
    v161 = 0;
    v69 = v68->SchedulerAssist;
    if ( v69 )
    {
      if ( v68->NestingLevel <= 1u )
      {
        v95 = v69[5];
        v69[5] = v95 + 1;
        if ( v95 == -1 )
LABEL_155:
          KiRemoveSystemWorkPriorityKick(v68);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v62->PrcbLock, 0LL) )
    {
      v70 = v68->SchedulerAssist;
      if ( v70 )
      {
        if ( v68->NestingLevel <= 1u )
        {
          v73 = v70[5] - 1;
          v70[5] = v73;
          if ( !v73 )
            KiRemoveSystemWorkPriorityKick(v68);
        }
      }
      do
        KeYieldProcessorEx(&v161);
      while ( v62->PrcbLock );
      v71 = v68->SchedulerAssist;
      if ( v71 )
      {
        if ( v68->NestingLevel <= 1u )
        {
          v72 = v71[5];
          v71[5] = v72 + 1;
          if ( v72 == -1 )
            goto LABEL_155;
        }
      }
    }
    NextThread = v62->NextThread;
    v62->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)v62, v63, 0LL);
    _enable();
    v62->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
    {
      v97 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v97 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v63 + 643) = 32;
    *(_BYTE *)(v63 + 390) = WaitIrql;
    KiQueueReadyThread((__int64)v62, v63, v97);
    if ( !(unsigned __int8)KiSwapContext(v63, NextThread, WaitIrql) )
      goto LABEL_127;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      goto LABEL_169;
    goto LABEL_218;
  }
  if ( (*(_DWORD *)(v63 + 116) & 0x40) == 0 )
    goto LABEL_127;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
LABEL_218:
    v98 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v98->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v98);
  }
LABEL_169:
  __writecr8(1uLL);
  *(_DWORD *)(v63 + 116) &= ~0x40u;
  KiDeliverApc(0, 0, 0LL);
LABEL_127:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    v99 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v99->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v99);
  }
  __writecr8(WaitIrql);
  return v94;
}
