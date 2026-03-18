/*
 * XREFs of VerifierKeResetEvent @ 0x140978A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeResetEvent()
{
  return ((__int64 (*)(void))pXdvKeResetEvent)();
}
