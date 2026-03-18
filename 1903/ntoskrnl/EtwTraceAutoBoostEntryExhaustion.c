/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4
 * Callers:
 *     NtCancelTimer @ 0x140007A80 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140008C70 (ExpSetTimerObject.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140027570 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x14002B760 (MiCoalesceFreePages.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14003E7D0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     FsRtlCheckOplockEx @ 0x140046520 (FsRtlCheckOplockEx.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiInitializeInPageSupport @ 0x14005A7A0 (MiInitializeInPageSupport.c)
 *     CcSetDirtyInMask @ 0x14006EF20 (CcSetDirtyInMask.c)
 *     CcUnpinFileDataEx @ 0x140078D40 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x140079760 (CcSetDirtyPinnedData.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     InsertEventEntryInLookUpTable @ 0x14008A8AC (InsertEventEntryInLookUpTable.c)
 *     PfLockSharedTryAcquire @ 0x140097378 (PfLockSharedTryAcquire.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14009A150 (ExTryAcquirePushLockExclusiveEx.c)
 *     FsRtlAcquireEofLock @ 0x14009A7B0 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x14009B140 (FsRtlReleaseEofLock.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14009B6D0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquirePushLockSharedEx @ 0x14009DB40 (ExTryAcquirePushLockSharedEx.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x14009ED50 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009FE80 (MiQueueLargeFreeZeroRebuild.c)
 *     MiLockAddressSpaceToo @ 0x1400ABE04 (MiLockAddressSpaceToo.c)
 *     ExpDeleteTimer @ 0x1400B2C00 (ExpDeleteTimer.c)
 *     CcPinFileData @ 0x1400D47D0 (CcPinFileData.c)
 *     FlushLookUpTableBucket @ 0x14011362C (FlushLookUpTableBucket.c)
 *     MiTryLockVad @ 0x14013B6AC (MiTryLockVad.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14014C42C (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExpSaAllocatorAllocate @ 0x14016D53C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14016D9D4 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016DD84 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x14016E380 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14016E774 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14016EB78 (ExpSaPageGroupDescriptorFree.c)
 *     IopProcessIoTracking @ 0x14029AAD8 (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x1402EBFE8 (MiProcessTransitionHeatBatch.c)
 *     ExGetWakeTimerList @ 0x14033B5D0 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14033C5F0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x14033D1D0 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14033D600 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x14033E070 (ExpSvmDereferenceDevice.c)
 *     WheaInitialize @ 0x140A02E24 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A19598 (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x140A3BB74 (KiForceSymbolReferences.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14001D360 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
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
