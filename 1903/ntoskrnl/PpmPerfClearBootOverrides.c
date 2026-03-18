/*
 * XREFs of PpmPerfClearBootOverrides @ 0x14017D844
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x140743070 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140772AA8 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmPerfClearBootOverrides()
{
  __int64 result; // rax

  result = 0LL;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    PpmPerfBootHeteroPolicyOverrideEnabled = 0;
    if ( PopHeteroSystem )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      return PpmReinitializeHeteroEngine(0LL);
    }
  }
  return result;
}
