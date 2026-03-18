/*
 * XREFs of PoNotifySystemTimeSet @ 0x140181BFC
 * Callers:
 *     ExpSetSystemTime @ 0x140596560 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x14075F674 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14090A870 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     PopCheckForWork @ 0x1400EE334 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400EE3BC (PopGetPolicyWorker.c)
 *     ExNotifyWithProcessing @ 0x1400FA688 (ExNotifyWithProcessing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceSystemTimeChange @ 0x14059D710 (EtwTraceSystemTimeChange.c)
 */

void __fastcall PoNotifySystemTimeSet(__int64 *a1, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  if ( PsWin32CalloutsEstablished )
  {
    PopTimeChangeInfo = *a1;
    qword_140445148 = *a2;
    EtwTraceSystemTimeChange();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ExNotifyWithProcessing(ExCbSetSystemTime, 0LL, 0LL, 0LL);
    PopGetPolicyWorker(16);
    PopCheckForWork();
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
}
