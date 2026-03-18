/*
 * XREFs of MiGetPagingFileOffset @ 0x140076424
 * Callers:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiExpandSharedZeroCluster @ 0x1400760E0 (MiExpandSharedZeroCluster.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     MiComputeFaultCluster @ 0x14012443C (MiComputeFaultCluster.c)
 *     MiFlowThroughInsertNode @ 0x14013C88C (MiFlowThroughInsertNode.c)
 *     MiStoreUpdatePagefileHash @ 0x14014D5C0 (MiStoreUpdatePagefileHash.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 *     MiValidatePagefilePageHash @ 0x140164C9C (MiValidatePagefilePageHash.c)
 *     MiComputePageHash @ 0x1401650EC (MiComputePageHash.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MiDbgMarkPfnModified @ 0x1402D0AC0 (MiDbgMarkPfnModified.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1402D8A04 (MiWorkingSetInfoCheckPageTable.c)
 *     MiScanPagefileSpace @ 0x14088C940 (MiScanPagefileSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
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
  if ( qword_140465800 )
  {
    if ( (v1 & 0x10) == 0 )
      v1 &= ~qword_140465800;
  }
  return HIDWORD(v1);
}
