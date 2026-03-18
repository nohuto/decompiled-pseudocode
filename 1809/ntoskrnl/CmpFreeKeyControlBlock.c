/*
 * XREFs of CmpFreeKeyControlBlock @ 0x140692C14
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405A942C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     CmpWalkOneLevel @ 0x1405D4560 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1405D5EB0 (CmpCreateKeyControlBlock.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D7CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpUnlockKcb @ 0x1405E3580 (CmpUnlockKcb.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E5320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpUnlockKcbStack @ 0x1406440E0 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406441C0 (CmpDereferenceKeyControlBlock.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x140692B3C (CmpCleanUpKCBCacheTable.c)
 *     CmpCloneToUnbackedKcb @ 0x1407F0AD0 (CmpCloneToUnbackedKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F12DC (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v1; // rsi
  void *v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int16 v5; // di
  _QWORD *v6; // rax
  _DWORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rdx

  _InterlockedDecrement64(&CmPerfCounters);
  v1 = (_QWORD *)(BugCheckParameter2 + 112);
  if ( (_QWORD *)*v1 != v1 )
    KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 0LL, 0LL);
  v3 = *(void **)(BugCheckParameter2 + 192);
  if ( (unsigned __int64)v3 >= 2 )
    ExFreePoolWithTag(v3, 0x624E4D43u);
  v4 = *(_QWORD *)(BugCheckParameter2 + 288);
  if ( (v4 & 1) != 0 )
    v4 &= ~1uLL;
  v5 = 0;
  if ( v4 )
    CmpFreeTransientPoolWithTag((void *)v4, 0x624E4D43u);
  if ( (*(_DWORD *)(BugCheckParameter2 + 4) & 0x10000) != 0 )
  {
    _InterlockedDecrement64(qword_14096EB40);
    _InterlockedAdd64(&qword_14096EB38, 1uLL);
    ExAcquireFastMutex(&CmpAllocBucketLock);
    *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
    v6 = (_QWORD *)qword_140438028;
    if ( *(__int64 **)qword_140438028 != &CmpFreeKCBListHead )
LABEL_16:
      __fastfail(3u);
    *v1 = &CmpFreeKCBListHead;
    v7 = (_DWORD *)(BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL);
    v1[1] = v6;
    *v6 = v1;
    qword_140438028 = (__int64)v1;
    if ( ++*v7 == 13 )
    {
      do
      {
        v8 = &v7[76 * v5 + 30];
        v9 = *v8;
        if ( *(_QWORD **)(*v8 + 8LL) != v8 )
          goto LABEL_16;
        v10 = (_QWORD *)v8[1];
        if ( (_QWORD *)*v10 != v8 )
          goto LABEL_16;
        *v10 = v9;
        ++v5;
        *(_QWORD *)(v9 + 8) = v10;
        _InterlockedDecrement64(&qword_14096EB38);
      }
      while ( v5 < 0xDu );
      CmpFreeTransientPoolWithTag(v7, 0x6C414D43u);
      _InterlockedDecrement64(&qword_14096EB30);
    }
    KeReleaseGuardedMutex(&CmpAllocBucketLock);
  }
  else
  {
    CmpFreeTransientPoolWithTag((void *)BugCheckParameter2, 0x626B4D43u);
  }
}
