/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1400E1240
 * Callers:
 *     PopFxAddLogEntry @ 0x1400E1184 (PopFxAddLogEntry.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1401116D4 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     KiInterruptDispatchCommon @ 0x1402B0884 (KiInterruptDispatchCommon.c)
 *     PopDiagTraceIdleWakeSource @ 0x1402FE15C (PopDiagTraceIdleWakeSource.c)
 *     KiCopyCountersWorker @ 0x14087F178 (KiCopyCountersWorker.c)
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
