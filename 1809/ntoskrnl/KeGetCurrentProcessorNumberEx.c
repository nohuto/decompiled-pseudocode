/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1400FE8C0
 * Callers:
 *     PopFxAddLogEntry @ 0x1400FE804 (PopFxAddLogEntry.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14012C460 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     KiInterruptDispatchCommon @ 0x140299864 (KiInterruptDispatchCommon.c)
 *     PopDiagTraceIdleWakeSource @ 0x1402E15AC (PopDiagTraceIdleWakeSource.c)
 *     KiCopyCountersWorker @ 0x140844658 (KiCopyCountersWorker.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcNumber)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ProcNumber )
  {
    ProcNumber->Group = CurrentPrcb->Group;
    *(_WORD *)&ProcNumber->Number = CurrentPrcb->GroupIndex;
  }
  return CurrentPrcb->Number;
}
