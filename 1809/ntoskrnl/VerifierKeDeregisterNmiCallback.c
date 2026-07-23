/*
 * XREFs of VerifierKeDeregisterNmiCallback @ 0x1409333D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeDeregisterNmiCallback()
{
  return ((__int64 (*)(void))pXdvKeDeregisterNmiCallback)();
}
