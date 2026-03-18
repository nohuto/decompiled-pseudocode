/*
 * XREFs of VerifierKeDeregisterNmiCallback @ 0x1409323D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeDeregisterNmiCallback()
{
  return ((__int64 (*)(void))pXdvKeDeregisterNmiCallback)();
}
