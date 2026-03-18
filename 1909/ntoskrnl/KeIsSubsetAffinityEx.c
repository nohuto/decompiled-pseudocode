/*
 * XREFs of KeIsSubsetAffinityEx @ 0x1402A4C00
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x14010C1C0 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x14010C230 (PpmPerfApplyDomainState.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1402EEAE4 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1402EF2C0 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmUpdateIdleDomains @ 0x1402F0570 (PpmUpdateIdleDomains.c)
 *     PsUpdateActiveProcessAffinity @ 0x1408C6120 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x1408C6858 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KeAndAffinityEx @ 0x14009E1A0 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140194E20 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v5[88]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v5, 0, 0xA8uLL);
  KeAndAffinityEx(a1, a2, v5);
  return KeIsEqualAffinityEx(a1, v5);
}
