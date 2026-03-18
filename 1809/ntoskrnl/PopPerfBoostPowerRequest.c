/*
 * XREFs of PopPerfBoostPowerRequest @ 0x140719B50
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PoLatencySensitivityHint @ 0x14013F310 (PoLatencySensitivityHint.c)
 *     PpmPerfClearBootOverrides @ 0x140174608 (PpmPerfClearBootOverrides.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140719BAC (PpmPerfUpdateDomainPolicy.c)
 */

__int64 __fastcall PopPerfBoostPowerRequest(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  if ( !a3 )
    PpmPerfClearBootOverrides();
  if ( (MEMORY[0x7FFE02D0] & 0x10000) == 0
    && (BYTE5(PopCapabilities) || *(_WORD *)((char *)&PopCapabilities + 3) || BYTE6(PopCapabilities)) )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = a3 != 0;
    PpmPerfUpdateDomainPolicy(0LL);
  }
  else
  {
    v5 = 0LL;
    if ( a3 )
      PoLatencySensitivityHint(3);
    HIDWORD(v5) = -1;
    LODWORD(v5) = v5 & 0xFFFFFFFD | (a3 != 0 ? 3 : 1);
    ZwUpdateWnfStateData((__int64)&WNF_SEB_LOW_LATENCY_POWER_REQUEST, (__int64)&v5, 8LL);
  }
  return 0LL;
}
