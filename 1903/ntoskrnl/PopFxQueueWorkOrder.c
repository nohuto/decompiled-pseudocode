/*
 * XREFs of PopFxQueueWorkOrder @ 0x1400B2F60
 * Callers:
 *     PopFxIdleComponent @ 0x1400B15C0 (PopFxIdleComponent.c)
 *     PopFxRequestWorker @ 0x1400B2EF0 (PopFxRequestWorker.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140181930 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402F3AE4 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1402F3D28 (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x140080260 (ExTryQueueWorkItem.c)
 *     PopFxAddRefDevice @ 0x1400B0B54 (PopFxAddRefDevice.c)
 *     KeInsertQueue @ 0x14012D860 (KeInsertQueue.c)
 */

signed __int32 __fastcall PopFxQueueWorkOrder(PRKQUEUE Queue, PLIST_ENTRY Entry, ULONG_PTR BugCheckParameter2, char a4)
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
