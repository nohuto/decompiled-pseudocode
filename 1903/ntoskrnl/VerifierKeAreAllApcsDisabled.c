/*
 * XREFs of VerifierKeAreAllApcsDisabled @ 0x140970C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAreAllApcsDisabled()
{
  return ((__int64 (*)(void))pXdvKeAreAllApcsDisabled)();
}
