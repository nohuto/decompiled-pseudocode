/*
 * XREFs of VerifierKeReleaseGuardedMutex @ 0x140932570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeReleaseGuardedMutex)();
}
