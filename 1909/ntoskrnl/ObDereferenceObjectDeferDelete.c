/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x140066AD0
 * Callers:
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     MiEmptyPageAccessLog @ 0x14001CD20 (MiEmptyPageAccessLog.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BAD0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D720 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     MiLogPageAccess @ 0x14004DAE0 (MiLogPageAccess.c)
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     ExDeleteResourceLite @ 0x1400797C0 (ExDeleteResourceLite.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400802F4 (CcDereferenceSharedCacheMapFileObject.c)
 *     IopDeleteFileObjectExtension @ 0x1400844D0 (IopDeleteFileObjectExtension.c)
 *     IoReferenceIoAttributionFromThread @ 0x140090E1C (IoReferenceIoAttributionFromThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140095080 (IoSetDiskIoAttributionFromThread.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400B8110 (MiMakeSystemCacheRangeValid.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MmFreeAccessPfnBuffer @ 0x1400D4890 (MmFreeAccessPfnBuffer.c)
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     MmChangeSectionBackingFile @ 0x140130320 (MmChangeSectionBackingFile.c)
 *     PfpServiceMainThreadUnboost @ 0x14015EDB0 (PfpServiceMainThreadUnboost.c)
 *     PfpScenCtxScenarioSet @ 0x14059E460 (PfpScenCtxScenarioSet.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     CmpDelayedDerefKeys @ 0x1406315AC (CmpDelayedDerefKeys.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     CmpRunDownCmRM @ 0x1406BA870 (CmpRunDownCmRM.c)
 *     CmpCleanupTransactionState @ 0x1406BBB5C (CmpCleanupTransactionState.c)
 *     CmpFreePostBlock @ 0x1406D113C (CmpFreePostBlock.c)
 *     ObpDeleteDirectoryObject @ 0x1406EA7F0 (ObpDeleteDirectoryObject.c)
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14070FFE8 (MiObtainSectionForDriver.c)
 *     PfpServiceMainThreadBoostPrep @ 0x14072AD34 (PfpServiceMainThreadBoostPrep.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140884C00 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D08C (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140128EA4 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
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
