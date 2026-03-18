/*
 * XREFs of VerifierKeQueryRuntimeThread @ 0x140970DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeQueryRuntimeThread()
{
  return ((__int64 (*)(void))pXdvKeQueryRuntimeThread)();
}
