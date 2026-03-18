/*
 * XREFs of PpmPerfClearBootOverrides @ 0x14017DF34
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x140744F70 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140776088 (PpmReinitializeHeteroEngine.c)
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
