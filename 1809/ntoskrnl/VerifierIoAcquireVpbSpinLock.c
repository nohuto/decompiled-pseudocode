/*
 * XREFs of VerifierIoAcquireVpbSpinLock @ 0x140931750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoAcquireVpbSpinLock()
{
  return ((__int64 (*)(void))pXdvIoAcquireVpbSpinLock)();
}
