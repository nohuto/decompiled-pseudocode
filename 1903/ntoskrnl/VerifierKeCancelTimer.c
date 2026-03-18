/*
 * XREFs of VerifierKeCancelTimer @ 0x140977F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeCancelTimer()
{
  return ((__int64 (*)(void))pXdvKeCancelTimer)();
}
