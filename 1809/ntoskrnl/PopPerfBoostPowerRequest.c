/*
 * XREFs of PopPerfBoostPowerRequest @ 0x14071ADD0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PoLatencySensitivityHint @ 0x14013F430 (PoLatencySensitivityHint.c)
 *     PpmPerfClearBootOverrides @ 0x140174728 (PpmPerfClearBootOverrides.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14071AE2C (PpmPerfUpdateDomainPolicy.c)
 */

__int64 __fastcall PopPerfBoostPowerRequest(__int64 a1, __int64 a2, char a3)
{
  __int64 Buffer; // [rsp+68h] [rbp+20h] BYREF

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
    Buffer = 0LL;
    if ( a3 )
      PoLatencySensitivityHint(3);
    HIDWORD(Buffer) = -1;
    LODWORD(Buffer) = Buffer & 0xFFFFFFFD | (a3 != 0 ? 3 : 1);
    ZwUpdateWnfStateData(&WNF_SEB_LOW_LATENCY_POWER_REQUEST, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
  return 0LL;
}
