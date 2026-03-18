/*
 * XREFs of VerifierKeLeaveGuardedRegion @ 0x140970D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeLeaveGuardedRegion()
{
  return ((__int64 (*)(void))pXdvKeLeaveGuardedRegion)();
}
