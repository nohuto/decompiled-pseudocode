/*
 * XREFs of PopFxQueueWorkOrder @ 0x140100530
 * Callers:
 *     PopFxIdleComponent @ 0x1400FED8C (PopFxIdleComponent.c)
 *     PopFxRequestWorker @ 0x1401004C0 (PopFxRequestWorker.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1401784E0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402D8818 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1402D8A5C (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x1400D1780 (ExTryQueueWorkItem.c)
 *     KeInsertQueue @ 0x1400DD080 (KeInsertQueue.c)
 *     PopFxAddRefDevice @ 0x1400FE348 (PopFxAddRefDevice.c)
 */

signed __int32 __fastcall PopFxQueueWorkOrder(
        PRKQUEUE Queue,
        PLIST_ENTRY Entry,
        struct _IO_REMOVE_LOCK *BugCheckParameter2,
        char a4)
{
  signed __int32 result; // eax

  result = _InterlockedIncrement((volatile signed __int32 *)&Entry[2]);
  if ( result == 1 )
  {
    if ( BugCheckParameter2 )
      PopFxAddRefDevice(BugCheckParameter2);
    if ( a4 )
      return KeInsertQueue(Queue, Entry);
    result = ExTryQueueWorkItem((__int64)Entry, 0x30u);
    if ( !(_BYTE)result )
      return KeInsertQueue(Queue, Entry);
  }
  return result;
}
