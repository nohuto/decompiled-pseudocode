/*
 * XREFs of ExpReleaseFastMutexContended @ 0x1400C6530
 * Callers:
 *     FsRtlReleaseHeaderMutex @ 0x14003F470 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     FsRtlCheckOplockEx @ 0x1400465C0 (FsRtlCheckOplockEx.c)
 *     CcSetDirtyInMask @ 0x14006F190 (CcSetDirtyInMask.c)
 *     CcGetDirtyPagesHelper @ 0x140078B60 (CcGetDirtyPagesHelper.c)
 *     CcUnpinFileDataEx @ 0x140079100 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x140079B20 (CcSetDirtyPinnedData.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     CcPinFileData @ 0x1400B4650 (CcPinFileData.c)
 *     FsRtlAcquireEofLock @ 0x1400EE400 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x1400EEBA0 (FsRtlReleaseEofLock.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x1401126E0 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F8430 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x1400C659C (KeSetEventBoostPriorityEx.c)
 */

__int64 __fastcall ExpReleaseFastMutexContended(volatile signed __int32 *a1, signed __int32 a2)
{
  int v3; // ecx
  bool v4; // zf
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+8h] BYREF
  int Priority; // [rsp+48h] [rbp+10h] BYREF

  do
  {
    v3 = a2 & 2;
    result = (unsigned int)_InterlockedCompareExchange(a1, a2 + (v3 != 0 ? 1 : -1), a2);
    v4 = a2 == (_DWORD)result;
    a2 = result;
  }
  while ( !v4 );
  if ( !v3 )
  {
    Priority = KeGetCurrentThread()->Priority;
    return KeSetEventBoostPriorityEx((int)a1 + 24, (unsigned int)&v6, (unsigned int)&Priority, (_DWORD)a1, 1, 1);
  }
  return result;
}
