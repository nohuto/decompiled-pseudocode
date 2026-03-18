/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x140066860
 * Callers:
 *     MiDereferenceControlAreaFile @ 0x140009C6C (MiDereferenceControlAreaFile.c)
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     MiEmptyPageAccessLog @ 0x14001C930 (MiEmptyPageAccessLog.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BD90 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D9E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     MiLogPageAccess @ 0x14004DA40 (MiLogPageAccess.c)
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     ExDeleteResourceLite @ 0x140079400 (ExDeleteResourceLite.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14007FEF4 (CcDereferenceSharedCacheMapFileObject.c)
 *     IopDeleteFileObjectExtension @ 0x1400840D0 (IopDeleteFileObjectExtension.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MmFreeAccessPfnBuffer @ 0x140098114 (MmFreeAccessPfnBuffer.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400A7AE0 (IoSetDiskIoAttributionFromThread.c)
 *     IoReferenceIoAttributionFromThread @ 0x1400A9B1C (IoReferenceIoAttributionFromThread.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400D8290 (MiMakeSystemCacheRangeValid.c)
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     MmChangeSectionBackingFile @ 0x14012F890 (MmChangeSectionBackingFile.c)
 *     PfpServiceMainThreadUnboost @ 0x14015E710 (PfpServiceMainThreadUnboost.c)
 *     PfpScenCtxScenarioSet @ 0x14059E480 (PfpScenCtxScenarioSet.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     CmpDelayedDerefKeys @ 0x14062D75C (CmpDelayedDerefKeys.c)
 *     CmpCleanupTransactionState @ 0x140699E24 (CmpCleanupTransactionState.c)
 *     CmpRunDownCmRM @ 0x14069B940 (CmpRunDownCmRM.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     CmpFreePostBlock @ 0x1406D1ECC (CmpFreePostBlock.c)
 *     ObpDeleteDirectoryObject @ 0x1406E93D0 (ObpDeleteDirectoryObject.c)
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14070E208 (MiObtainSectionForDriver.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1407299C4 (PfpServiceMainThreadBoostPrep.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140885460 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D86C (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140128484 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDelete(PVOID Object)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  BugCheckParameter4 = v2 - 1;
  if ( v3 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}
