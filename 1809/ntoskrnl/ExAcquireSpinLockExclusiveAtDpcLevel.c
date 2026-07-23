/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710
 * Callers:
 *     KeFreezeProcess @ 0x140002940 (KeFreezeProcess.c)
 *     MiDrainSystemAccessLog @ 0x14000FF28 (MiDrainSystemAccessLog.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400247E0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiDeletePagablePteRange @ 0x140067FD0 (MiDeletePagablePteRange.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MiInsertUnusedSegment @ 0x14007B590 (MiInsertUnusedSegment.c)
 *     MiInsertUnusedSubsection @ 0x14007B7CC (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSegment @ 0x14007BB58 (MiRemoveUnusedSegment.c)
 *     MiRemoveUnusedSubsection @ 0x14007BBB8 (MiRemoveUnusedSubsection.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAA0 (MiOutPageSingleKernelStack.c)
 *     KeTerminateThread @ 0x140089A10 (KeTerminateThread.c)
 *     KeSetDisableQuantumProcess @ 0x14008F998 (KeSetDisableQuantumProcess.c)
 *     MiSectionCreated @ 0x140092660 (MiSectionCreated.c)
 *     KeStartThread @ 0x1400D3A34 (KeStartThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6A04 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x1400D8144 (KeSetQuantumProcess.c)
 *     MiReferenceIoPages @ 0x1400E602C (MiReferenceIoPages.c)
 *     MiPreventControlAreaDeletion @ 0x1400E9578 (MiPreventControlAreaDeletion.c)
 *     KeForceResumeProcess @ 0x1400F353C (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x1400F362C (KeSetProcessSchedulingGroup.c)
 *     KeThawProcess @ 0x1400F493C (KeThawProcess.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400F5828 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListExclusive @ 0x1400F5E00 (MmLockLoadedModuleListExclusive.c)
 *     MiRemoveFaultNode @ 0x1400F9744 (MiRemoveFaultNode.c)
 *     MiWaitForPageWriteCompletion @ 0x1400F9B74 (MiWaitForPageWriteCompletion.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400FAD30 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     PopPepWork @ 0x1400FF084 (PopPepWork.c)
 *     PopPepLockActivityLink @ 0x1400FFB20 (PopPepLockActivityLink.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E9C (MiDereferenceControlAreaPfnList.c)
 *     MiCheckForControlAreaDeletion @ 0x140119FAC (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x14011A0AC (MiClearFilePointer.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140126C70 (MiUpdateWorkingSetPrivateSize.c)
 *     MiReferencePageRuns @ 0x14012B7A0 (MiReferencePageRuns.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140130B04 (MmQuerySystemWorkingSetInformation.c)
 *     MiPreUnlockWorkingSetShared @ 0x140130D18 (MiPreUnlockWorkingSetShared.c)
 *     KeSetExecuteOptions @ 0x140135D7C (KeSetExecuteOptions.c)
 *     MiZeroSectionObjectPointer @ 0x14013B0E8 (MiZeroSectionObjectPointer.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C164 (MmAdjustWorkingSetSizeEx.c)
 *     MiLockAllMemoryLists @ 0x140152930 (MiLockAllMemoryLists.c)
 *     KeSetAffinityThread @ 0x14016B3B0 (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14018C794 (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x1401905F4 (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x14027B830 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x14028E758 (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140296A2C (KeRecomputeCpuSetAffinityProcess.c)
 *     KeTransitionProcessorParkState @ 0x14029CF8C (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x1402A2E18 (MiPurgeSubsection.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402BB0E8 (MiDbgTranslatePhysicalAddress.c)
 *     MiFaultGetFileExtents @ 0x1402BBFF4 (MiFaultGetFileExtents.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiNoPagesLastChance @ 0x1402C0710 (MiNoPagesLastChance.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1914 (MiDrainCrossPartitionUsage.c)
 *     PspIumReplenishPartitionPages @ 0x1402EBCA4 (PspIumReplenishPartitionPages.c)
 *     DbgpInsertDebugPrintCallback @ 0x1402ECC40 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402ECD5C (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x14030C37C (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x14030C4E8 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x14030D39C (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x14093E1AC (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
