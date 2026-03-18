/*
 * XREFs of MiUnlockProtoPoolPage @ 0x140054F90
 * Callers:
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x14006E830 (MmCopyToCachedPage.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiInitializeImageProtos @ 0x1400A2264 (MiInitializeImageProtos.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x1400A6124 (MiAllocateInPageSupport.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     MiGetPageProtection @ 0x1400C5F50 (MiGetPageProtection.c)
 *     MiResolveDemandZeroFault @ 0x1400CCE70 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1400D3150 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1400D3F30 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400DC230 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteSubsectionPages @ 0x1400DC990 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x1400DCED0 (MmPurgeSection.c)
 *     MiWalkVaRange @ 0x1400DE274 (MiWalkVaRange.c)
 *     MiSectionCreated @ 0x1400E05D0 (MiSectionCreated.c)
 *     MiCopyHeaderIfResident @ 0x1400E2B4C (MiCopyHeaderIfResident.c)
 *     MmCopyMemory @ 0x1400F48A0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1400F4DC8 (MiTranslatePageForCopy.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiHandleCollidedFault @ 0x140100C88 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 *     MiWaitForPageWriteCompletion @ 0x14011A904 (MiWaitForPageWriteCompletion.c)
 *     MiMakeImageReadOnly @ 0x140128B78 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140138800 (MiDeletePerSessionProtos.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x140141F74 (MiResolveProtoCombine.c)
 *     MiDeleteMergedPte @ 0x1401424E8 (MiDeleteMergedPte.c)
 *     MiPurgeImageSection @ 0x14015C138 (MiPurgeImageSection.c)
 *     MiReleasePageFileSectionInfo @ 0x140163980 (MiReleasePageFileSectionInfo.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiIsSubsectionClean @ 0x1402B9A44 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1402B9FD8 (MiPurgeSubsection.c)
 *     MiLockDriverPageRange @ 0x1402BD4B4 (MiLockDriverPageRange.c)
 *     MiInitializeDynamicPfns @ 0x1402BDEDC (MiInitializeDynamicPfns.c)
 *     MiReplaceLockedPage @ 0x1402CA5B0 (MiReplaceLockedPage.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CAE80 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CB23C (MiCopyImageExtentContents.c)
 *     MiEliminateStaleExtents @ 0x1402CB8E8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1402CB9CC (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402CCC18 (MiPurgeFileOnlyPfn.c)
 *     MiInsertLargeVadMapping @ 0x1402D2A70 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x1402DEA90 (MiInitializeProtoPfn.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageCharge @ 0x140054610 (MiRemoveLockedPageCharge.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockProtoPoolPage(ULONG_PTR a1, unsigned __int8 a2)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_BYTE *)(a1 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(a1) )
    MiPfnReferenceCountIsZero(a1, (__int64)(a1 + 0x58000000000LL) / 48);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = a2;
    __writecr8(a2);
  }
  return result;
}
