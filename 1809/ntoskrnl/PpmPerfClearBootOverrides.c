/*
 * XREFs of PpmPerfClearBootOverrides @ 0x140174608
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x140719B50 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x14074E4A8 (PpmReinitializeHeteroEngine.c)
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
