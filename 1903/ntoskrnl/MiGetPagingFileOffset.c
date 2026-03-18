/*
 * XREFs of MiGetPagingFileOffset @ 0x1400761B4
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiWsleFree @ 0x140025750 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140026B30 (MiPfnShareCountIsZero.c)
 *     MiDeletePteList @ 0x140026F90 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiExpandSharedZeroCluster @ 0x140075E70 (MiExpandSharedZeroCluster.c)
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 *     MiTranslatePageForCopy @ 0x1400F4DC8 (MiTranslatePageForCopy.c)
 *     MiComputeFaultCluster @ 0x1400F55B4 (MiComputeFaultCluster.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     MiFlowThroughInsertNode @ 0x14013C26C (MiFlowThroughInsertNode.c)
 *     MiStoreUpdatePagefileHash @ 0x14014CF20 (MiStoreUpdatePagefileHash.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiValidatePagefilePageHash @ 0x14016524C (MiValidatePagefilePageHash.c)
 *     MiComputePageHash @ 0x14016569C (MiComputePageHash.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 *     MiDbgMarkPfnModified @ 0x1402D0D60 (MiDbgMarkPfnModified.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1402D8CA4 (MiWorkingSetInfoCheckPageTable.c)
 *     MiScanPagefileSpace @ 0x14088D120 (MiScanPagefileSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiGetPagingFileOffset(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v5; // rax
  __int64 v6; // r8

  if ( MiPteInShadowRange(a1)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v5 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v2 >> 3) & 0x1FF));
      v6 = v1 | 0x20;
      if ( (v5 & 0x20) == 0 )
        v6 = v1;
      v1 = v6;
      if ( (v5 & 0x42) != 0 )
        v1 = v6 | 0x42;
    }
  }
  if ( (v1 & 4) == 0 )
    return 0LL;
  if ( qword_140465B00 )
  {
    if ( (v1 & 0x10) == 0 )
      v1 &= ~qword_140465B00;
  }
  return HIDWORD(v1);
}
