/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720
 * Callers:
 *     KeFreezeProcess @ 0x140002940 (KeFreezeProcess.c)
 *     MiDrainSystemAccessLog @ 0x14000FF28 (MiDrainSystemAccessLog.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400247E0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiDeletePagablePteRange @ 0x140067FE0 (MiDeletePagablePteRange.c)
 *     MiLockPageTableInternal @ 0x14006CA20 (MiLockPageTableInternal.c)
 *     MiWalkPageTables @ 0x14006E940 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE80 (MiWalkPageTablesRecursively.c)
 *     MmUnmapViewInSystemCache @ 0x140078710 (MmUnmapViewInSystemCache.c)
 *     MiInsertUnusedSegment @ 0x14007B5A0 (MiInsertUnusedSegment.c)
 *     MiInsertUnusedSubsection @ 0x14007B7DC (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSegment @ 0x14007BB68 (MiRemoveUnusedSegment.c)
 *     MiRemoveUnusedSubsection @ 0x14007BBC8 (MiRemoveUnusedSubsection.c)
 *     MiGatherMappedPages @ 0x14007E6B0 (MiGatherMappedPages.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAB0 (MiOutPageSingleKernelStack.c)
 *     KeTerminateThread @ 0x140089A20 (KeTerminateThread.c)
 *     KeSetDisableQuantumProcess @ 0x14008FA78 (KeSetDisableQuantumProcess.c)
 *     MiSectionCreated @ 0x140092720 (MiSectionCreated.c)
 *     KeStartThread @ 0x1400D39B4 (KeStartThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6984 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x1400D80C4 (KeSetQuantumProcess.c)
 *     MiReferenceIoPages @ 0x1400E5FAC (MiReferenceIoPages.c)
 *     MiPreventControlAreaDeletion @ 0x1400E94F8 (MiPreventControlAreaDeletion.c)
 *     KeForceResumeProcess @ 0x1400F34BC (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x1400F35AC (KeSetProcessSchedulingGroup.c)
 *     KeThawProcess @ 0x1400F48BC (KeThawProcess.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400F57A8 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListExclusive @ 0x1400F5D80 (MmLockLoadedModuleListExclusive.c)
 *     MiRemoveFaultNode @ 0x1400F96C4 (MiRemoveFaultNode.c)
 *     MiWaitForPageWriteCompletion @ 0x1400F9AF4 (MiWaitForPageWriteCompletion.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400FACB0 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     PopPepWork @ 0x1400FF004 (PopPepWork.c)
 *     PopPepLockActivityLink @ 0x1400FFAA0 (PopPepLockActivityLink.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E2C (MiDereferenceControlAreaPfnList.c)
 *     MiCheckForControlAreaDeletion @ 0x140119F3C (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x14011A03C (MiClearFilePointer.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140126BA0 (MiUpdateWorkingSetPrivateSize.c)
 *     MiReferencePageRuns @ 0x14012B6D0 (MiReferencePageRuns.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140130A34 (MmQuerySystemWorkingSetInformation.c)
 *     MiPreUnlockWorkingSetShared @ 0x140130C48 (MiPreUnlockWorkingSetShared.c)
 *     KeSetExecuteOptions @ 0x140135CAC (KeSetExecuteOptions.c)
 *     MiZeroSectionObjectPointer @ 0x14013AFE8 (MiZeroSectionObjectPointer.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C064 (MmAdjustWorkingSetSizeEx.c)
 *     MiLockAllMemoryLists @ 0x140152830 (MiLockAllMemoryLists.c)
 *     KeSetAffinityThread @ 0x14016B2B0 (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14018C654 (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x1401904B4 (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x14027B640 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x14028E568 (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14029683C (KeRecomputeCpuSetAffinityProcess.c)
 *     KeTransitionProcessorParkState @ 0x14029CD9C (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x1402A2C28 (MiPurgeSubsection.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402BAEF8 (MiDbgTranslatePhysicalAddress.c)
 *     MiFaultGetFileExtents @ 0x1402BBE04 (MiFaultGetFileExtents.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD1D4 (MiDecommitHardwareEnclavePages.c)
 *     MiNoPagesLastChance @ 0x1402C0520 (MiNoPagesLastChance.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1724 (MiDrainCrossPartitionUsage.c)
 *     PspIumReplenishPartitionPages @ 0x1402EBAB4 (PspIumReplenishPartitionPages.c)
 *     DbgpInsertDebugPrintCallback @ 0x1402ECA50 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402ECB6C (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x14030C18C (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x14030C2F8 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x14030D1AC (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x14093D1AC (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C0B4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // r8
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  bool v7; // zf
  unsigned __int32 v8; // eax
  char v9; // dl
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v9 = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, v9);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = SchedulerAssist[5];
        SchedulerAssist[5] = v10 + 1;
        if ( v10 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      v6 = CurrentPrcb->SchedulerAssist;
      if ( v6 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v11 = v6[5] - 1;
          v6[5] = v11;
          if ( !v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v12 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock, 0xFFu);
    }
    v5 = *(unsigned int *)SpinLock;
    if ( (*SpinLock & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v5 & 0x40000000) == 0 )
        {
          v8 = _InterlockedCompareExchange(SpinLock, v5 | 0x40000000, v5);
          v7 = (_DWORD)v5 == v8;
          v5 = v8;
          if ( !v7 )
            continue;
        }
        KeYieldProcessorEx(&v12, v5, v1);
        v5 = *(unsigned int *)SpinLock;
      }
      while ( (v5 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
}
