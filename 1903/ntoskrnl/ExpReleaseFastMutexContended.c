/*
 * XREFs of ExpReleaseFastMutexContended @ 0x14009E6F0
 * Callers:
 *     FsRtlReleaseHeaderMutex @ 0x14003F730 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     FsRtlCheckOplockEx @ 0x140046520 (FsRtlCheckOplockEx.c)
 *     CcSetDirtyInMask @ 0x14006EF20 (CcSetDirtyInMask.c)
 *     CcGetDirtyPagesHelper @ 0x1400787A0 (CcGetDirtyPagesHelper.c)
 *     CcUnpinFileDataEx @ 0x140078D40 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x140079760 (CcSetDirtyPinnedData.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x14009A7B0 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x14009B140 (FsRtlReleaseEofLock.c)
 *     CcPinFileData @ 0x1400D47D0 (CcPinFileData.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x1401130F0 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x14009E75C (KeSetEventBoostPriorityEx.c)
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
