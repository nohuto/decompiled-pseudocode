/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1400B1150
 * Callers:
 *     PopFxAddLogEntry @ 0x1400B1094 (PopFxAddLogEntry.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140111FE4 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     KiInterruptDispatchCommon @ 0x1402B0B24 (KiInterruptDispatchCommon.c)
 *     PopDiagTraceIdleWakeSource @ 0x1402FE6AC (PopDiagTraceIdleWakeSource.c)
 *     KiCopyCountersWorker @ 0x14087FA78 (KiCopyCountersWorker.c)
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
