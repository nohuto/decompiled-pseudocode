/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x1401126E0
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KiUpdateThreadPriority @ 0x14000FB30 (KiUpdateThreadPriority.c)
 *     KeSetBasePriorityThread @ 0x140012110 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14003D1A0 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x14003DFD0 (PsBoostThreadIoEx.c)
 *     KiRemoveBoostThread @ 0x140043940 (KiRemoveBoostThread.c)
 *     KeInsertPriQueue @ 0x14005B2E0 (KeInsertPriQueue.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x14006BA10 (KiDirectSwitchThread.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x14007FFF0 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1400B5800 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400E45FC (KiSetBasePriorityAndClearDecrement.c)
 *     KiAbThreadBoostIoPriority @ 0x14011261C (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 */

BOOLEAN __fastcall KiAbQueueAutoBoostDpc(struct _KDPC *SystemArgument1)
{
  BOOLEAN result; // al

  if ( !SystemArgument1[402].DeferredContext )
  {
    result = KeInsertQueueDpc(SystemArgument1 + 402, SystemArgument1, 0LL);
    SystemArgument1[402].DeferredContext = (PVOID)1;
  }
  return result;
}
