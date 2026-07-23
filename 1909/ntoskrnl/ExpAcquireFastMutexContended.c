/*
 * XREFs of ExpAcquireFastMutexContended @ 0x1400EF620
 * Callers:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     FsRtlAcquireHeaderMutex @ 0x14003F260 (FsRtlAcquireHeaderMutex.c)
 *     FsRtlCheckOplockEx @ 0x1400465C0 (FsRtlCheckOplockEx.c)
 *     CcSetDirtyInMask @ 0x14006F190 (CcSetDirtyInMask.c)
 *     CcUnpinFileDataEx @ 0x140079100 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x140079B20 (CcSetDirtyPinnedData.c)
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     CcPinFileData @ 0x1400B4650 (CcPinFileData.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1400C6B90 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x1400EE400 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x1400EEBA0 (FsRtlReleaseEofLock.c)
 *     KeAcquireGuardedMutex @ 0x1400EF450 (KeAcquireGuardedMutex.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F8430 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1400EFB30 (KeAbPreWait.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(ULONG_PTR BugCheckParameter2, PRTL_BALANCED_NODE Node)
{
  int v2; // ebp
  int v5; // esi
  __int64 result; // rax
  int v7; // ett
  int v8; // ett

  ++*(_DWORD *)(BugCheckParameter2 + 16);
  v2 = 1;
  v5 = 4;
LABEL_2:
  LODWORD(result) = *(_DWORD *)BugCheckParameter2;
  do
  {
    while ( (result & 1) == 0 )
    {
      v8 = result;
      LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, result + v5, result);
      if ( v8 == (_DWORD)result )
      {
        if ( Node )
          KeAbPreWait(Node);
        KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)BugCheckParameter2);
        v2 = 3;
        v5 = 2;
        if ( Node )
          Node = KeAbPreAcquire(BugCheckParameter2, Node, 0);
        goto LABEL_2;
      }
    }
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)BugCheckParameter2,
                             v2 ^ result,
                             result);
  }
  while ( v7 != (_DWORD)result );
  return result;
}
