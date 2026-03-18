/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x14012CEF4
 * Callers:
 *     CcUnmapVacbArray @ 0x1400798E0 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x14012C9A4 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x14026A4D4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14026A6A0 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026A9AC (CcUnmapInactiveViewsInternal.c)
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
