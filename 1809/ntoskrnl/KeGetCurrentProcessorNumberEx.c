/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1400FE8A0
 * Callers:
 *     PopFxAddLogEntry @ 0x1400FE7E4 (PopFxAddLogEntry.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14012C440 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     KiInterruptDispatchCommon @ 0x140299764 (KiInterruptDispatchCommon.c)
 *     PopDiagTraceIdleWakeSource @ 0x1402E14AC (PopDiagTraceIdleWakeSource.c)
 *     KiCopyCountersWorker @ 0x140844678 (KiCopyCountersWorker.c)
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
