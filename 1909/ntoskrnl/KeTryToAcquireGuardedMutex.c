/*
 * XREFs of KeTryToAcquireGuardedMutex @ 0x140109C30
 * Callers:
 *     <none>
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x140109C50 (ExTryToAcquireFastMutex.c)
 */

BOOLEAN __stdcall KeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  return ExTryToAcquireFastMutex(Mutex);
}
