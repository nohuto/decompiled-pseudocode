/*
 * XREFs of VerifierKeEnterGuardedRegion @ 0x140970C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeEnterGuardedRegion()
{
  return ((__int64 (*)(void))pXdvKeEnterGuardedRegion)();
}
