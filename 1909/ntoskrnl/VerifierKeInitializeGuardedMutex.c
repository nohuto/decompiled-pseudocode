/*
 * XREFs of VerifierKeInitializeGuardedMutex @ 0x140970CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeInitializeGuardedMutex)();
}
