/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x140077028
 * Callers:
 *     CcGetVacbMiss @ 0x140076C40 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x140079F40 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x14012FC04 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x14027E054 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14027E21C (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E5B4 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CcAcquireBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  if ( a1 )
    ExAcquireFastMutex(a2 + 5);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
}
