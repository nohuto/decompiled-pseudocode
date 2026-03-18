/*
 * XREFs of PopPowerAggregatorEvaluateAggressiveStandbyActions @ 0x1408B21A8
 * Callers:
 *     PopPowerAggregatorExecuteState @ 0x1408B22EC (PopPowerAggregatorExecuteState.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopNetSetConnectivityConstraint @ 0x14075F774 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x1408B37AC (PopNetClearConnectivityConstraint.c)
 */

__int64 __fastcall PopPowerAggregatorEvaluateAggressiveStandbyActions(int a1, __int64 a2)
{
  int v4; // eax
  int v5; // ecx

  PopAcquirePolicyLock();
  if ( a1 == 1 )
  {
    PopNetClearConnectivityConstraint(1LL);
    PopNetClearConnectivityConstraint(7LL);
    PopAggressiveStandbyAppliedActions = 0;
    return PopReleasePolicyLock();
  }
  v4 = *(_DWORD *)(a2 + 4);
  if ( (v4 & 2) != 0 )
  {
    if ( (v4 & 4) == 0 )
      goto LABEL_8;
    v5 = 7;
  }
  else
  {
    v5 = 1;
  }
  PopNetSetConnectivityConstraint(v5);
LABEL_8:
  if ( (unsigned int)(a1 - 6) <= 1 && (PopAggressiveStandbyEnabledActions & 1) != 0 )
    PopAggressiveStandbyAppliedActions |= 1u;
  if ( (PopAggressiveStandbyEnabledActions & 4) != 0 )
    PopAggressiveStandbyAppliedActions |= 4u;
  return PopReleasePolicyLock();
}
