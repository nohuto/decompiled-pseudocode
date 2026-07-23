/*
 * XREFs of KeAbProcessEffectiveIoPriorityChange @ 0x1400D143C
 * Callers:
 *     ExpApplyPriorityBoost @ 0x1400CEAA0 (ExpApplyPriorityBoost.c)
 *     PsBoostThreadIoQoS @ 0x14010A6FC (PsBoostThreadIoQoS.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x140128EA8 (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KeAbProcessEffectiveIoPriorityChange(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KPRCB *v4; // rcx

  if ( !a2 && *(_BYTE *)(a1 + 793) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb->AbPropagateBoostsList, a1 + 1376) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v4 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v4->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v4);
    }
    __writecr8(CurrentIrql);
  }
}
