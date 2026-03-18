/*
 * XREFs of VerifierKeDeregisterNmiCallback @ 0x140970C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeDeregisterNmiCallback()
{
  return ((__int64 (*)(void))pXdvKeDeregisterNmiCallback)();
}
