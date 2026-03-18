/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330
 * Callers:
 *     KeStartThread @ 0x14001C080 (KeStartThread.c)
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x140049540 (MiWalkPageTablesRecursively.c)
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140060C30 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     MiInsertUnusedSubsection @ 0x14006FF30 (MiInsertUnusedSubsection.c)
 *     MiInsertUnusedSegment @ 0x140070468 (MiInsertUnusedSegment.c)
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     MiRemoveUnusedSegment @ 0x1400745DC (MiRemoveUnusedSegment.c)
 *     MiGatherMappedPages @ 0x14007B5D8 (MiGatherMappedPages.c)
 *     MiWaitForFreePagesToZero @ 0x14007C490 (MiWaitForFreePagesToZero.c)
 *     KeTerminateThread @ 0x1400810BC (KeTerminateThread.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiOutPageSingleKernelStack @ 0x1400BEC90 (MiOutPageSingleKernelStack.c)
 *     MiSectionCreated @ 0x1400C0450 (MiSectionCreated.c)
 *     MiRemoveUnusedSubsection @ 0x1400C08CC (MiRemoveUnusedSubsection.c)
 *     PopPepWork @ 0x1400E19A0 (PopPepWork.c)
 *     PopPepLockActivityLink @ 0x1400E2458 (PopPepLockActivityLink.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400E39A4 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E9064 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x1400E9704 (KeSetQuantumProcess.c)
 *     KeSetDisableQuantumProcess @ 0x1400EAAAC (KeSetDisableQuantumProcess.c)
 *     KeFreezeProcess @ 0x1400F1804 (KeFreezeProcess.c)
 *     KeForceResumeProcess @ 0x1400F1960 (KeForceResumeProcess.c)
 *     KeThawProcess @ 0x1400F1A50 (KeThawProcess.c)
 *     MiReferenceIoPages @ 0x1400F6770 (MiReferenceIoPages.c)
 *     MiCheckForControlAreaDeletion @ 0x14010A178 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x14010A278 (MiClearFilePointer.c)
 *     KeSetProcessSchedulingGroup @ 0x140114264 (KeSetProcessSchedulingGroup.c)
 *     MiWaitForPageWriteCompletion @ 0x140118D34 (MiWaitForPageWriteCompletion.c)
 *     MiReferencePageRuns @ 0x14012CD00 (MiReferencePageRuns.c)
 *     MiPreventControlAreaDeletion @ 0x14012F308 (MiPreventControlAreaDeletion.c)
 *     KeSetExecuteOptions @ 0x140137C24 (KeSetExecuteOptions.c)
 *     MiRemoveFaultNode @ 0x1401386EC (MiRemoveFaultNode.c)
 *     MiZeroSectionObjectPointer @ 0x14013D4B4 (MiZeroSectionObjectPointer.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140154DDC (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListExclusive @ 0x14015586C (MmLockLoadedModuleListExclusive.c)
 *     KeSetAffinityThread @ 0x14015A824 (KeSetAffinityThread.c)
 *     MiLockAllMemoryLists @ 0x140169F84 (MiLockAllMemoryLists.c)
 *     KeSetCpuSetsProcess @ 0x140196A9C (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x14019AD38 (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x14028FA90 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x1402A4D8C (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1402ACD74 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeTransitionProcessorParkState @ 0x1402B54CC (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x1402B9D38 (MiPurgeSubsection.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CABE0 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CAF9C (MiCopyImageExtentContents.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402D0EBC (MiDbgTranslatePhysicalAddress.c)
 *     MiFaultGetFileExtents @ 0x1402D2368 (MiFaultGetFileExtents.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiNoPagesLastChance @ 0x1402D9BCC (MiNoPagesLastChance.c)
 *     MiDrainCrossPartitionUsage @ 0x1402EA1F8 (MiDrainCrossPartitionUsage.c)
 *     PspIumReplenishPartitionPages @ 0x1403090DC (PspIumReplenishPartitionPages.c)
 *     DbgpInsertDebugPrintCallback @ 0x14030ACD0 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14030ADEC (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x14032969C (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x140329808 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x14032A7D0 (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x14097C5F8 (ViDeadlockDetectionLock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
