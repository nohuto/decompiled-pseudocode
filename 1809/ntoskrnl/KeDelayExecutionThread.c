/*
 * XREFs of KeDelayExecutionThread @ 0x14004DA20
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     FsRtlCreateSectionForDataScan @ 0x140092480 (FsRtlCreateSectionForDataScan.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     CcPurgeCacheSection @ 0x1400E7B20 (CcPurgeCacheSection.c)
 *     MiCreateSystemSection @ 0x1400F599C (MiCreateSystemSection.c)
 *     ExpExpandResourceOwnerTable @ 0x140108584 (ExpExpandResourceOwnerTable.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E350 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011EBE8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     IopCancelIrpsInFileObjectList @ 0x140121AFC (IopCancelIrpsInFileObjectList.c)
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
 *     MiFlushAllPagesWorker @ 0x1401532B8 (MiFlushAllPagesWorker.c)
 *     PopAllocateIrp @ 0x14017283C (PopAllocateIrp.c)
 *     MiMappedPageWriter @ 0x1401808E0 (MiMappedPageWriter.c)
 *     PnpBootDeviceWait @ 0x14018252C (PnpBootDeviceWait.c)
 *     CcDeleteSectionsForPartition @ 0x14026B544 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x14027D7D0 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x140284D30 (IopKeepAliveWorker.c)
 *     MiRemoveUnusedSegments @ 0x1402A3220 (MiRemoveUnusedSegments.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1402B2CDC (MiCheckSystemTrimEndCriteria.c)
 *     MiFlushAllHintedStorePages @ 0x1402B8224 (MiFlushAllHintedStorePages.c)
 *     MiHandleForkTransitionPte @ 0x1402CA308 (MiHandleForkTransitionPte.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x140306200 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x14030A83C (MdlInvariantPostProcessing1.c)
 *     sub_140322760 @ 0x140322760 (sub_140322760.c)
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 *     PnpCompleteDeviceEvent @ 0x14058CFC0 (PnpCompleteDeviceEvent.c)
 *     PopPolicyWorkerNotify @ 0x1405B11A0 (PopPolicyWorkerNotify.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1405C2CE0 (EtwpWaitForBufferReferenceCount.c)
 *     MiCreateSectionCommon @ 0x1405DE7A0 (MiCreateSectionCommon.c)
 *     NtDelayExecution @ 0x1405E3B80 (NtDelayExecution.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     NtCreateJobObject @ 0x140606F80 (NtCreateJobObject.c)
 *     MmCreateSpecialImageSection @ 0x14060B404 (MmCreateSpecialImageSection.c)
 *     PfpOpenHandleCreate @ 0x140661528 (PfpOpenHandleCreate.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     MmGetSystemRoutineAddress @ 0x14067CA50 (MmGetSystemRoutineAddress.c)
 *     CmpUuidCreate @ 0x140681C2C (CmpUuidCreate.c)
 *     NtCancelIoFile @ 0x1406A78B0 (NtCancelIoFile.c)
 *     IoCancelThreadIo @ 0x1406A7A58 (IoCancelThreadIo.c)
 *     MmFlushVirtualMemory @ 0x1406B7EBC (MmFlushVirtualMemory.c)
 *     ExpWatchProductTypeWork @ 0x1406C0BB0 (ExpWatchProductTypeWork.c)
 *     PopAcquireAdaptiveLock @ 0x1406DD964 (PopAcquireAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x1406DEEB0 (PoBlockConsoleSwitch.c)
 *     PnpAllocateCriticalMemory @ 0x1406EFE04 (PnpAllocateCriticalMemory.c)
 *     CmpTransMgrCommit @ 0x1406FE250 (CmpTransMgrCommit.c)
 *     NtNotifyChangeSession @ 0x14071CB50 (NtNotifyChangeSession.c)
 *     PfTLoggingWorker @ 0x140740B20 (PfTLoggingWorker.c)
 *     PerfDiagpRestartCKCL @ 0x140742CA0 (PerfDiagpRestartCKCL.c)
 *     CmpRetryBackOff @ 0x1407F9CA4 (CmpRetryBackOff.c)
 *     IopCancelAlertedRequest @ 0x14081A7EC (IopCancelAlertedRequest.c)
 *     IopFreeBandwidthContract @ 0x140823AFC (IopFreeBandwidthContract.c)
 *     PipEventRemovalCheckOpenHandles @ 0x140841810 (PipEventRemovalCheckOpenHandles.c)
 *     MiGetReadyInPageBlock @ 0x14085054C (MiGetReadyInPageBlock.c)
 *     PoShutdownBugCheck @ 0x14086D120 (PoShutdownBugCheck.c)
 *     PdcNotificationClientUnregister @ 0x14089BD48 (PdcNotificationClientUnregister.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1408D74D0 (ExpNodeHotAddProcessorWorker.c)
 *     sub_1408E6348 @ 0x1408E6348 (sub_1408E6348.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x140937C04 (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspPutMore @ 0x14094DEF8 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x1409C6CC0 (StartFirstUserProcess.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1409DA820 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiSelectReadyThreadEx @ 0x14005ADA0 (KiSelectReadyThreadEx.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiBeginThreadWait @ 0x14008B1B0 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x14008B550 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x14008B5D0 (KiCheckWaitNext.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiComputeNewPriority @ 0x1400D0F10 (KiComputeNewPriority.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1EF0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D20B0 (KiEndThreadAccountingPeriod.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KeYieldExecution @ 0x1400D6650 (KeYieldExecution.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400D796C (KiSetBasePriorityAndClearDecrement.c)
 *     KiFastExitThreadWait @ 0x1400F9E2C (KiFastExitThreadWait.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1401B4B10 (KiReadGuestSchedulerAssistPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v4; // r10d
  struct _KTHREAD *v8; // rbx
  unsigned __int8 v9; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  NTSTATUS v11; // ebp
  __int64 v12; // rdx
  struct _KPRCB *v13; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  struct _KPRCB *v18; // rsi
  _DWORD *v19; // rcx
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  __int64 NextThread; // rsi
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  int v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r8
  volatile unsigned __int64 CycleTime; // r14
  unsigned __int64 v30; // rax
  bool v31; // zf
  unsigned __int64 v32; // rcx
  char v33; // al
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  unsigned int GuestSchedulerAssistPriority; // r14d
  struct _KPRCB *v36; // r9
  unsigned int v37; // r14d
  int v38; // eax
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rdx
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  int v42; // eax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rax
  __int64 v46; // r8
  struct _KPRCB *v47; // rcx
  unsigned __int8 v48; // r13
  NTSTATUS v49; // edi
  unsigned int v50; // esi
  __int64 v51; // rbp
  __int64 v52; // rcx
  NTSTATUS v53; // eax
  unsigned __int8 CurrentIrql; // dl
  NTSTATUS v55; // ebp
  int v56; // [rsp+30h] [rbp-48h] BYREF
  int v57; // [rsp+34h] [rbp-44h] BYREF
  __int64 v58; // [rsp+38h] [rbp-40h] BYREF
  PLARGE_INTEGER v59; // [rsp+90h] [rbp+18h]
  unsigned int v60; // [rsp+98h] [rbp+20h] BYREF

  v59 = Interval;
  CurrentThread = KeGetCurrentThread();
  v4 = (int)Interval;
  if ( Interval->QuadPart || !WaitMode || Alertable || (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 )
  {
    LOBYTE(Interval) = 1;
    v48 = KiCheckWaitNext((_DWORD)CurrentThread, v4, (_DWORD)Interval, (unsigned int)&v58, (__int64)&v60);
    v49 = KiBeginThreadWait(CurrentThread, (unsigned __int8)WaitMode, 4LL, Alertable);
    if ( !v49 )
    {
      v50 = v60;
      v51 = v58;
      while ( !(unsigned int)KiCheckDueTimeExpired(CurrentThread, v50, v51) )
      {
        CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
        CurrentThread->WaitBlockFill4[17] = 5;
        CurrentThread->WaitBlockCount = 1;
        v53 = KiCommitThreadWait(v52, &CurrentThread->320, v50, v51);
        if ( v53 != 256 )
        {
          v55 = 0;
          if ( v53 != 258 )
            return v53;
          return v55;
        }
        v48 = 0;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        {
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v50 = v60;
          v51 = v58;
        }
        CurrentThread->WaitIrql = CurrentIrql;
        v49 = KiBeginThreadWait(CurrentThread, (unsigned __int8)WaitMode, 4LL, Alertable);
        if ( v49 )
          return v49;
      }
      KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, v48);
      if ( !v59->QuadPart )
        return KeYieldExecution(0LL);
    }
    return v49;
  }
  else if ( KeGetPcr()->Prcb.ReadySummary || KeGetPcr()->Prcb.SharedReadyQueue->ReadySummary )
  {
    v8 = KeGetCurrentThread();
    v9 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v9 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->ReadySummary || CurrentPrcb->SharedReadyQueue->ReadySummary )
    {
      KiAbProcessContextSwitch(v8, 0LL);
      v13 = KeGetCurrentPrcb();
      v11 = 0;
      v56 = 0;
      while ( 1 )
      {
        SchedulerAssist = v13->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v15 = SchedulerAssist[5];
            SchedulerAssist[5] = v15 + 1;
            if ( v15 == -1 )
              KiRemoveSystemWorkPriorityKick(v13);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v8->ThreadLock, 0LL) )
          break;
        v16 = v13->SchedulerAssist;
        if ( v16 )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v17 = v16[5] - 1;
            v16[5] = v17;
            if ( !v17 )
              KiRemoveSystemWorkPriorityKick(v13);
          }
        }
        do
          KeYieldProcessorEx(&v56);
        while ( v8->ThreadLock );
      }
      v18 = KeGetCurrentPrcb();
      v57 = 0;
      while ( 1 )
      {
        v19 = v18->SchedulerAssist;
        if ( v19 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v20 = v19[5];
            v19[5] = v20 + 1;
            if ( v20 == -1 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v21 = v18->SchedulerAssist;
        if ( v21 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v22 = v21[5] - 1;
            v21[5] = v22;
            if ( !v22 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        do
          KeYieldProcessorEx(&v57);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = (__int64)CurrentPrcb->NextThread;
      if ( NextThread || (NextThread = KiSelectReadyThreadEx(CurrentPrcb, 0LL, 1LL)) != 0 )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CycleTime = v8->CycleTime;
        }
        else
        {
          _disable();
          CurrentPrcb->NestingLevel = 1;
          v27 = __rdtsc();
          v28 = v27 - CurrentPrcb->StartCycles;
          CycleTime = v28 + v8->CycleTime;
          v30 = v28 + v8->CurrentRunTime;
          v8->CycleTime = CycleTime;
          CurrentPrcb->StartCycles = v27;
          if ( v30 > 0xFFFFFFFF )
            LODWORD(v30) = -1;
          v31 = (v8->Header.Size & 0x3E) == 0;
          v8->CurrentRunTime = v30;
          if ( !v31 )
            KiEndThreadAccountingPeriod(CurrentPrcb, v8);
          KiStartThreadCycleAccumulation(CurrentPrcb, v8, 0LL);
          _enable();
        }
        v32 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v8->SchedulerApc.SpareByte1;
        if ( (*((_DWORD *)&v8->0 + 1) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)&v8->116 + 1, 5u);
        v8->QuantumTarget = v32;
        LOBYTE(v12) = 1;
        v33 = KiComputeNewPriority(v8, v12);
        if ( (*((_DWORD *)&v8->0 + 1) & 0x400000) != 0 )
        {
          GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v8);
          if ( GuestSchedulerAssistPriority != v8->Priority )
          {
            KiSetBasePriorityAndClearDecrement(v8, 0LL, 0LL);
            KiUpdateThreadPriority(0LL, v8, GuestSchedulerAssistPriority, 0LL);
          }
        }
        else
        {
          v36 = KeGetCurrentPrcb();
          v37 = v33;
          v38 = *(&v8->MiscFlags + 1);
          if ( (char)v37 > v8->Priority )
          {
            if ( v8->AbWaitEntryCount )
            {
              p_PropagateBoostsEntry = &v8->PropagateBoostsEntry;
              if ( v8->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
              {
                p_AbPropagateBoostsList = &v36->AbPropagateBoostsList;
                if ( v36 != (struct _KPRCB *)-25720LL )
                {
                  p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
                  p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
                  _InterlockedIncrement16(&v8->KeReferenceCount);
                  KiAbQueueAutoBoostDpc(v36);
                  v38 = *(&v8->MiscFlags + 1);
                }
              }
            }
          }
          v8->Priority = v37;
          if ( (v38 & 0x400000) != 0 )
          {
            LOBYTE(p_AbPropagateBoostsList) = 1;
            KiSetSchedulerAssistPriority(v8->SchedulerAssist, v37, p_AbPropagateBoostsList, v36);
          }
        }
        v8->ThreadLock = 0LL;
        v40 = KeGetCurrentPrcb();
        v41 = v40->SchedulerAssist;
        if ( v41 )
        {
          if ( v40->NestingLevel <= 1u )
          {
            v42 = v41[5] - 1;
            v41[5] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(v40);
          }
        }
        CurrentPrcb->NextThread = 0LL;
        _disable();
        CurrentPrcb->NestingLevel = 1;
        v43 = __rdtsc();
        v44 = v43 - CurrentPrcb->StartCycles;
        v45 = v44 + v8->CurrentRunTime;
        v8->CycleTime += v44;
        CurrentPrcb->StartCycles = v43;
        if ( v45 > 0xFFFFFFFF )
          LODWORD(v45) = -1;
        v31 = (v8->Header.Size & 0x3E) == 0;
        v8->CurrentRunTime = v45;
        if ( !v31 )
          KiEndThreadAccountingPeriod(CurrentPrcb, v8);
        _enable();
        KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 2LL, 2LL);
        v8->WaitReason = 33;
        v8->WaitIrql = v9;
        KiQueueReadyThread(CurrentPrcb, v8);
        LOBYTE(v46) = 1;
        KiSwapContext(v8, NextThread, v46);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        if ( v25 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v26 = v25[5] - 1;
            v25[5] = v26;
            if ( !v26 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        KiReleaseThreadLockSafe(v8);
        v11 = 1073741860;
      }
    }
    else
    {
      v11 = 1073741860;
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      v47 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v47);
    }
    __writecr8(v9);
    return v11;
  }
  else
  {
    return 1073741860;
  }
}
