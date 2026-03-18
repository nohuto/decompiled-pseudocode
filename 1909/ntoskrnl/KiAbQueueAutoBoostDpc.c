/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x14013062C
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KiUpdateThreadPriority @ 0x1400100B0 (KiUpdateThreadPriority.c)
 *     KeSetBasePriorityThread @ 0x140012340 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     KiRemoveBoostThread @ 0x140014690 (KiRemoveBoostThread.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C570 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14003CEE0 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x14003DD10 (PsBoostThreadIoEx.c)
 *     KeInsertPriQueue @ 0x14005B380 (KeInsertPriQueue.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x14006BC80 (KiDirectSwitchThread.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1400803F0 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400E95A8 (KiSetBasePriorityAndClearDecrement.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140101098 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbThreadBoostIoPriority @ 0x140130568 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
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
