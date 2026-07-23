/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x14012CFE4
 * Callers:
 *     CcUnmapVacbArray @ 0x1400798D0 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x14012CA94 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x14026A7C4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14026A990 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026AC9C (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CcAcquireBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  if ( a1 )
    ExAcquireFastMutex(a2 + 5);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
}
