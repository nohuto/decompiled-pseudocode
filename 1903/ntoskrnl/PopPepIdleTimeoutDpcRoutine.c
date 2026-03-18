/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x1402F9810
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x14008074C (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x1402F8FD8 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
