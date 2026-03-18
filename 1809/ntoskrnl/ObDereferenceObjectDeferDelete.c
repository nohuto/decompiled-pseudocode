/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x1400C1040
 * Callers:
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140022EF8 (CcDereferenceSharedCacheMapFileObject.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14004F6A0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     MiLogPageAccess @ 0x14006BDB0 (MiLogPageAccess.c)
 *     CcUnmapAndPurge @ 0x14007CA94 (CcUnmapAndPurge.c)
 *     MiEmptyPageAccessLog @ 0x140088580 (MiEmptyPageAccessLog.c)
 *     IopCompleteRequest @ 0x1400BFCF0 (IopCompleteRequest.c)
 *     ExpApplyPriorityBoost @ 0x1400CEA00 (ExpApplyPriorityBoost.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400DEBA0 (IoSetDiskIoAttributionFromThread.c)
 *     IoReferenceIoAttributionFromThread @ 0x1400DF1BC (IoReferenceIoAttributionFromThread.c)
 *     MmFreeAccessPfnBuffer @ 0x1400E25FC (MmFreeAccessPfnBuffer.c)
 *     MmChangeSectionBackingFile @ 0x14012F9D8 (MmChangeSectionBackingFile.c)
 *     PfpServiceMainThreadUnboost @ 0x140143330 (PfpServiceMainThreadUnboost.c)
 *     PfpScenCtxScenarioSet @ 0x14056EA68 (PfpScenCtxScenarioSet.c)
 *     CmpDelayedDerefKeys @ 0x1405DC0C4 (CmpDelayedDerefKeys.c)
 *     IopSynchronousServiceTail @ 0x14063B620 (IopSynchronousServiceTail.c)
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140681910 (MiObtainSectionForDriver.c)
 *     CmpRunDownCmRM @ 0x140692FD4 (CmpRunDownCmRM.c)
 *     CmpFreePostBlock @ 0x14069504C (CmpFreePostBlock.c)
 *     ObpDeleteDirectoryObject @ 0x1406C7770 (ObpDeleteDirectoryObject.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1406E2304 (PfpServiceMainThreadBoostPrep.c)
 *     CmpCleanupTransactionState @ 0x140701C4C (CmpCleanupTransactionState.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140849F40 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408543E8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140125DB0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402D2F68 (ObpPushStackInfo.c)
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
