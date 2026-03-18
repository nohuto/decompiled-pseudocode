/*
 * XREFs of PopPerfBoostPowerRequest @ 0x140743070
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PoLatencySensitivityHint @ 0x14015BB80 (PoLatencySensitivityHint.c)
 *     PpmPerfClearBootOverrides @ 0x14017D844 (PpmPerfClearBootOverrides.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14074311C (PpmPerfUpdateDomainPolicy.c)
 */

__int64 __fastcall PopPerfBoostPowerRequest(__int64 a1, __int64 a2, char a3)
{
  int v3; // ebx
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( a3 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = 1;
    PpmPerfUpdateDomainPolicy(0LL);
    v3 = 3;
    PoLatencySensitivityHint(3);
  }
  else
  {
    PpmPerfClearBootOverrides();
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = 0;
    PpmPerfUpdateDomainPolicy(0LL);
    v3 = 1;
  }
  HIDWORD(v5) = -1;
  LODWORD(v5) = v3 | v5 & 0xFFFFFFFD;
  ZwUpdateWnfStateData((__int64)&WNF_SEB_LOW_LATENCY_POWER_REQUEST, (__int64)&v5, 8LL);
  return 0LL;
}
