/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x140077298
 * Callers:
 *     CcGetVacbMiss @ 0x140076EB0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14007A300 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x140130794 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x14027DDB4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14027DF7C (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E314 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CcAcquireBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  if ( a1 )
    ExAcquireFastMutex(a2 + 5);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
}
