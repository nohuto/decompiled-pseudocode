/*
 * XREFs of PdcPoNetworkResiliency @ 0x1408AAFE0
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x140113700 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x140177F70 (PopQueueWorkItem.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopNetArmDsEvaluationTimer @ 0x1408B36A4 (PopNetArmDsEvaluationTimer.c)
 */

__int64 __fastcall PdcPoNetworkResiliency(char a1)
{
  __int64 v2; // rcx

  PopAcquirePolicyLock();
  if ( a1 )
  {
    PopNetResiliencyEngaged = 1;
    PopNetArmDsEvaluationTimer(v2, (unsigned int)_InterlockedExchange(&PopNetGracePeriodState, 1));
  }
  else
  {
    PopNetResiliencyEngaged = 0;
    KeCancelTimer2((__int64)&PopNetEvaluationTimer);
    _InterlockedExchange(&PopNetGracePeriodState, 0);
    PopQueueWorkItem((__int64)&unk_140438B08, DelayedWorkQueue);
  }
  return PopReleasePolicyLock();
}
