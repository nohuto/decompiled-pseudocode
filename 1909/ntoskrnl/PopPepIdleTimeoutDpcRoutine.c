/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x1402F92C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140080B4C (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x1402F8A88 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
