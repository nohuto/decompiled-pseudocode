/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x1402DD250
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x1401297B4 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x1402DCA04 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
