/*
 * XREFs of VerifierIoAcquireCancelSpinLock @ 0x140932730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoAcquireCancelSpinLock()
{
  return ((__int64 (*)(void))pXdvIoAcquireCancelSpinLock)();
}
