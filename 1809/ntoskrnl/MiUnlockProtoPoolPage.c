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
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MiResolveProtoCombine @ 0x14007BF74 (MiResolveProtoCombine.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080940 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiSectionCreated @ 0x140092720 (MiSectionCreated.c)
 *     MiCopyHeaderIfResident @ 0x140092E70 (MiCopyHeaderIfResident.c)
 *     MiInitializeImageProtos @ 0x140093198 (MiInitializeImageProtos.c)
 *     MiWalkVaRange @ 0x140093C90 (MiWalkVaRange.c)
 *     MiDeleteSubsectionPages @ 0x140094F80 (MiDeleteSubsectionPages.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MmCheckCachedPageStates @ 0x1400B0290 (MmCheckCachedPageStates.c)
 *     MmPurgeSection @ 0x1400E7CE0 (MmPurgeSection.c)
 *     MiTranslatePageForCopy @ 0x1400E9C10 (MiTranslatePageForCopy.c)
 *     MmCopyMemory @ 0x1400EA850 (MmCopyMemory.c)
 *     MiStealPage @ 0x1400EBF24 (MiStealPage.c)
 *     MiWaitForPageWriteCompletion @ 0x1400F9AD4 (MiWaitForPageWriteCompletion.c)
 *     MiDeleteMergedPte @ 0x14011FC00 (MiDeleteMergedPte.c)
 *     MiMakeImageReadOnly @ 0x1401292F8 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140136F84 (MiDeletePerSessionProtos.c)
 *     MiConvertStandbyToProto @ 0x14013EA30 (MiConvertStandbyToProto.c)
 *     MiResolvePageFileFault @ 0x140154B24 (MiResolvePageFileFault.c)
 *     MiReleasePageFileSectionInfo @ 0x140157C7C (MiReleasePageFileSectionInfo.c)
 *     MiPurgeImageSection @ 0x140176600 (MiPurgeImageSection.c)
 *     MiReplaceLockedPage @ 0x14018B014 (MiReplaceLockedPage.c)
 *     MiIsSubsectionClean @ 0x1402A2594 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1402A2B28 (MiPurgeSubsection.c)
 *     MiInitializeDynamicPfns @ 0x1402A6604 (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x1402B5AF0 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1402B5BC4 (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402B68A8 (MiPurgeFileOnlyPfn.c)
 *     MiInsertLargeVadMapping @ 0x1402BC134 (MiInsertLargeVadMapping.c)
 *     MiMakeImagePageOk @ 0x1402C44FC (MiMakeImagePageOk.c)
 *     MiInitializeProtoPfn @ 0x1402C4A5C (MiInitializeProtoPfn.c)
 *     MiIdealClusterPage @ 0x1402C6B14 (MiIdealClusterPage.c)
 * Callees:
 *     MiRemoveLockedPageCharge @ 0x1400304A0 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
