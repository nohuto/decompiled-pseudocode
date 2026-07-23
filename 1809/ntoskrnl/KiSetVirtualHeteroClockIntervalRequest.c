/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequest @ 0x140299858
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x1402981E4 (KeUpdatePendingQosRequest.c)
 *     KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x140299930 (KiSetVirtualHeteroClockIntervalRequestDpcRoutine.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x1400FD1E8 (KiSendClockInterruptToClockOwner.c)
 *     KiSetClockInterval @ 0x14012EBC8 (KiSetClockInterval.c)
 *     KiResetClockInterval @ 0x140190D2C (KiResetClockInterval.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequest(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( a1 )
  {
    if ( byte_140406008 )
      KiResetClockInterval(&KiVirtualHeteroClockRequest);
  }
  else if ( !byte_140406008 && KiQosHysteresisTimerPeriod )
  {
    KiSetClockInterval(KiQosHysteresisTimerPeriod, 0, (__int64)&KiVirtualHeteroClockRequest);
    KiSendClockInterruptToClockOwner();
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
