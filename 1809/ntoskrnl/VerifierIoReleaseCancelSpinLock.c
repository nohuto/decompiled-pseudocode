/*
 * XREFs of VerifierIoReleaseCancelSpinLock @ 0x140932F40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReleaseCancelSpinLock()
{
  return ((__int64 (*)(void))pXdvIoReleaseCancelSpinLock)();
}
