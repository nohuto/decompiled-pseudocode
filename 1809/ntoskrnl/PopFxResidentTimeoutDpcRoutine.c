/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x140129780
 * Callers:
 *     <none>
 * Callees:
 *     PopFxArmResidentTimer @ 0x140100420 (PopFxArmResidentTimer.c)
 *     ExQueueWorkItemEx @ 0x1401297B4 (ExQueueWorkItemEx.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax

  result = ExQueueWorkItemEx(&PopFxResidentWorkItem, 1LL, 0xFFFFFFFFLL);
  if ( !(_BYTE)result )
    return PopFxArmResidentTimer(1);
  return result;
}
