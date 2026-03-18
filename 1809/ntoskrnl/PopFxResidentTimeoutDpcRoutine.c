/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x140129690
 * Callers:
 *     <none>
 * Callees:
 *     PopFxArmResidentTimer @ 0x140100380 (PopFxArmResidentTimer.c)
 *     ExQueueWorkItemEx @ 0x1401296C4 (ExQueueWorkItemEx.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax

  result = ExQueueWorkItemEx(&PopFxResidentWorkItem, 1LL, 0xFFFFFFFFLL);
  if ( !(_BYTE)result )
    return PopFxArmResidentTimer(1);
  return result;
}
