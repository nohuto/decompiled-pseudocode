/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x140135A20
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x14008074C (ExQueueWorkItemEx.c)
 *     PopFxArmResidentTimer @ 0x1400AFE0C (PopFxArmResidentTimer.c)
 */

char PopFxResidentTimeoutDpcRoutine()
{
  char result; // al

  result = ExQueueWorkItemEx(&PopFxResidentWorkItem, 1u, 0xFFFFFFFF);
  if ( !result )
    return PopFxArmResidentTimer(1);
  return result;
}
