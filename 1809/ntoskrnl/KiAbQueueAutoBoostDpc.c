/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x14010EDBC
 * Callers:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140050D60 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x1400BBF70 (PsBoostThreadIoEx.c)
 *     KiDeferredReadyThread @ 0x1400C3370 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5210 (KiDirectSwitchThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF20 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD350 (KeSetBasePriorityThread.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1400CE5D0 (KiTryUnwaitThreadWithPriority.c)
 *     ExpApplyPriorityBoost @ 0x1400CEA00 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityBoost @ 0x1400CEEC0 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF620 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1400D0D20 (KiUpdateThreadPriority.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1400D139C (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400D78CC (KiSetBasePriorityAndClearDecrement.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1400DEFF0 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     ExpBoostIoAfterAcquire @ 0x140108250 (ExpBoostIoAfterAcquire.c)
 *     KiAbThreadBoostIoPriority @ 0x14010ECF4 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
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
