/*
 * XREFs of KeWaitForMultipleObjects @ 0x140053760
 * Callers:
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400E045C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011D770 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E350 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcAsyncReadWorker @ 0x1401404B0 (CcAsyncReadWorker.c)
 *     MiMappedPageWriter @ 0x1401808E0 (MiMappedPageWriter.c)
 *     CcQueueLazyWriteScanThread @ 0x140183980 (CcQueueLazyWriteScanThread.c)
 *     KeBalanceSetManager @ 0x140183C10 (KeBalanceSetManager.c)
 *     MiDereferenceSegmentThread @ 0x1401876E0 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x140188880 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x14018A500 (MiStoreEvictThread.c)
 *     MiPartitionWorkingSetManager @ 0x1402B4790 (MiPartitionWorkingSetManager.c)
 *     MiIssueAsynchronousFlush @ 0x1402B4CC8 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x1402B4F64 (MiWaitForAsynchronousFlushes.c)
 *     PopSleepDeviceList @ 0x140569AB8 (PopSleepDeviceList.c)
 *     PnprQuiesceWorker @ 0x14057BBC0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x14057CD54 (MiZeroAllPageFiles.c)
 *     ObWaitForMultipleObjects @ 0x14058B3E0 (ObWaitForMultipleObjects.c)
 *     PiUEventNotifyUserMode @ 0x14058FF60 (PiUEventNotifyUserMode.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1405A2E10 (FsRtlCancellableWaitForMultipleObjects.c)
 *     CmpDoFileWrite @ 0x1405B4A60 (CmpDoFileWrite.c)
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 *     PfGenerateTrace @ 0x14071D064 (PfGenerateTrace.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     PfTLoggingWorker @ 0x140740B20 (PfTLoggingWorker.c)
 *     ExpWorkQueueManagerThread @ 0x140741C90 (ExpWorkQueueManagerThread.c)
 *     PopThermalReadCounters @ 0x14086D790 (PopThermalReadCounters.c)
 *     PsShutdownSystem @ 0x14088C204 (PsShutdownSystem.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408C57B0 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400BC720 (KiSetVpThreadSpinLockCount.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiSelectNextThread @ 0x1400D71E8 (KiSelectNextThread.c)
 *     KiWaitSatisfyMutant @ 0x1400F9CE4 (KiWaitSatisfyMutant.c)
 *     KiWaitForAllObjects @ 0x1400FA4A8 (KiWaitForAllObjects.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     KiAcquirePrcbLock @ 0x14028F350 (KiAcquirePrcbLock.c)
 *     KiSatisfyThreadWait @ 0x14029AE58 (KiSatisfyThreadWait.c)
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
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rdi
  PKWAIT_BLOCK WaitBlock; // r13
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 WaitIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  struct _KPRCB *v18; // rcx
  unsigned __int8 v19; // cl
  struct _KWAIT_BLOCK *v20; // r13
  NTSTATUS v21; // esi
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  int v24; // eax
  volatile UCHAR *p_BlockState; // rsi
  ULONG v26; // r12d
  struct _KPRCB *v27; // r14
  char *v28; // rbx
  int v29; // ecx
  struct _KPRCB *v30; // rsi
  _DWORD *v31; // rcx
  int v32; // eax
  _DWORD *v33; // rcx
  int v34; // eax
  PVOID *v35; // rdx
  unsigned __int8 v36; // dl
  LONGLONG v37; // rbx
  unsigned __int64 v38; // rax
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v40; // rcx
  unsigned __int8 v41; // dl
  struct _KPRCB *v42; // rdi
  _KTHREAD *v43; // r14
  _KTHREAD *v44; // rbx
  struct _KPRCB *v45; // rcx
  struct _KPRCB *v46; // rcx
  struct _KPRCB *v47; // rcx
  unsigned __int64 v48; // r9
  struct _KPRCB *v49; // rcx
  _DWORD *v50; // rdx
  int v51; // eax
  volatile __int64 WaitStatus; // r15
  volatile signed __int32 *v53; // rbx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v56; // si
  _KWAIT_STATUS_REGISTER v57; // al
  struct _KPRCB *v58; // rbx
  _DWORD *v59; // rcx
  int v60; // eax
  _DWORD *v61; // rcx
  int v62; // eax
  struct _KPRCB *v63; // rbx
  _DWORD *v64; // rcx
  int v65; // eax
  _DWORD *v66; // rcx
  int v67; // eax
  struct _KPRCB *v68; // rbx
  _DWORD *v69; // rcx
  int v70; // eax
  _DWORD *v71; // rcx
  int v72; // eax
  struct _KPRCB *v73; // rsi
  _DWORD *v74; // rcx
  int v75; // eax
  _DWORD *v76; // rcx
  int v77; // eax
  struct _KPRCB *v78; // rcx
  _DWORD *v79; // rdx
  int v80; // eax
  _KTHREAD *NextThread; // rax
  _KTHREAD *v82; // rdi
  struct _KPRCB *v83; // rbx
  _DWORD *v84; // rcx
  int v85; // eax
  _DWORD *v86; // rcx
  int v87; // eax
  _KTHREAD *v88; // rbx
  bool v89; // zf
  struct _KPRCB *v90; // rcx
  bool v91; // zf
  _KTHREAD *v92; // rbx
  __int64 v93; // rdx
  struct _KPRCB *v94; // rdi
  _KTHREAD *v95; // rdi
  __int64 v96; // r8
  struct _KPRCB *v97; // rcx
  struct _KPRCB *v98; // rcx
  struct _KPRCB *v99; // rcx
  struct _KPRCB *v100; // rcx
  _KTHREAD *v101; // rbx
  __int64 v102; // rdx
  struct _KPRCB *v103; // rdi
  _KTHREAD *v104; // rdi
  bool v105; // zf
  struct _KPRCB *v106; // rcx
  struct _KPRCB *v107; // rcx
  unsigned __int8 v108; // [rsp+40h] [rbp-49h]
  unsigned int v109; // [rsp+44h] [rbp-45h]
  int v110; // [rsp+48h] [rbp-41h] BYREF
  int v111; // [rsp+4Ch] [rbp-3Dh] BYREF
  int v112; // [rsp+50h] [rbp-39h] BYREF
  int v113; // [rsp+54h] [rbp-35h] BYREF
  int v114; // [rsp+58h] [rbp-31h] BYREF
  int v115; // [rsp+5Ch] [rbp-2Dh] BYREF
  int v116; // [rsp+60h] [rbp-29h] BYREF
  int v117; // [rsp+64h] [rbp-25h] BYREF
  int v118; // [rsp+68h] [rbp-21h] BYREF
  int v119; // [rsp+6Ch] [rbp-1Dh] BYREF
  int v120; // [rsp+70h] [rbp-19h] BYREF
  LONGLONG QuadPart; // [rsp+78h] [rbp-11h]
  _QWORD v122[2]; // [rsp+80h] [rbp-9h] BYREF
  unsigned __int8 v125; // [rsp+E8h] [rbp+5Fh]

  v125 = WaitReason;
  if ( Count == 1 )
    return KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  WaitBlock = WaitBlockArray;
  if ( WaitBlockArray )
  {
    if ( Count > 0x40 )
LABEL_305:
      KeBugCheck(0xCu);
  }
  else
  {
    if ( Count > 3 )
      goto LABEL_305;
    WaitBlock = CurrentThread->WaitBlock;
    WaitBlockArray = CurrentThread->WaitBlock;
  }
  if ( WaitType == WaitAll )
    return KiWaitForAllObjects(
             Count,
             (_DWORD)Object,
             (_BYTE)WaitReason,
             (unsigned __int8)WaitMode,
             Alertable,
             (__int64)Timeout,
             (__int64)WaitBlock);
  v108 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v108 )
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
      v109 = 1;
    }
    else
    {
      v109 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v109 = 0;
  }
LABEL_21:
  WaitIrql = CurrentThread->WaitIrql;
  while ( 1 )
  {
    CurrentThread->MiscFlags &= ~0x10u;
    CurrentThread->WaitRegister.Flags = 0;
    CurrentThread->WaitMode = WaitMode;
    if ( Alertable )
      CurrentThread->MiscFlags |= 0x10u;
    CurrentPrcb = KeGetCurrentPrcb();
    v110 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = SchedulerAssist[5];
          SchedulerAssist[5] = v15 + 1;
          if ( v15 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      v16 = CurrentPrcb->SchedulerAssist;
      if ( v16 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v17 = v16[5] - 1;
          v16[5] = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v110);
      while ( CurrentThread->ThreadLock );
    }
    if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
      break;
    KiReleaseThreadLockSafe(CurrentThread);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v18);
    }
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
    v19 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentThread->WaitIrql = 0;
  }
  v20 = WaitBlockArray;
  if ( !Alertable )
  {
    if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
      goto LABEL_103;
LABEL_56:
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v125;
    CurrentThread->ThreadLock = 0LL;
    v22 = KeGetCurrentPrcb();
    v23 = v22->SchedulerAssist;
    if ( v23 )
    {
      if ( v22->NestingLevel <= 1u )
      {
        v24 = v23[5] - 1;
        v23[5] = v24;
        if ( !v24 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
    p_BlockState = &WaitBlockArray->BlockState;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v26 = 0;
    v27 = KeGetCurrentPrcb();
    while ( 1 )
    {
      v111 = 0;
      v28 = (char *)Object[v26];
      *((_BYTE *)p_BlockState - 1) = 1;
      *p_BlockState = 4;
      *(_WORD *)(p_BlockState + 1) = v26;
      *(_QWORD *)(p_BlockState + 7) = CurrentThread;
      *(_QWORD *)(p_BlockState + 15) = v28;
      while ( _interlockedbittestandset((volatile signed __int32 *)v28, 7u) )
      {
        do
          KeYieldProcessorEx(&v111);
        while ( (*(_DWORD *)v28 & 0x80u) != 0 );
      }
      v29 = *((_DWORD *)v28 + 1);
      if ( (*v28 & 0x7F) == 2 )
      {
        if ( v29 > 0 || CurrentThread == *((struct _KTHREAD **)v28 + 5) && v28[2] == v27->DpcRoutineActive )
        {
          if ( *((_DWORD *)v28 + 1) == 0x80000000 )
          {
            _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
            v63 = KeGetCurrentPrcb();
            v113 = 0;
            while ( 1 )
            {
              v64 = v63->SchedulerAssist;
              if ( v64 )
              {
                if ( v63->NestingLevel <= 1u )
                {
                  v65 = v64[5];
                  v64[5] = v65 + 1;
                  if ( v65 == -1 )
                    KiRemoveSystemWorkPriorityKick(v63);
                }
              }
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
              {
                KiSatisfyThreadWait((_DWORD)v27, (_DWORD)CurrentThread, v108, (_DWORD)WaitBlockArray, v26);
                RtlRaiseStatus(-1073741423);
              }
              v66 = v63->SchedulerAssist;
              if ( v66 )
              {
                if ( v63->NestingLevel <= 1u )
                {
                  v67 = v66[5] - 1;
                  v66[5] = v67;
                  if ( !v67 )
                    KiRemoveSystemWorkPriorityKick(v63);
                }
              }
              do
                KeYieldProcessorEx(&v113);
              while ( CurrentThread->ThreadLock );
            }
          }
          v30 = KeGetCurrentPrcb();
          v112 = 0;
          while ( 1 )
          {
            v31 = v30->SchedulerAssist;
            if ( v31 )
            {
              if ( v30->NestingLevel <= 1u )
              {
                v32 = v31[5];
                v31[5] = v32 + 1;
                if ( v32 == -1 )
                  KiRemoveSystemWorkPriorityKick(v30);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
              break;
            v33 = v30->SchedulerAssist;
            if ( v33 )
            {
              if ( v30->NestingLevel <= 1u )
              {
                v34 = v33[5] - 1;
                v33[5] = v34;
                if ( !v34 )
                  KiRemoveSystemWorkPriorityKick(v30);
              }
            }
            do
              KeYieldProcessorEx(&v112);
            while ( CurrentThread->ThreadLock );
          }
          if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          {
            CurrentThread->WaitStatus = v26;
            v89 = (*((_DWORD *)v28 + 1))-- == 1;
            if ( v89 )
              KiWaitSatisfyMutant(v28, CurrentThread, v27);
          }
LABEL_131:
          _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
          goto LABEL_132;
        }
      }
      else if ( v29 > 0 )
      {
        v73 = KeGetCurrentPrcb();
        v115 = 0;
        while ( 1 )
        {
          v74 = v73->SchedulerAssist;
          if ( v74 )
          {
            if ( v73->NestingLevel <= 1u )
            {
              v75 = v74[5];
              v74[5] = v75 + 1;
              if ( v75 == -1 )
                KiRemoveSystemWorkPriorityKick(v73);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            break;
          v76 = v73->SchedulerAssist;
          if ( v76 )
          {
            if ( v73->NestingLevel <= 1u )
            {
              v77 = v76[5] - 1;
              v76[5] = v77;
              if ( !v77 )
                KiRemoveSystemWorkPriorityKick(v73);
            }
          }
          do
            KeYieldProcessorEx(&v115);
          while ( CurrentThread->ThreadLock );
        }
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v26;
          if ( (*v28 & 7) == 1 )
          {
            *((_DWORD *)v28 + 1) = 0;
            _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
            goto LABEL_132;
          }
          if ( (*v28 & 0x7F) == 5 )
            --*((_DWORD *)v28 + 1);
        }
        goto LABEL_131;
      }
      v35 = (PVOID *)*((_QWORD *)v28 + 2);
      if ( *v35 != v28 + 8 )
LABEL_208:
        __fastfail(3u);
      *(_QWORD *)(p_BlockState - 9) = v35;
      *(_QWORD *)(p_BlockState - 17) = v28 + 8;
      *v35 = (PVOID)(p_BlockState - 17);
      *((_QWORD *)v28 + 2) = p_BlockState - 17;
      _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
      v36 = Count;
      ++v26;
      p_BlockState += 48;
      if ( v26 >= Count )
      {
        v37 = QuadPart;
        v38 = QuadPart;
        if ( v109 == 2 )
        {
          ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
          v40 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
          v38 = QuadPart;
          if ( CurrentThread->WaitMode
            && !CurrentThread->WaitBlock[3].SpareLong
            && !CurrentThread->WaitIrql
            && !CurrentThread->ApcState.InProgressFlags
            && (_DWORD)ThreadTimerDelay )
          {
            v38 = QuadPart + ThreadTimerDelay;
          }
          v36 = Count;
LABEL_95:
          if ( v40 > v38 )
            goto LABEL_176;
LABEL_96:
          CurrentThread->WaitBlockCount = v36;
          result = KiCommitThreadWait(CurrentThread, WaitBlockArray, v109, v37);
          if ( result != 256 )
            return result;
          v108 = 0;
          v41 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v41 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          CurrentThread->WaitIrql = v41;
          goto LABEL_21;
        }
        if ( !v109 )
          goto LABEL_96;
        if ( QuadPart )
        {
          v40 = MEMORY[0xFFFFF78000000014];
          goto LABEL_95;
        }
LABEL_176:
        v68 = KeGetCurrentPrcb();
        v114 = 0;
        while ( 1 )
        {
          v69 = v68->SchedulerAssist;
          if ( v69 )
          {
            if ( v68->NestingLevel <= 1u )
            {
              v70 = v69[5];
              v69[5] = v70 + 1;
              if ( v70 == -1 )
                KiRemoveSystemWorkPriorityKick(v68);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            break;
          v71 = v68->SchedulerAssist;
          if ( v71 )
          {
            if ( v68->NestingLevel <= 1u )
            {
              v72 = v71[5] - 1;
              v71[5] = v72;
              if ( !v72 )
                KiRemoveSystemWorkPriorityKick(v68);
            }
          }
          do
            KeYieldProcessorEx(&v114);
          while ( CurrentThread->ThreadLock );
        }
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
          CurrentThread->WaitStatus = 258LL;
LABEL_132:
        KiSetThreadState(CurrentThread, 2LL);
        CurrentThread->ThreadLock = v48;
        v49 = KeGetCurrentPrcb();
        v50 = v49->SchedulerAssist;
        if ( v50 )
        {
          if ( v49->NestingLevel <= 1u )
          {
            v51 = v50[5] - 1;
            v50[5] = v51;
            if ( !v51 )
            {
              KiRemoveSystemWorkPriorityKick(v49);
              v48 = 0LL;
            }
          }
        }
        WaitStatus = CurrentThread->WaitStatus;
        if ( v26 )
        {
          do
          {
            if ( v20->BlockState < 5u )
            {
              v53 = (volatile signed __int32 *)v20->Object;
              v116 = v48;
              if ( _interlockedbittestandset(v53, 7u) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v116);
                  while ( (*v53 & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset(v53, 7u) );
                v48 = 0LL;
              }
              if ( v20->BlockState == 4 )
              {
                Flink = v20->WaitListEntry.Flink;
                Blink = v20->WaitListEntry.Blink;
                if ( (struct _KWAIT_BLOCK *)v20->WaitListEntry.Flink->Blink != v20
                  || (struct _KWAIT_BLOCK *)Blink->Flink != v20 )
                {
                  goto LABEL_208;
                }
                Blink->Flink = Flink;
                Flink->Blink = Blink;
              }
              _InterlockedAnd(v53, 0xFFFFFF7F);
            }
            ++v20;
          }
          while ( v20 != &WaitBlockArray[(unsigned __int8)v26] );
        }
        v56 = CurrentThread->WaitIrql;
        v57.Flags = (unsigned __int8)CurrentThread->WaitRegister;
        if ( (v57.Flags & 0x38) != 0 )
        {
          if ( (v57.Flags & 0x18) != 0 )
          {
            if ( (v57.Flags & 8) != 0 )
              _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
            v58 = KeGetCurrentPrcb();
            v117 = v48;
            v122[0] = v48;
            while ( 1 )
            {
              v59 = v58->SchedulerAssist;
              if ( v59 )
              {
                if ( v58->NestingLevel <= 1u )
                {
                  v60 = v59[5];
                  v59[5] = v60 + 1;
                  if ( v60 == -1 )
                    KiRemoveSystemWorkPriorityKick(v58);
                }
              }
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&v27->PrcbLock, 0LL) )
                break;
              v61 = v58->SchedulerAssist;
              if ( v61 )
              {
                if ( v58->NestingLevel <= 1u )
                {
                  v62 = v61[5] - 1;
                  v61[5] = v62;
                  if ( !v62 )
                    KiRemoveSystemWorkPriorityKick(v58);
                }
              }
              do
                KeYieldProcessorEx(&v117);
              while ( v27->PrcbLock );
            }
            if ( !v27->NextThread )
              KiSelectNextThread(v27, v122);
            _InterlockedAnd64((volatile signed __int64 *)&v27->PrcbLock, 0LL);
            v78 = KeGetCurrentPrcb();
            v79 = v78->SchedulerAssist;
            if ( v79 )
            {
              if ( v78->NestingLevel <= 1u )
              {
                v80 = v79[5] - 1;
                v79[5] = v80;
                if ( !v80 )
                  KiRemoveSystemWorkPriorityKick(v78);
              }
            }
            KiReadyDeferredReadyList(v27, v122);
            NextThread = v27->NextThread;
            if ( v56 < 2u )
            {
              v82 = v27->CurrentThread;
              if ( NextThread )
              {
                KiAbProcessContextSwitch(v27->CurrentThread, 0LL);
                v83 = KeGetCurrentPrcb();
                v118 = 0;
                while ( 1 )
                {
                  v84 = v83->SchedulerAssist;
                  if ( v84 )
                  {
                    if ( v83->NestingLevel <= 1u )
                    {
                      v85 = v84[5];
                      v84[5] = v85 + 1;
                      if ( v85 == -1 )
                        KiRemoveSystemWorkPriorityKick(v83);
                    }
                  }
                  if ( !_interlockedbittestandset64((volatile signed __int32 *)&v27->PrcbLock, 0LL) )
                    break;
                  v86 = v83->SchedulerAssist;
                  if ( v86 )
                  {
                    if ( v83->NestingLevel <= 1u )
                    {
                      v87 = v86[5] - 1;
                      v86[5] = v87;
                      if ( !v87 )
                        KiRemoveSystemWorkPriorityKick(v83);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v118);
                  while ( v27->PrcbLock );
                }
                v88 = v27->NextThread;
                v27->NextThread = 0LL;
                _disable();
                KiEndThreadCycleAccumulation(v27, v82, 0LL);
                _enable();
                v27->CurrentThread = v88;
                if ( v88->WaitBlockFill6[68] == 1 )
                  v88->ReadyTime = v88->ReadyTime - v88->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
                v88->WaitBlockFill6[68] = 2;
                v82->WaitReason = 32;
                v82->WaitIrql = v56;
                KiQueueReadyThread(v27, v82);
                v89 = (unsigned __int8)KiSwapContext(v82, v88, v56) == 0;
              }
              else
              {
                v89 = (v82->MiscFlags & 0x40) == 0;
              }
              if ( !v89 )
              {
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
                {
                  v90 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v90->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v90);
                }
                __writecr8(1uLL);
                v82->MiscFlags &= ~0x40u;
                goto LABEL_293;
              }
              goto LABEL_294;
            }
            if ( NextThread )
            {
              v91 = v27->DpcRoutineActive == 0;
LABEL_301:
              if ( v91 )
                KiRequestSoftwareInterrupt(v27, 2);
            }
            return WaitStatus;
          }
          v92 = v27->CurrentThread;
          if ( v27->NextThread )
          {
            KiAbProcessContextSwitch(v27->CurrentThread, 0LL);
            v94 = KeGetCurrentPrcb();
            v119 = 0;
            while ( 1 )
            {
              LOBYTE(v93) = 1;
              KiSetVpThreadSpinLockCount(v94, v93);
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&v27->PrcbLock, 0LL) )
                break;
              KiSetVpThreadSpinLockCount(v94, 0LL);
              do
                KeYieldProcessorEx(&v119);
              while ( v27->PrcbLock );
            }
            v95 = v27->NextThread;
            v27->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(v27, v92, 0LL);
            _enable();
            v27->CurrentThread = v95;
            if ( v95->WaitBlockFill6[68] == 1 )
              v95->ReadyTime = v95->ReadyTime - v95->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v95->WaitBlockFill6[68] = 2;
            v92->WaitReason = 32;
            v92->WaitIrql = 1;
            KiQueueReadyThread(v27, v92);
            LOBYTE(v96) = 1;
            if ( (unsigned __int8)KiSwapContext(v92, v95, v96) )
            {
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
              {
                v97 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v97->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v97);
              }
              goto LABEL_260;
            }
          }
          else if ( (v92->MiscFlags & 0x40) != 0 )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            {
              v98 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v98->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v98);
            }
LABEL_260:
            __writecr8(1uLL);
            v92->MiscFlags &= ~0x40u;
            KiDeliverApc(0LL, 0LL, 0LL);
          }
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v99 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v99->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v99);
          }
          __writecr8(1uLL);
          KiDeliverApc(0LL, 0LL, 0LL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v100 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v100->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v100);
          }
          __writecr8(0LL);
          return WaitStatus;
        }
        if ( v108 )
        {
          if ( v56 >= 2u )
          {
            if ( v27->NextThread )
            {
              v91 = v27->DpcRoutineActive == 0;
              goto LABEL_301;
            }
            return WaitStatus;
          }
          v101 = v27->CurrentThread;
          if ( v27->NextThread )
          {
            KiAbProcessContextSwitch(v27->CurrentThread, 0LL);
            v103 = KeGetCurrentPrcb();
            v120 = 0;
            while ( 1 )
            {
              LOBYTE(v102) = 1;
              KiSetVpThreadSpinLockCount(v103, v102);
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&v27->PrcbLock, 0LL) )
                break;
              KiSetVpThreadSpinLockCount(v103, 0LL);
              do
                KeYieldProcessorEx(&v120);
              while ( v27->PrcbLock );
            }
            v104 = v27->NextThread;
            v27->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(v27, v101, 0LL);
            _enable();
            v27->CurrentThread = v104;
            if ( v104->WaitBlockFill6[68] == 1 )
              v104->ReadyTime = v104->ReadyTime - v104->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v104->WaitBlockFill6[68] = 2;
            v101->WaitReason = 32;
            v101->WaitIrql = v56;
            KiQueueReadyThread(v27, v101);
            v105 = (unsigned __int8)KiSwapContext(v101, v104, v56) == 0;
          }
          else
          {
            v105 = (v101->MiscFlags & 0x40) == 0;
          }
          if ( !v105 )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            {
              v106 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v106->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v106);
            }
            __writecr8(1uLL);
            v101->MiscFlags &= ~0x40u;
LABEL_293:
            KiDeliverApc(0LL, 0LL, 0LL);
          }
LABEL_294:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
LABEL_297:
            v107 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v107->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v107);
          }
        }
        else if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v56 < 2u )
        {
          goto LABEL_297;
        }
        __writecr8(v56);
        return WaitStatus;
      }
    }
  }
  if ( CurrentThread->Alerted[WaitMode] )
  {
    CurrentThread->Alerted[WaitMode] = 0;
    v21 = 257;
    goto LABEL_104;
  }
  if ( !WaitMode || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
  {
    if ( CurrentThread->Alerted[0] )
    {
      CurrentThread->Alerted[0] = 0;
      v21 = 257;
      goto LABEL_104;
    }
    goto LABEL_56;
  }
  CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_103:
  v21 = 192;
LABEL_104:
  KiReleaseThreadLockSafe(CurrentThread);
  v42 = KeGetCurrentPrcb();
  if ( WaitIrql >= 2u )
  {
    if ( v42->NextThread && !v42->DpcRoutineActive )
      KiRequestSoftwareInterrupt(v42, 2);
    return v21;
  }
  else
  {
    v43 = v42->CurrentThread;
    if ( v42->NextThread )
    {
      KiAbProcessContextSwitch(v42->CurrentThread, 0LL);
      KiAcquirePrcbLock(v42);
      v44 = v42->NextThread;
      v42->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(v42, v43, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(v42, v44, 0LL, 2LL);
      v43->WaitReason = 32;
      v43->WaitIrql = WaitIrql;
      KiQueueReadyThread(v42, v43);
      if ( (unsigned __int8)KiSwapContext(v43, v44, WaitIrql) )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v45);
        }
        goto LABEL_118;
      }
    }
    else if ( (v43->MiscFlags & 0x40) != 0 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v46);
      }
LABEL_118:
      __writecr8(1uLL);
      v43->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v47 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v47);
    }
    __writecr8(WaitIrql);
    return v21;
  }
}
