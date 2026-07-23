/*
 * XREFs of MiUnlockProtoPoolPage @ 0x14002F1F0
 * Callers:
 *     MiHandleCollidedFault @ 0x140003C24 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x14002C548 (MiAllocateInPageSupport.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x14003B680 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiGetPageProtection @ 0x14003FFE0 (MiGetPageProtection.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140046D50 (MiResolveDemandZeroFault.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiResolveProtoCombine @ 0x14007BF64 (MiResolveProtoCombine.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080930 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiSectionCreated @ 0x140092660 (MiSectionCreated.c)
 *     MiCopyHeaderIfResident @ 0x140092DB0 (MiCopyHeaderIfResident.c)
 *     MiInitializeImageProtos @ 0x1400930D8 (MiInitializeImageProtos.c)
 *     MiWalkVaRange @ 0x140093BD0 (MiWalkVaRange.c)
 *     MiDeleteSubsectionPages @ 0x140094EC0 (MiDeleteSubsectionPages.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 *     MmCopyMemory @ 0x1400EA8F0 (MmCopyMemory.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiWaitForPageWriteCompletion @ 0x1400F9B74 (MiWaitForPageWriteCompletion.c)
 *     MiDeleteMergedPte @ 0x14011FC90 (MiDeleteMergedPte.c)
 *     MiMakeImageReadOnly @ 0x1401293E8 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x1401370A4 (MiDeletePerSessionProtos.c)
 *     MiConvertStandbyToProto @ 0x14013EB50 (MiConvertStandbyToProto.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 *     MiReleasePageFileSectionInfo @ 0x140157D9C (MiReleasePageFileSectionInfo.c)
 *     MiPurgeImageSection @ 0x140176720 (MiPurgeImageSection.c)
 *     MiReplaceLockedPage @ 0x14018B174 (MiReplaceLockedPage.c)
 *     MiIsSubsectionClean @ 0x1402A2884 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1402A2E18 (MiPurgeSubsection.c)
 *     MiInitializeDynamicPfns @ 0x1402A68F4 (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x1402B5DE0 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1402B5EB4 (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402B6B98 (MiPurgeFileOnlyPfn.c)
 *     MiInsertLargeVadMapping @ 0x1402BC424 (MiInsertLargeVadMapping.c)
 *     MiMakeImagePageOk @ 0x1402C47EC (MiMakeImagePageOk.c)
 *     MiInitializeProtoPfn @ 0x1402C4D4C (MiInitializeProtoPfn.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 * Callees:
 *     MiRemoveLockedPageCharge @ 0x1400304A0 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockProtoPoolPage(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v8);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_BYTE *)(a1 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(a1) )
    MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48, v4, v5);
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
