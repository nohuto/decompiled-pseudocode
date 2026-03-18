/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0
 * Callers:
 *     KeStartThread @ 0x14001BC90 (KeStartThread.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140060B90 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     MiInsertUnusedSubsection @ 0x14006FCC0 (MiInsertUnusedSubsection.c)
 *     MiInsertUnusedSegment @ 0x1400701F8 (MiInsertUnusedSegment.c)
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     MiRemoveUnusedSegment @ 0x14007436C (MiRemoveUnusedSegment.c)
 *     MiGatherMappedPages @ 0x14007B1D8 (MiGatherMappedPages.c)
 *     MiWaitForFreePagesToZero @ 0x14007C090 (MiWaitForFreePagesToZero.c)
 *     KeTerminateThread @ 0x140080CBC (KeTerminateThread.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400AA810 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     PopPepWork @ 0x1400B18B8 (PopPepWork.c)
 *     PopPepLockActivityLink @ 0x1400B2370 (PopPepLockActivityLink.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiOutPageSingleKernelStack @ 0x1400DEE10 (MiOutPageSingleKernelStack.c)
 *     MiSectionCreated @ 0x1400E05D0 (MiSectionCreated.c)
 *     MiRemoveUnusedSubsection @ 0x1400E0A4C (MiRemoveUnusedSubsection.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E40B8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x1400E4758 (KeSetQuantumProcess.c)
 *     KeSetDisableQuantumProcess @ 0x1400E5B0C (KeSetDisableQuantumProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x1400E93DC (KeSetProcessSchedulingGroup.c)
 *     KeFreezeProcess @ 0x1400EE7A4 (KeFreezeProcess.c)
 *     KeForceResumeProcess @ 0x1400EEA04 (KeForceResumeProcess.c)
 *     KeThawProcess @ 0x1400EEAF4 (KeThawProcess.c)
 *     MiCheckForControlAreaDeletion @ 0x14010A5A8 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x14010A6A8 (MiClearFilePointer.c)
 *     MiReferenceIoPages @ 0x140118650 (MiReferenceIoPages.c)
 *     MiWaitForPageWriteCompletion @ 0x14011A904 (MiWaitForPageWriteCompletion.c)
 *     MiReferencePageRuns @ 0x14012C230 (MiReferencePageRuns.c)
 *     MiPreventControlAreaDeletion @ 0x14012E9B8 (MiPreventControlAreaDeletion.c)
 *     KeSetExecuteOptions @ 0x1401375DC (KeSetExecuteOptions.c)
 *     MiRemoveFaultNode @ 0x14013809C (MiRemoveFaultNode.c)
 *     MiZeroSectionObjectPointer @ 0x14013CF74 (MiZeroSectionObjectPointer.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14015473C (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListExclusive @ 0x1401551CC (MmLockLoadedModuleListExclusive.c)
 *     KeSetAffinityThread @ 0x14015A184 (KeSetAffinityThread.c)
 *     MiLockAllMemoryLists @ 0x1401603B0 (MiLockAllMemoryLists.c)
 *     KeSetCpuSetsProcess @ 0x1401962BC (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x14019A6D8 (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x14028FD30 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x1402A502C (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1402AD014 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeTransitionProcessorParkState @ 0x1402B576C (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x1402B9FD8 (MiPurgeSubsection.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CAE80 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CB23C (MiCopyImageExtentContents.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402D115C (MiDbgTranslatePhysicalAddress.c)
 *     MiFaultGetFileExtents @ 0x1402D2608 (MiFaultGetFileExtents.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiNoPagesLastChance @ 0x1402D9E6C (MiNoPagesLastChance.c)
 *     MiDrainCrossPartitionUsage @ 0x1402EA498 (MiDrainCrossPartitionUsage.c)
 *     PspIumReplenishPartitionPages @ 0x14030962C (PspIumReplenishPartitionPages.c)
 *     DbgpInsertDebugPrintCallback @ 0x14030B220 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14030B33C (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x140329C4C (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x140329DB8 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x14032AD80 (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x14097C5F8 (ViDeadlockDetectionLock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B5550 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  volatile LONG v5; // edx
  _DWORD *v6; // rcx
  bool v7; // zf
  signed __int32 v8; // eax
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
      LOBYTE(v1) = -1;
      v12 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock, v1);
    }
    v5 = *SpinLock;
    while ( (v5 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v8 = _InterlockedCompareExchange(SpinLock, v5 | 0x40000000, v5);
        v7 = v5 == v8;
        v5 = v8;
        if ( !v7 )
          continue;
      }
      KeYieldProcessorEx(&v12);
      v5 = *SpinLock;
    }
  }
}
