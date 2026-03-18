/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674
 * Callers:
 *     NtCancelTimer @ 0x140007B10 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14000CC20 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140027960 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x14002BB50 (MiCoalesceFreePages.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14003E510 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     FsRtlCheckOplockEx @ 0x1400465C0 (FsRtlCheckOplockEx.c)
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiInitializeInPageSupport @ 0x14005A840 (MiInitializeInPageSupport.c)
 *     CcSetDirtyInMask @ 0x14006F190 (CcSetDirtyInMask.c)
 *     CcUnpinFileDataEx @ 0x140079100 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x140079B20 (CcSetDirtyPinnedData.c)
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     InsertEventEntryInLookUpTable @ 0x14008BBAC (InsertEventEntryInLookUpTable.c)
 *     CcPinFileData @ 0x1400B4650 (CcPinFileData.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1400C4F60 (MiQueueLargeFreeZeroRebuild.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1400C6B90 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400C7300 (ExTryAcquirePushLockSharedEx.c)
 *     PfLockSharedTryAcquire @ 0x1400D4698 (PfLockSharedTryAcquire.c)
 *     ExpDeleteTimer @ 0x1400E2CF0 (ExpDeleteTimer.c)
 *     MiLockAddressSpaceToo @ 0x1400E7314 (MiLockAddressSpaceToo.c)
 *     FsRtlAcquireEofLock @ 0x1400EE400 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x1400EEBA0 (FsRtlReleaseEofLock.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400EF150 (ExAcquireAutoExpandPushLockShared.c)
 *     FlushLookUpTableBucket @ 0x140112EBC (FlushLookUpTableBucket.c)
 *     MiTryLockVad @ 0x14013BCCC (MiTryLockVad.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14014CACC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExpSaAllocatorAllocate @ 0x14016DC2C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14016E0C4 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016E474 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x14016EA70 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14016EE64 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14016F268 (ExpSaPageGroupDescriptorFree.c)
 *     IopProcessIoTracking @ 0x14029A838 (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x1402EBD48 (MiProcessTransitionHeatBatch.c)
 *     ExGetWakeTimerList @ 0x14033B030 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14033C050 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x14033CC30 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14033D060 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x14033DAD0 (ExpSvmDereferenceDevice.c)
 *     WheaInitialize @ 0x140A03340 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A164A4 (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x140A3B944 (KiForceSymbolReferences.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14001D750 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 1616);
  v7 = 0;
  v3 = *(_QWORD *)(a1 + 544);
  v5 = a2;
  v6 = v2;
  v8 = &v5;
  v10 = 0;
  v9 = 16;
  return EtwTraceSiloKernelEvent(*(_QWORD *)(v3 + 1776), (int)&v8, 1, 0x20000200u, 1348, 5249538);
}
