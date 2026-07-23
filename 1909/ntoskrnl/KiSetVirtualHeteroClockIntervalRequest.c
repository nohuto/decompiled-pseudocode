/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequest @ 0x1402B03BC
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x1402AEC04 (KeUpdatePendingQosRequest.c)
 *     KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x1402B04B0 (KiSetVirtualHeteroClockIntervalRequestDpcRoutine.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140063910 (RtlRbRemoveNode.c)
 *     KiSendClockInterruptToClockOwner @ 0x140111DF8 (KiSendClockInterruptToClockOwner.c)
 *     KiSetClockInterval @ 0x140111E80 (KiSetClockInterval.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140112380 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1401123DC (KiSetClockIntervalToMinimumRequested.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequest(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( a1 )
  {
    if ( byte_14042B4D8 )
    {
      RtlRbRemoveNode(&KiClockIntervalRequests, &KiVirtualHeteroClockRequest);
      v3 = (unsigned int)dword_14042B4E0;
      byte_14042B4D8 = 0;
      if ( dword_14042B4E0 )
        PoTraceSystemTimerResolutionKernel(0, dword_14042B4E0);
      KiSetClockIntervalToMinimumRequested(v2, v3);
    }
  }
  else if ( !byte_14042B4D8 && KiQosHysteresisTimerPeriod )
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
