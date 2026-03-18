/*
 * XREFs of PpmHeteroHgsUpdateWorker @ 0x1403004F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140776088 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmHeteroHgsUpdateWorker()
{
  __int64 v0; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  LOBYTE(v0) = 1;
  PpmHeteroHgsUpdateQueued = 0;
  return PpmReinitializeHeteroEngine(v0);
}
