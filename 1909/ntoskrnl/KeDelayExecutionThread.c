/*
 * XREFs of KeDelayExecutionThread @ 0x14003AEC0
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     MmFlushSection @ 0x140077E98 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x14007B5D8 (MiGatherMappedPages.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     CcPurgeCacheSection @ 0x1400BF3E0 (CcPurgeCacheSection.c)
 *     FsRtlCreateSectionForDataScan @ 0x1400C1C30 (FsRtlCreateSectionForDataScan.c)
 *     MiAllocatePagesForMdl @ 0x1400DCB14 (MiAllocatePagesForMdl.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011C180 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011CA34 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExpExpandResourceOwnerTable @ 0x140123FA0 (ExpExpandResourceOwnerTable.c)
 *     IopCancelIrpsInFileObjectList @ 0x140128000 (IopCancelIrpsInFileObjectList.c)
 *     MiFlushAllHintedStorePages @ 0x140144AC8 (MiFlushAllHintedStorePages.c)
 *     MiGatherPagefilePages @ 0x14014B04C (MiGatherPagefilePages.c)
 *     MiCreateSystemSection @ 0x1401552D4 (MiCreateSystemSection.c)
 *     MiFlushAllPagesWorker @ 0x14016A7C8 (MiFlushAllPagesWorker.c)
 *     PopAllocateIrp @ 0x140173844 (PopAllocateIrp.c)
 *     MiMappedPageWriter @ 0x14018CF20 (MiMappedPageWriter.c)
 *     PnpBootDeviceWait @ 0x14018E280 (PnpBootDeviceWait.c)
 *     CcDeleteSectionsForPartition @ 0x14027EB34 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x140291DC0 (InbvRotateGuiBootDisplay.c)
 *     IopKeepAliveWorker @ 0x140299BF0 (IopKeepAliveWorker.c)
 *     MiRemoveUnusedSegments @ 0x1402BA140 (MiRemoveUnusedSegments.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3960 (MiFlushAllFilesystemPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1402C7C9C (MiCheckSystemTrimEndCriteria.c)
 *     MiDelayFaultingThread @ 0x1402D22FC (MiDelayFaultingThread.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1403234A0 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x140327D0C (MdlInvariantPostProcessing1.c)
 *     sub_140343AB0 @ 0x140343AB0 (sub_140343AB0.c)
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 *     MiCreateSectionCommon @ 0x1405D6CC0 (MiCreateSectionCommon.c)
 *     NtDelayExecution @ 0x1405F5590 (NtDelayExecution.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     IoCancelThreadIo @ 0x14060F660 (IoCancelThreadIo.c)
 *     MmCreateSpecialImageSection @ 0x14061A8E8 (MmCreateSpecialImageSection.c)
 *     MmFlushVirtualMemory @ 0x14062450C (MmFlushVirtualMemory.c)
 *     PfpOpenHandleCreate @ 0x14062CAC4 (PfpOpenHandleCreate.c)
 *     PopPolicyWorkerNotify @ 0x1406718E0 (PopPolicyWorkerNotify.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     NtCreateJobObject @ 0x140689AC0 (NtCreateJobObject.c)
 *     CmpUuidCreate @ 0x14068AEE4 (CmpUuidCreate.c)
 *     PnpCompleteDeviceEvent @ 0x1406997C8 (PnpCompleteDeviceEvent.c)
 *     NtNotifyChangeSession @ 0x1406A3AF0 (NtNotifyChangeSession.c)
 *     NtCancelIoFile @ 0x1406CFFA0 (NtCancelIoFile.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1406DDF1C (EtwpWaitForBufferReferenceCount.c)
 *     MmGetSystemRoutineAddress @ 0x1406E4E60 (MmGetSystemRoutineAddress.c)
 *     ExpWatchProductTypeWork @ 0x1406E5580 (ExpWatchProductTypeWork.c)
 *     PopAcquireAdaptiveLock @ 0x1406EF0C8 (PopAcquireAdaptiveLock.c)
 *     PoBlockConsoleSwitch @ 0x1406EF198 (PoBlockConsoleSwitch.c)
 *     PnpAllocateCriticalMemory @ 0x140733534 (PnpAllocateCriticalMemory.c)
 *     PfTLoggingWorker @ 0x14075FE90 (PfTLoggingWorker.c)
 *     CmpRetryBackOff @ 0x1408315E8 (CmpRetryBackOff.c)
 *     IopCancelAlertedRequest @ 0x140852F5C (IopCancelAlertedRequest.c)
 *     IopFreeBandwidthContract @ 0x14085C2D4 (IopFreeBandwidthContract.c)
 *     PipEventRemovalCheckOpenHandles @ 0x14087B6B0 (PipEventRemovalCheckOpenHandles.c)
 *     MiGetReadyInPageBlock @ 0x14088AA9C (MiGetReadyInPageBlock.c)
 *     PoShutdownBugCheck @ 0x1408A8030 (PoShutdownBugCheck.c)
 *     PdcNotificationClientUnregister @ 0x1408D8F08 (PdcNotificationClientUnregister.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140913560 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x140919330 (WheaRemoveErrorSource.c)
 *     sub_140920B70 @ 0x140920B70 (sub_140920B70.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x140976304 (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspPutMore @ 0x14098CF24 (HdlspPutMore.c)
 *     StartFirstUserProcess @ 0x1409FD234 (StartFirstUserProcess.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A0FF08 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     KiSelectReadyThreadEx @ 0x1400101A0 (KiSelectReadyThreadEx.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140011E08 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x140011E50 (KiComputeNewPriority.c)
 *     KiStartThreadCycleAccumulation @ 0x140012EE0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiIsThreadRankNonZero @ 0x140014B90 (KiIsThreadRankNonZero.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x140040480 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiBeginThreadWait @ 0x14009A470 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x14009A7D0 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x14009AE10 (KiCheckWaitNext.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KeYieldExecution @ 0x140108D60 (KeYieldExecution.c)
 *     KiFastExitThreadWait @ 0x1401193C4 (KiFastExitThreadWait.c)
 *     KiAbQueueAutoBoostDpc @ 0x14013062C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0380 (KiSetSchedulerAssistPriority.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v4; // r10d
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *v9; // rbx
  unsigned __int8 v10; // r15
  struct _KPRCB *v11; // rdi
  NTSTATUS v12; // ebp
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
  unsigned __int64 CycleTime; // r14
  unsigned __int64 v28; // rcx
  char v29; // r14
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  struct _KPRCB *v31; // rcx
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rdx
  bool v33; // zf
  __int64 v34; // r8
  bool IsThreadRankNonZero; // al
  char v36; // cl
  __int64 v37; // rdx
  __int64 v38; // r8
  struct _KPRCB *v39; // rcx
  unsigned __int8 v40; // r15
  NTSTATUS v41; // edi
  unsigned int v42; // esi
  __int64 v43; // rbp
  __int64 v44; // rcx
  NTSTATUS v45; // eax
  unsigned __int8 CurrentIrql; // dl
  NTSTATUS v47; // ebp
  int v48; // [rsp+30h] [rbp-48h] BYREF
  int v49; // [rsp+34h] [rbp-44h] BYREF
  __int64 v50; // [rsp+38h] [rbp-40h] BYREF
  PLARGE_INTEGER v51; // [rsp+90h] [rbp+18h]
  unsigned int v52; // [rsp+98h] [rbp+20h] BYREF

  v51 = Interval;
  CurrentThread = KeGetCurrentThread();
  v4 = (int)Interval;
  if ( Interval->QuadPart || !WaitMode || Alertable || (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 )
  {
    LOBYTE(Interval) = 1;
    v40 = KiCheckWaitNext((_DWORD)CurrentThread, v4, (_DWORD)Interval, (unsigned int)&v50, (__int64)&v52);
    v41 = KiBeginThreadWait(CurrentThread, (unsigned __int8)WaitMode, 4LL, Alertable);
    if ( !v41 )
    {
      v42 = v52;
      v43 = v50;
      while ( !(unsigned int)KiCheckDueTimeExpired(CurrentThread, v42, v43) )
      {
        CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
        CurrentThread->WaitBlockFill4[17] = 5;
        CurrentThread->WaitBlockCount = 1;
        v45 = KiCommitThreadWait(v44, &CurrentThread->320, v42, v43);
        if ( v45 != 256 )
        {
          v47 = 0;
          if ( v45 != 258 )
            return v45;
          return v47;
        }
        v40 = 0;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        {
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v42 = v52;
          v43 = v50;
        }
        CurrentThread->WaitIrql = CurrentIrql;
        v41 = KiBeginThreadWait(CurrentThread, (unsigned __int8)WaitMode, 4LL, Alertable);
        if ( v41 )
          return v41;
      }
      KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, v40);
      if ( !v51->QuadPart )
        return KeYieldExecution(0LL);
    }
    return v41;
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->ReadySummary || CurrentPrcb->SharedReadyQueue->ReadySummary )
    {
      v9 = KeGetCurrentThread();
      v10 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v11 = KeGetCurrentPrcb();
      if ( v11->ReadySummary || v11->SharedReadyQueue->ReadySummary )
      {
        KiAbProcessContextSwitch(v9, 0LL);
        v13 = KeGetCurrentPrcb();
        v12 = 0;
        v48 = 0;
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
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v9->ThreadLock, 0LL) )
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
            KeYieldProcessorEx(&v48);
          while ( v9->ThreadLock );
        }
        v18 = KeGetCurrentPrcb();
        v49 = 0;
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
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v11->PrcbLock, 0LL) )
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
            KeYieldProcessorEx(&v49);
          while ( v11->PrcbLock );
        }
        NextThread = (__int64)v11->NextThread;
        if ( NextThread || (NextThread = KiSelectReadyThreadEx(v11, 0LL, 1)) != 0 )
        {
          if ( v11->NestingLevel )
          {
            CycleTime = v9->CycleTime;
          }
          else
          {
            _disable();
            CycleTime = KiEndThreadCycleAccumulation((__int64)v11, (__int64)v9, 0LL);
            KiStartThreadCycleAccumulation((__int64)v11, (__int64)v9, 0);
            _enable();
          }
          v28 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v9->SchedulerApc.SpareByte1;
          if ( (*((_DWORD *)&v9->0 + 1) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&v9->116 + 1, 5u);
          v9->QuantumTarget = v28;
          v29 = KiComputeNewPriority((__int64)v9, 1);
          if ( !KiUpdateVPBackingThreadPriority((__int64)v9, 0LL, 0LL) )
          {
            v31 = KeGetCurrentPrcb();
            if ( v29 > v9->Priority )
            {
              if ( v9->AbWaitEntryCount )
              {
                p_PropagateBoostsEntry = &v9->PropagateBoostsEntry;
                if ( v9->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
                {
                  p_AbPropagateBoostsList = &v31->AbPropagateBoostsList;
                  if ( v31 != (struct _KPRCB *)-25720LL )
                  {
                    p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
                    p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
                    _InterlockedIncrement16(&v9->KeReferenceCount);
                    KiAbQueueAutoBoostDpc(v31);
                  }
                }
              }
            }
            v33 = (*((_DWORD *)&v9->0 + 1) & 0x400000) == 0;
            v9->Priority = v29;
            if ( !v33 )
            {
              LOBYTE(p_AbPropagateBoostsList) = 1;
              KiSetSchedulerAssistPriority(v9->SchedulerAssist, (unsigned int)v29, p_AbPropagateBoostsList);
            }
          }
          KiReleaseThreadLockSafe(v9);
          v11->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)v11, (__int64)v9, 0LL);
          _enable();
          if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
            || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, v11), v36 = 1, !IsThreadRankNonZero) )
          {
            v36 = *(_BYTE *)(NextThread + 195);
          }
          *v11->PriorityState = v36;
          if ( v11->SchedulerAssist )
          {
            v37 = (unsigned int)KiVpThreadSystemWorkPriority;
            if ( (_KTHREAD *)NextThread != v11->IdleThread )
              v37 = (unsigned int)v36;
            KiSetSchedulerAssistPriority(v11->SchedulerAssist, v37, 0LL);
          }
          v11->CurrentThread = (_KTHREAD *)NextThread;
          if ( *(_BYTE *)(NextThread + 388) == 1 )
            *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                          - *(_DWORD *)(NextThread + 436)
                                          + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(NextThread + 388) = 2;
          v9->WaitReason = 33;
          v9->WaitIrql = v10;
          KiQueueReadyThread((__int64)v11, (__int64)v9, v34);
          LOBYTE(v38) = 1;
          KiSwapContext(v9, NextThread, v38);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)&v11->PrcbLock, 0LL);
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
          KiReleaseThreadLockSafe(v9);
          v12 = 1073741860;
        }
      }
      else
      {
        v12 = 1073741860;
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
      {
        v39 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v39);
      }
      __writecr8(v10);
      return v12;
    }
    else
    {
      return 1073741860;
    }
  }
}
