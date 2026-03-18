/*
 * XREFs of VerifierKeAcquireInterruptSpinLock @ 0x140970B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireInterruptSpinLock()
{
  return ((__int64 (*)(void))pXdvKeAcquireInterruptSpinLock)();
}
