/*
 * XREFs of VerifierKeEnterGuardedRegion @ 0x1409333F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeEnterGuardedRegion()
{
  return ((__int64 (*)(void))pXdvKeEnterGuardedRegion)();
}
