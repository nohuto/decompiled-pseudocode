/*
 * XREFs of VerifierKeQueryPriorityThread @ 0x140933510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeQueryPriorityThread()
{
  return ((__int64 (*)(void))pXdvKeQueryPriorityThread)();
}
