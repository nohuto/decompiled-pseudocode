/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x140763A70
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmEndHighPerfRequest @ 0x140177AE8 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1401785A0 (PpmBeginHighPerfRequest.c)
 *     PpmReinitializeHeteroEngine @ 0x14074E4A8 (PpmReinitializeHeteroEngine.c)
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
