/*
 * XREFs of VerifierKeAcquireInterruptSpinLock @ 0x1409332D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireInterruptSpinLock()
{
  return ((__int64 (*)(void))pXdvKeAcquireInterruptSpinLock)();
}
