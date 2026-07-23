/*
 * XREFs of VerifierKeTestSpinLock @ 0x140933730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeTestSpinLock()
{
  return ((__int64 (*)(void))pXdvKeTestSpinLock)();
}
