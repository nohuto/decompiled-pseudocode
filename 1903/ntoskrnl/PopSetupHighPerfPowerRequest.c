/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x14078A450
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PpmEndHighPerfRequest @ 0x14018156C (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x140181EC8 (PpmBeginHighPerfRequest.c)
 *     PpmReinitializeHeteroEngine @ 0x140772AA8 (PpmReinitializeHeteroEngine.c)
 */

__int64 PopSetupHighPerfPowerRequest()
{
  int v0; // ebx

  if ( PpmHighPerfDuration[0] )
  {
    v0 = PpmBeginHighPerfRequest();
    if ( v0 >= 0 )
    {
      PpmEndHighPerfRequest(0);
      return (unsigned int)v0;
    }
  }
  else
  {
    v0 = 0;
  }
  PpmPerfBootHeteroPolicyOverrideEnabled = 0;
  if ( PopHeteroSystem )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmReinitializeHeteroEngine(0);
  }
  return (unsigned int)v0;
}
