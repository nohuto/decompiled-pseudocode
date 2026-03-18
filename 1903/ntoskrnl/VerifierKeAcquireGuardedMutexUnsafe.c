/*
 * XREFs of VerifierKeAcquireGuardedMutexUnsafe @ 0x140970B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeAcquireGuardedMutexUnsafe()
{
  return ((__int64 (*)(void))pXdvKeAcquireGuardedMutexUnsafe)();
}
