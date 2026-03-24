/*
 * XREFs of VerifierKeAcquireGuardedMutexUnsafe @ 0x1409322B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireGuardedMutexUnsafe()
{
  return ((__int64 (*)(void))pXdvKeAcquireGuardedMutexUnsafe)();
}
