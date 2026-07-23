/*
 * XREFs of PdcPoNetworkResiliency @ 0x14086FE90
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x1400FAFF0 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopNetArmDsEvaluationTimer @ 0x140877D64 (PopNetArmDsEvaluationTimer.c)
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
    PopQueueWorkItem((__int64)&unk_140411328, DelayedWorkQueue);
  }
  return PopReleasePolicyLock();
}
