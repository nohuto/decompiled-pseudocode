/*
 * XREFs of VerifierKeTryToAcquireGuardedMutex @ 0x140932750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeTryToAcquireGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeTryToAcquireGuardedMutex)();
}
