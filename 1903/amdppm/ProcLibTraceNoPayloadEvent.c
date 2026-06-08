/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1C001CF1C
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0002B50 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C001CF70 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C001CF9C (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C001CFC8 (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C001CFF4 (ProcLibTracePccErrata.c)
 *     ProcLibTraceControlCallback @ 0x1C001D140 (ProcLibTraceControlCallback.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTraceNoPayloadEvent(PCEVENT_DESCRIPTOR EventDescriptor)
{
  BOOLEAN result; // al

  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, EventDescriptor);
  if ( result )
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
