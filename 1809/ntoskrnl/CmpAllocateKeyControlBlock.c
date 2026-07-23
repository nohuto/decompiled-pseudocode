/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x1405D775C
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmpCloneToUnbackedKcb @ 0x1407F1CB0 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 CmpAllocateKeyControlBlock()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rbx
  _DWORD *TransientPoolWithTag; // rax
  unsigned __int16 v5; // r8
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  _DWORD *v9; // rax

  _InterlockedAdd64(&CmPerfCounters, 1uLL);
  if ( CmpAllocInited )
  {
    ExAcquireFastMutex(&CmpAllocBucketLock);
LABEL_3:
    v0 = CmpFreeKCBListHead;
    if ( (__int64 *)CmpFreeKCBListHead != &CmpFreeKCBListHead )
    {
      v1 = *(_QWORD *)CmpFreeKCBListHead;
      if ( *(__int64 **)(CmpFreeKCBListHead + 8) == &CmpFreeKCBListHead && *(_QWORD *)(v1 + 8) == CmpFreeKCBListHead )
      {
        CmpFreeKCBListHead = *(_QWORD *)CmpFreeKCBListHead;
        v2 = v0 - 112;
        *(_QWORD *)(v1 + 8) = &CmpFreeKCBListHead;
        --*(_DWORD *)(v2 & 0xFFFFFFFFFFFFF000uLL);
        KeReleaseGuardedMutex(&CmpAllocBucketLock);
        _InterlockedAdd64(qword_14096FB40, 1uLL);
        _InterlockedDecrement64(&qword_14096FB38);
        memset((void *)v2, 0, 0x130uLL);
        *(_DWORD *)(v2 + 4) |= 0x10000u;
        return v2;
      }
LABEL_16:
      __fastfail(3u);
    }
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x1000uLL, 0x6C414D43u);
    if ( TransientPoolWithTag )
    {
      _InterlockedAdd64(&qword_14096FB30, 1uLL);
      *TransientPoolWithTag = 13;
      v5 = 0;
      while ( 1 )
      {
        v6 = 76LL * v5;
        v7 = &TransientPoolWithTag[v6 + 30];
        TransientPoolWithTag[v6 + 3] |= 0x10000u;
        v8 = (_QWORD *)qword_1404390E8;
        if ( *(__int64 **)qword_1404390E8 != &CmpFreeKCBListHead )
          goto LABEL_16;
        *v7 = &CmpFreeKCBListHead;
        v7[1] = v8;
        *v8 = v7;
        qword_1404390E8 = (__int64)v7;
        _InterlockedAdd64(&qword_14096FB38, 1uLL);
        if ( ++v5 >= 0xDu )
          goto LABEL_3;
      }
    }
    KeReleaseGuardedMutex(&CmpAllocBucketLock);
  }
  v9 = CmpAllocateTransientPoolWithTag(PagedPool, 0x130uLL, 0x626B4D43u);
  v2 = (__int64)v9;
  if ( v9 )
  {
    memset(v9, 0, 0x130uLL);
    *(_DWORD *)(v2 + 4) &= ~0x10000u;
  }
  return v2;
}
