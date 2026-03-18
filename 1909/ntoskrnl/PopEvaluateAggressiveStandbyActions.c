/*
 * XREFs of PopEvaluateAggressiveStandbyActions @ 0x1408A4938
 * Callers:
 *     PdcPoCsEnterExitReason @ 0x1408AAFC0 (PdcPoCsEnterExitReason.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408ACAB4 (PopDiagStopCsSleepStudySession.c)
 * Callees:
 *     PopIsUserInitiatedMonitorRequestReason @ 0x1402F1708 (PopIsUserInitiatedMonitorRequestReason.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopNetSetConnectivityConstraint @ 0x14075F774 (PopNetSetConnectivityConstraint.c)
 *     PopNetCheckOpportunisticDs @ 0x1408B3774 (PopNetCheckOpportunisticDs.c)
 *     PopNetClearConnectivityConstraint @ 0x1408B37AC (PopNetClearConnectivityConstraint.c)
 */

__int64 __fastcall PopEvaluateAggressiveStandbyActions(char a1)
{
  int v2; // ecx
  unsigned int v3; // ebx

  PopAcquirePolicyLock();
  if ( !a1 )
  {
    PopNetClearConnectivityConstraint(1LL);
    PopNetClearConnectivityConstraint(7LL);
    PopAggressiveStandbyAppliedActions = 0;
    goto LABEL_18;
  }
  if ( !dword_140443A78 )
  {
    v2 = 1;
LABEL_6:
    PopNetSetConnectivityConstraint(v2);
    if ( dword_140443A7C == 1 && !byte_140443A6D )
    {
      if ( (PopAggressiveStandbyEnabledActions & 1) != 0 )
        PopAggressiveStandbyAppliedActions |= 1u;
      if ( (PopAggressiveStandbyEnabledActions & 2) != 0 )
        PopAggressiveStandbyAppliedActions |= 2u;
    }
    goto LABEL_12;
  }
  if ( (unsigned __int8)PopNetCheckOpportunisticDs() )
  {
    v2 = 7;
    goto LABEL_6;
  }
LABEL_12:
  if ( (PopAggressiveStandbyEnabledActions & 4) != 0 )
    PopAggressiveStandbyAppliedActions |= 4u;
  if ( (PopAggressiveStandbyEnabledActions & 8) != 0 && PopIsUserInitiatedMonitorRequestReason(PopPdcLastCsEnterReason) )
    PopAggressiveStandbyAppliedActions |= 8u;
LABEL_18:
  v3 = PopAggressiveStandbyAppliedActions;
  PopReleasePolicyLock();
  return v3;
}
