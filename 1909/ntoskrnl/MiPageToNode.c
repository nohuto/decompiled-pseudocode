/*
 * XREFs of MiPageToNode @ 0x1400C53C4
 * Callers:
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 *     MiTradeTransitionPage @ 0x1400C32D4 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1400C4F60 (MiQueueLargeFreeZeroRebuild.c)
 *     MiTryUnlinkNodeLargePage @ 0x1400F7688 (MiTryUnlinkNodeLargePage.c)
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186EF8 (MiDemoteValidLargePageOneLevel.c)
 *     MiDescribePageRun @ 0x140188F1C (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x140188FE4 (MiInitializeUnusablePfns.c)
 *     MiMapContiguousMemoryLarge @ 0x14018D158 (MiMapContiguousMemoryLarge.c)
 *     MiInitializeDynamicPfns @ 0x1402BDC3C (MiInitializeDynamicPfns.c)
 *     MiAddPartitionHugeRange @ 0x1402C180C (MiAddPartitionHugeRange.c)
 *     MiHugePageOperation @ 0x1402C1F30 (MiHugePageOperation.c)
 *     MiReplaceLockedPage @ 0x1402CA310 (MiReplaceLockedPage.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 *     MiAddPhysicalMemoryChunks @ 0x140887CF4 (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x140888470 (MiMapNewPfns.c)
 *     MiMapSystemImageWithLargePage @ 0x14089993C (MiMapSystemImageWithLargePage.c)
 *     MiSwitchToPfns @ 0x1409F25FC (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x1409F29D8 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x1409F2F50 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x1409F304C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x1409F3334 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1409F37DC (MxComputeFreeNodeDescriptorRequirements.c)
 *     MxCreatePfn @ 0x1409FC7A4 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x140A172E4 (MiFreeBootPageTable.c)
 *     MiHotAddBootDescriptor @ 0x140A3D454 (MiHotAddBootDescriptor.c)
 *     MxSwitchDescriptors @ 0x140A3D51C (MxSwitchDescriptors.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiSearchNumaNodeTable @ 0x1400B45C0 (MiSearchNumaNodeTable.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140104DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR BugCheckParameter2, int a2)
{
  KIRQL v3; // di
  unsigned int v4; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a2 == 1 )
  {
    v3 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140465790);
  }
  else
  {
    v3 = ExAcquireSpinLockShared(&dword_140465790);
  }
  v4 = *((_DWORD *)MiSearchNumaNodeTable(BugCheckParameter2) + 2);
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140465790);
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
