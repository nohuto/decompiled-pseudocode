/*
 * XREFs of VerifierKeAreAllApcsDisabled @ 0x140933390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAreAllApcsDisabled()
{
  return ((__int64 (*)(void))pXdvKeAreAllApcsDisabled)();
}
