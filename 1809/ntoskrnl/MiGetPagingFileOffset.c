/*
 * XREFs of MiGetPagingFileOffset @ 0x14010FA24
 * Callers:
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiComputeFaultCluster @ 0x14002B4B8 (MiComputeFaultCluster.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MiRestoreTransitionPte @ 0x140081010 (MiRestoreTransitionPte.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     MiTranslatePageForCopy @ 0x1400E9C30 (MiTranslatePageForCopy.c)
 *     MiFlowThroughInsertNode @ 0x14010F5E0 (MiFlowThroughInsertNode.c)
 *     MiExpandSharedZeroCluster @ 0x14010F710 (MiExpandSharedZeroCluster.c)
 *     MiStoreUpdatePagefileHash @ 0x14014FB2C (MiStoreUpdatePagefileHash.c)
 *     MiComputePageHash @ 0x14015168C (MiComputePageHash.c)
 *     MiResolvePageFileFault @ 0x140154B44 (MiResolvePageFileFault.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4368 (MiMakeOutswappedPageResident.c)
 *     MiDbgMarkPfnModified @ 0x1402BAB30 (MiDbgMarkPfnModified.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1402BF2E4 (MiWorkingSetInfoCheckPageTable.c)
 *     MiValidatePagefilePageHash @ 0x1402CC514 (MiValidatePagefilePageHash.c)
 *     MiScanPagefileSpace @ 0x140853430 (MiScanPagefileSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPagingFileOffset(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8

  v1 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL
    && a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    v3 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8 * ((a1 >> 3) & 0x1FF));
      v5 = v1 | 0x20;
      if ( (v4 & 0x20) == 0 )
        v5 = *(_QWORD *)a1;
      v1 = v5;
      if ( (v4 & 0x42) != 0 )
        v1 = v5 | 0x42;
    }
  }
  if ( (v1 & 4) == 0 )
    return 0LL;
  if ( qword_14043A0C0 )
  {
    if ( (v1 & 0x10) == 0 )
      v1 &= ~qword_14043A0C0;
  }
  return HIDWORD(v1);
}
