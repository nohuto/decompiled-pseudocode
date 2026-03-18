/*
 * XREFs of MiUnlockProtoPoolPage @ 0x140055030
 * Callers:
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x14006EAA0 (MmCopyToCachedPage.c)
 *     MiCopyHeaderIfResident @ 0x14008FF40 (MiCopyHeaderIfResident.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x140093954 (MiAllocateInPageSupport.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x140097CDC (MiInitializeImageProtos.c)
 *     MiGetPageProtection @ 0x1400A5DD0 (MiGetPageProtection.c)
 *     MiResolveDemandZeroFault @ 0x1400ACCF0 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1400B1440 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1400B2FD0 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteSubsectionPages @ 0x1400BC810 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x1400BCD50 (MmPurgeSection.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 *     MiSectionCreated @ 0x1400C0450 (MiSectionCreated.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MmCopyMemory @ 0x1400C7740 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiHandleCollidedFault @ 0x1401096A8 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140109964 (MiWaitForCollidedFaultComplete.c)
 *     MiWaitForPageWriteCompletion @ 0x140118D34 (MiWaitForPageWriteCompletion.c)
 *     MiMakeImageReadOnly @ 0x140129598 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140138E9C (MiDeletePerSessionProtos.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1401424B4 (MiResolveProtoCombine.c)
 *     MiDeleteMergedPte @ 0x140142A28 (MiDeleteMergedPte.c)
 *     MiPurgeImageSection @ 0x14015C7D8 (MiPurgeImageSection.c)
 *     MiReleasePageFileSectionInfo @ 0x1401633D0 (MiReleasePageFileSectionInfo.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 *     MiIsSubsectionClean @ 0x1402B97A4 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1402B9D38 (MiPurgeSubsection.c)
 *     MiLockDriverPageRange @ 0x1402BD214 (MiLockDriverPageRange.c)
 *     MiInitializeDynamicPfns @ 0x1402BDC3C (MiInitializeDynamicPfns.c)
 *     MiReplaceLockedPage @ 0x1402CA310 (MiReplaceLockedPage.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CABE0 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CAF9C (MiCopyImageExtentContents.c)
 *     MiEliminateStaleExtents @ 0x1402CB648 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1402CB72C (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402CC978 (MiPurgeFileOnlyPfn.c)
 *     MiInsertLargeVadMapping @ 0x1402D27D0 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x1402DE7F0 (MiInitializeProtoPfn.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageCharge @ 0x1400546B0 (MiRemoveLockedPageCharge.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
