/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x14012CEB4
 * Callers:
 *     CcGetVacbMiss @ 0x1400216E0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1400798E0 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x14012C9A4 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x14026A4D4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14026A6A0 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026A9AC (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  ExReleasePushLockEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
  if ( a1 )
    KeReleaseGuardedMutex(a2 + 5);
}
