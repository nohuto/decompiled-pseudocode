/*
 * XREFs of EtwpApplyLevelKwFilter @ 0x1408C2EC4
 * Callers:
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1406483F0 (EtwpWriteUserEvent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpApplyLevelKwFilterInner @ 0x1405847DC (EtwpApplyLevelKwFilterInner.c)
 */

char __fastcall EtwpApplyLevelKwFilter(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, char a5)
{
  unsigned __int8 CurrentIrql; // bl
  char v6; // di
  unsigned __int8 v7; // r11
  struct _KPRCB *CurrentPrcb; // rcx

  if ( !a5 )
    return EtwpApplyLevelKwFilterInner(a1, a2, a3, a4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v6 = EtwpApplyLevelKwFilterInner(a1, a2, a3, a4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= v7 && CurrentIrql < v7 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v6;
}
