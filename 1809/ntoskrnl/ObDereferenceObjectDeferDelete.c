/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x1400C1060
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
 *     IopCompleteRequest @ 0x1400BFD10 (IopCompleteRequest.c)
 *     ExpApplyPriorityBoost @ 0x1400CEA20 (ExpApplyPriorityBoost.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400DEBC0 (IoSetDiskIoAttributionFromThread.c)
 *     IoReferenceIoAttributionFromThread @ 0x1400DF1DC (IoReferenceIoAttributionFromThread.c)
 *     MmFreeAccessPfnBuffer @ 0x1400E261C (MmFreeAccessPfnBuffer.c)
 *     MmChangeSectionBackingFile @ 0x14012F9F8 (MmChangeSectionBackingFile.c)
 *     PfpServiceMainThreadUnboost @ 0x140143350 (PfpServiceMainThreadUnboost.c)
 *     PfpScenCtxScenarioSet @ 0x14056EA68 (PfpScenCtxScenarioSet.c)
 *     CmpDelayedDerefKeys @ 0x1405DC0C4 (CmpDelayedDerefKeys.c)
 *     IopSynchronousServiceTail @ 0x14063B620 (IopSynchronousServiceTail.c)
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x140680FF8 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x1406818F0 (MiObtainSectionForDriver.c)
 *     CmpRunDownCmRM @ 0x140692FB4 (CmpRunDownCmRM.c)
 *     CmpFreePostBlock @ 0x14069502C (CmpFreePostBlock.c)
 *     ObpDeleteDirectoryObject @ 0x1406C7750 (ObpDeleteDirectoryObject.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1406E22E4 (PfpServiceMainThreadBoostPrep.c)
 *     CmpCleanupTransactionState @ 0x140701C2C (CmpCleanupTransactionState.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140849F20 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408543C8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140125DD0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402D3068 (ObpPushStackInfo.c)
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
