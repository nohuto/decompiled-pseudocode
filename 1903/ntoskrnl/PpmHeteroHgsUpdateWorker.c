/*
 * XREFs of PpmHeteroHgsUpdateWorker @ 0x140300A40
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140772AA8 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmHeteroHgsUpdateWorker()
{
  __int64 v0; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  LOBYTE(v0) = 1;
  PpmHeteroHgsUpdateQueued = 0;
  return PpmReinitializeHeteroEngine(v0);
}
