/*
 * XREFs of VerifierKeEnterGuardedRegion @ 0x1409323F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeEnterGuardedRegion()
{
  return ((__int64 (*)(void))pXdvKeEnterGuardedRegion)();
}
