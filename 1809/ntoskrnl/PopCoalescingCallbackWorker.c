/*
 * XREFs of PopCoalescingCallbackWorker @ 0x14086C780
 * Callers:
 *     <none>
 * Callees:
 *     PoIssueCoalescingNotification @ 0x1402DB940 (PoIssueCoalescingNotification.c)
 *     PopCoalescingSetActiveState @ 0x1402DBA80 (PopCoalescingSetActiveState.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 */

__int64 PopCoalescingCallbackWorker()
{
  int v0; // edx

  while ( 1 )
  {
    PopAcquirePolicyLock();
    if ( (PopCoalescingState & 2) != 0 )
      break;
    if ( (PopCoalescingState & 1) == 0 )
      goto LABEL_9;
    PopCoalescingSetActiveState(0);
    PopReleasePolicyLock();
    v0 = 2;
LABEL_8:
    PoIssueCoalescingNotification(PopCoalescingRegistration, v0);
  }
  if ( (PopCoalescingState & 1) == 0 )
  {
    PopCoalescingState &= ~4u;
    PopCoalescingSetActiveState(1);
    PopReleasePolicyLock();
    v0 = 1;
    goto LABEL_8;
  }
  if ( (PopCoalescingState & 4) != 0 )
  {
    PopCoalescingState &= ~4u;
    PopReleasePolicyLock();
    v0 = 3;
    goto LABEL_8;
  }
LABEL_9:
  PopCoalescingState &= ~8u;
  return PopReleasePolicyLock();
}
