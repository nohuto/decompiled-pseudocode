/*
 * XREFs of VerifierKeAcquireGuardedMutexUnsafe @ 0x1409332B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireGuardedMutexUnsafe()
{
  return ((__int64 (*)(void))pXdvKeAcquireGuardedMutexUnsafe)();
}
