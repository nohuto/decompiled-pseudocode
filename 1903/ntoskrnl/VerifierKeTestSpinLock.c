/*
 * XREFs of VerifierKeTestSpinLock @ 0x140970FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeTestSpinLock()
{
  return ((__int64 (*)(void))pXdvKeTestSpinLock)();
}
