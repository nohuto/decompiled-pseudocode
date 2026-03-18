/*
 * XREFs of MiPageToNode @ 0x1400A02E4
 * Callers:
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MiTradeTransitionPage @ 0x14009D6C8 (MiTradeTransitionPage.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009FE80 (MiQueueLargeFreeZeroRebuild.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiTryUnlinkNodeLargePage @ 0x140131048 (MiTryUnlinkNodeLargePage.c)
 *     MiSwapStackPage @ 0x1401345A4 (MiSwapStackPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186948 (MiDemoteValidLargePageOneLevel.c)
 *     MiDescribePageRun @ 0x14018896C (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x140188A34 (MiInitializeUnusablePfns.c)
 *     MiMapContiguousMemoryLarge @ 0x14018C8D8 (MiMapContiguousMemoryLarge.c)
 *     MiInitializeDynamicPfns @ 0x1402BDEDC (MiInitializeDynamicPfns.c)
 *     MiAddPartitionHugeRange @ 0x1402C1AAC (MiAddPartitionHugeRange.c)
 *     MiHugePageOperation @ 0x1402C21D0 (MiHugePageOperation.c)
 *     MiReplaceLockedPage @ 0x1402CA5B0 (MiReplaceLockedPage.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408884D4 (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x140888C50 (MiMapNewPfns.c)
 *     MiMapSystemImageWithLargePage @ 0x14089A11C (MiMapSystemImageWithLargePage.c)
 *     MiSwitchToPfns @ 0x1409F26EC (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x1409F2AC8 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x1409F3040 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x1409F313C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x1409F3424 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1409F38CC (MxComputeFreeNodeDescriptorRequirements.c)
 *     MxCreatePfn @ 0x1409FC288 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x140A16E24 (MiFreeBootPageTable.c)
 *     MiHotAddBootDescriptor @ 0x140A3D684 (MiHotAddBootDescriptor.c)
 *     MxSwitchDescriptors @ 0x140A3D74C (MxSwitchDescriptors.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiSearchNumaNodeTable @ 0x1400D4740 (MiSearchNumaNodeTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR BugCheckParameter2, int a2)
{
  KIRQL v3; // di
  unsigned int v4; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a2 == 1 )
  {
    v3 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140465A90);
  }
  else
  {
    v3 = ExAcquireSpinLockShared(&dword_140465A90);
  }
  v4 = *(_DWORD *)(MiSearchNumaNodeTable(BugCheckParameter2) + 8);
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140465A90);
  if ( v3 != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v3);
  }
  return v4;
}
