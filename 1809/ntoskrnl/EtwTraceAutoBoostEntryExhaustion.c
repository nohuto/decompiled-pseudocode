/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x14030FA34
 * Callers:
 *     ExTryAcquirePushLockExclusiveEx @ 0x140004230 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400050F0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1400231C0 (CcSetDirtyPinnedData.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1400244A0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     MiInitializeInPageSupport @ 0x14002C6B0 (MiInitializeInPageSupport.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     MiCoalesceFreePages @ 0x1400390D0 (MiCoalesceFreePages.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14004E6D0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D1D0 (MiQueueLargeFreeZeroRebuild.c)
 *     CcPinFileData @ 0x1400AE2D0 (CcPinFileData.c)
 *     FsRtlCheckOplockEx @ 0x1400B7C80 (FsRtlCheckOplockEx.c)
 *     FsRtlAcquireEofLock @ 0x1400E1250 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x140103100 (FsRtlReleaseEofLock.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140103AB0 (ExTryAcquirePushLockSharedEx.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1400891E0 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  __int64 *v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 1600);
  v3 = *(_QWORD *)(a1 + 544);
  v5 = a2;
  v6 = v2;
  v7 = &v5;
  v9 = 0;
  v8 = 16;
  return EtwTraceSiloKernelEvent(*(_QWORD *)(v3 + 1728), (int)&v7, 1, 0x20000200u, 1348, 5249538);
}
