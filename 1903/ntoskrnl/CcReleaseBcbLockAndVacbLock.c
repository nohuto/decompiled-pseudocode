/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x140076FA8
 * Callers:
 *     CcGetVacbMiss @ 0x140076C40 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x140079F40 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x14012FC04 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x14027E054 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14027E21C (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E5B4 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  ExReleasePushLockEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
  if ( a1 )
    KeReleaseGuardedMutex(a2 + 5);
}
