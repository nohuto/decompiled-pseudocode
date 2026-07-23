/*
 * XREFs of KeAndAffinityEx @ 0x1400DC780
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140063560 (PpmParkSteerInterrupts.c)
 *     PpmPerfApplyDomainStates @ 0x140063AB0 (PpmPerfApplyDomainStates.c)
 *     KiGetDeepIdleProcessors @ 0x1400DBF9C (KiGetDeepIdleProcessors.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400DC030 (KeQueryLogicalProcessorRelationship.c)
 *     PpmPerfApplyDomainState @ 0x140112990 (PpmPerfApplyDomainState.c)
 *     PpmParkReportParkedCores @ 0x140122420 (PpmParkReportParkedCores.c)
 *     KeIsSubsetAffinityEx @ 0x14028E5C0 (KeIsSubsetAffinityEx.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1402D4884 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1402D50A0 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmUpdateIdleDomains @ 0x1402D6310 (PpmUpdateIdleDomains.c)
 *     PspSetEffectiveJobLimits @ 0x1406BAC04 (PspSetEffectiveJobLimits.c)
 *     KeInitializeProfile @ 0x140845704 (KeInitializeProfile.c)
 *     PsUpdateActiveProcessAffinity @ 0x140889B20 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x14088A2B4 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall KeAndAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  _BYTE *v3; // r9
  unsigned __int16 v5; // r8
  unsigned int v6; // r10d
  unsigned __int16 v7; // cx
  __int64 v8; // r8
  bool v9; // zf
  __int64 v10; // rdx
  _BYTE v12[176]; // [rsp+0h] [rbp-C8h] BYREF

  v3 = v12;
  if ( a3 )
    v3 = a3;
  v5 = *a1;
  v6 = 0;
  v7 = 0;
  if ( v5 >= *a2 )
    v5 = *a2;
  *(_WORD *)v3 = v5;
  if ( v5 )
  {
    do
    {
      v8 = 4LL * v7;
      v9 = (*(_QWORD *)&a2[v8 + 4] & *(_QWORD *)&a1[v8 + 4]) == 0LL;
      *(_QWORD *)&v3[v8 * 2 + 8] = *(_QWORD *)&a2[v8 + 4] & *(_QWORD *)&a1[v8 + 4];
      if ( !v9 )
        v6 = 1;
      ++v7;
    }
    while ( v7 < *(_WORD *)v3 );
  }
  if ( v3 != v12 )
  {
    *((_DWORD *)v3 + 1) = 0;
    *((_WORD *)v3 + 1) = 20;
    if ( v7 < 0x14u )
    {
      do
      {
        v10 = v7++;
        *(_QWORD *)&v3[8 * v10 + 8] = 0LL;
      }
      while ( v7 < *((_WORD *)v3 + 1) );
    }
  }
  return v6;
}
