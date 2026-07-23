/*
 * XREFs of KeAbProcessBaseIoPriorityChangeInternal @ 0x1400DF090
 * Callers:
 *     KeAbProcessBaseIoPriorityChange @ 0x1400DF054 (KeAbProcessBaseIoPriorityChange.c)
 *     IoUpdateThreadIoRateThrottle @ 0x140286D20 (IoUpdateThreadIoRateThrottle.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x140128EA8 (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChangeInternal(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 result; // rax
  __int64 v5; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  struct _KPRCB *v7; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !*(_BYTE *)(a1 + 1423) || a2 )
  {
    if ( !*(_BYTE *)(a1 + 793) || !a2 )
      goto LABEL_4;
    v5 = a1 + 1376;
    p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
  }
  else
  {
    v5 = a1 + 1384;
    p_AbPropagateBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  }
  if ( (unsigned int)KiAbThreadInsertList(a1, p_AbPropagateBoostsList, v5) )
    KiAbQueueAutoBoostDpc(CurrentPrcb);
LABEL_4:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v7 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v7);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
