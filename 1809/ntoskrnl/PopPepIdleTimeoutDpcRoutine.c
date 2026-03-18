/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x1402DCF60
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x1401296C4 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x1402DC714 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
