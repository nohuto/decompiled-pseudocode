/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x140077218
 * Callers:
 *     CcGetVacbMiss @ 0x140076EB0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14007A300 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x140130794 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x14027DDB4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14027DF7C (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E314 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  ExReleasePushLockEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
  if ( a1 )
    KeReleaseGuardedMutex(a2 + 5);
}
