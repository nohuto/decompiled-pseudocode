/*
 * XREFs of PopDiagSnapAggregatorState @ 0x1408ACA58
 * Callers:
 *     PopPowerAggregatorExecuteState @ 0x1408B22EC (PopPowerAggregatorExecuteState.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopDiagSnapAggregatorState(int a1, int a2)
{
  int v4; // eax

  PopAcquirePolicyLock();
  v4 = 0;
  if ( !qword_140467B88 || dword_140467C88 )
  {
    v4 = a2;
  }
  else
  {
    dword_140467C88 = a1;
    a1 = 0;
    dword_140467C8C = a2;
  }
  PopDiagCachedAggregatorIntent = a1;
  PopDiagCachedAggregatorAction = v4;
  return PopReleasePolicyLock();
}
