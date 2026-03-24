/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x1402DD060
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x1401296E4 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x1402DC814 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
