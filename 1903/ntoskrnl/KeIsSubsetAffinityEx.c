/*
 * XREFs of KeIsSubsetAffinityEx @ 0x1402A4EA0
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x14010C910 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x14010C980 (PpmPerfApplyDomainState.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1402EED84 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1402EF560 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmUpdateIdleDomains @ 0x1402F0810 (PpmUpdateIdleDomains.c)
 *     PsUpdateActiveProcessAffinity @ 0x1408C6840 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x1408C6F78 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KeAndAffinityEx @ 0x1400BE320 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140194640 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v5[88]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v5, 0, 0xA8uLL);
  KeAndAffinityEx(a1, a2, v5);
  return KeIsEqualAffinityEx(a1, v5);
}
