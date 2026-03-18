/*
 * XREFs of PopFxQueueWorkOrder @ 0x1400E3AA8
 * Callers:
 *     PopFxIdleComponent @ 0x1400E16B0 (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140182020 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402F3844 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1402F3A80 (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x140080660 (ExTryQueueWorkItem.c)
 *     PopFxAddRefDevice @ 0x1400E0C44 (PopFxAddRefDevice.c)
 *     KeReleaseSemaphore @ 0x1401081E0 (KeReleaseSemaphore.c)
 *     ExInterlockedInsertTailList @ 0x14010A390 (ExInterlockedInsertTailList.c)
 */

LONG __fastcall PopFxQueueWorkOrder(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  LONG result; // eax

  result = _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
  if ( result == 1 )
  {
    if ( a3 )
      PopFxAddRefDevice(a3);
    result = ExTryQueueWorkItem(a2, 0x30u);
    if ( !(_BYTE)result )
    {
      ExInterlockedInsertTailList(&stru_140444490, (PLIST_ENTRY)a2, &Lock);
      return KeReleaseSemaphore(&Semaphore, 0, 1, 0);
    }
  }
  return result;
}
