/*
 * XREFs of KeIsEqualAffinityEx @ 0x14018A2D0
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x140063AC0 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x140112900 (PpmPerfApplyDomainState.c)
 *     PpmParkReportMask @ 0x1401223B0 (PpmParkReportMask.c)
 *     KeIsSubsetAffinityEx @ 0x14028E2D0 (KeIsSubsetAffinityEx.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1402D4594 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1402D4DB0 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmUpdateIdleDomains @ 0x1402D6020 (PpmUpdateIdleDomains.c)
 *     PspSetEffectiveJobLimits @ 0x1406B9984 (PspSetEffectiveJobLimits.c)
 *     PpmRegisterPerfStates @ 0x14074E4DC (PpmRegisterPerfStates.c)
 *     PpmHeteroComputeRelativePerformance @ 0x14074FEEC (PpmHeteroComputeRelativePerformance.c)
 *     PsUpdateActiveProcessAffinity @ 0x1408888E0 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x140889074 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEqualAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r9
  unsigned __int16 v3; // r10
  unsigned __int16 v5; // dx

  v2 = a2;
  v3 = *a1;
  if ( *a1 >= *a2 )
  {
    v3 = *a2;
    v2 = a1;
  }
  v5 = 0;
  if ( v3 )
  {
    while ( *(_QWORD *)&a1[4 * v5 + 4] == *(_QWORD *)&a2[4 * v5 + 4] )
    {
      if ( ++v5 >= v3 )
        goto LABEL_6;
    }
    return 0LL;
  }
  else
  {
LABEL_6:
    while ( v5 < *v2 )
    {
      if ( *(_QWORD *)&v2[4 * v5 + 4] )
        return 0LL;
      ++v5;
    }
    return 1LL;
  }
}
