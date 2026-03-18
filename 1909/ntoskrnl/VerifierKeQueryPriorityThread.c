/*
 * XREFs of VerifierKeQueryPriorityThread @ 0x140970D90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeQueryPriorityThread()
{
  return ((__int64 (*)(void))pXdvKeQueryPriorityThread)();
}
