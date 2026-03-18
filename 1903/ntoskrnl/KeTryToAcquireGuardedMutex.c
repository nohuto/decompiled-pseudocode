/*
 * XREFs of KeTryToAcquireGuardedMutex @ 0x14009A090
 * Callers:
 *     <none>
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x14009A0B0 (ExTryToAcquireFastMutex.c)
 */

BOOLEAN __stdcall KeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  return ExTryToAcquireFastMutex(Mutex);
}
