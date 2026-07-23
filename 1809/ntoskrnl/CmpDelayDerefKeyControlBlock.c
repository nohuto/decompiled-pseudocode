/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x1405D5264
 * Callers:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1405820C4 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405D40B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D532C (CmpCleanUpKcbValueCache.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405D53B8 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1407F40CC (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x1408009D8 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CmpArmDelayDerefKCBWorker @ 0x14068B2E8 (CmpArmDelayDerefKCBWorker.c)
 */

void __fastcall CmpDelayDerefKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  unsigned __int32 v1; // eax
  unsigned __int32 v3; // r8d
  char v4; // di
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  bool v7; // zf

  v1 = *(_DWORD *)BugCheckParameter2;
  while ( v1 > 1 )
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, v1 - 1, v1);
    if ( v1 == v3 )
      return;
  }
  v4 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  v5 = (_QWORD *)(BugCheckParameter2 + 216);
  if ( (_QWORD *)*v5 != v5 )
    KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 1uLL, 0LL);
  *(_BYTE *)(BugCheckParameter2 + 56) |= 1u;
  v6 = (_QWORD *)qword_140438F98;
  if ( *(__int64 **)qword_140438F98 != &CmpDelayDerefKCBListHead )
    __fastfail(3u);
  v7 = CmpDelayDerefKCBWorkItemActive == 0;
  *v5 = &CmpDelayDerefKCBListHead;
  *(_QWORD *)(BugCheckParameter2 + 224) = v6;
  *v6 = v5;
  qword_140438F98 = BugCheckParameter2 + 216;
  if ( v7 )
  {
    CmpDelayDerefKCBWorkItemActive = 1;
    v4 = 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  if ( v4 )
    CmpArmDelayDerefKCBWorker();
}
