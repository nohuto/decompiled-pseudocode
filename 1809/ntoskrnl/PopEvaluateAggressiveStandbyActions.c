/*
 * XREFs of PopEvaluateAggressiveStandbyActions @ 0x140869E28
 * Callers:
 *     PdcPoCsEnterExitReason @ 0x14086FE70 (PdcPoCsEnterExitReason.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408717DC (PopDiagStopCsSleepStudySession.c)
 * Callees:
 *     PopIsUserInitiatedMonitorRequestReason @ 0x1402D7018 (PopIsUserInitiatedMonitorRequestReason.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopNetSetConnectivityConstraint @ 0x14072AA94 (PopNetSetConnectivityConstraint.c)
 *     PopNetCheckOpportunisticDs @ 0x140877E34 (PopNetCheckOpportunisticDs.c)
 *     PopNetClearConnectivityConstraint @ 0x140877E6C (PopNetClearConnectivityConstraint.c)
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
  if ( !dword_1404191D8 )
  {
    v2 = 1;
LABEL_6:
    PopNetSetConnectivityConstraint(v2);
    if ( dword_1404191DC == 1 && !byte_1404191CD )
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
