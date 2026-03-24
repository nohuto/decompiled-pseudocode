/*
 * XREFs of PopEvaluateAggressiveStandbyActions @ 0x140868BC8
 * Callers:
 *     PdcPoCsEnterExitReason @ 0x14086EC10 (PdcPoCsEnterExitReason.c)
 *     PopDiagStopCsSleepStudySession @ 0x14087057C (PopDiagStopCsSleepStudySession.c)
 * Callees:
 *     PopIsUserInitiatedMonitorRequestReason @ 0x1402D6E28 (PopIsUserInitiatedMonitorRequestReason.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopNetSetConnectivityConstraint @ 0x1407298A4 (PopNetSetConnectivityConstraint.c)
 *     PopNetCheckOpportunisticDs @ 0x140876BD4 (PopNetCheckOpportunisticDs.c)
 *     PopNetClearConnectivityConstraint @ 0x140876C0C (PopNetClearConnectivityConstraint.c)
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
  if ( !dword_140418118 )
  {
    v2 = 1;
LABEL_6:
    PopNetSetConnectivityConstraint(v2);
    if ( dword_14041811C == 1 && !byte_14041810D )
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
