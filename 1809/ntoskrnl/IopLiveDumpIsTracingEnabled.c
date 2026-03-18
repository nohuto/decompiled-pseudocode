/*
 * XREFs of IopLiveDumpIsTracingEnabled @ 0x140285A78
 * Callers:
 *     IopLiveDumpTrace @ 0x140285AD0 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140285B14 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140285BE8 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140285CD4 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x140285DFC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140285EA4 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140285F04 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140285F5C (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x140285FB4 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140286010 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x1402860A4 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x1402860FC (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140578168 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IoCaptureLiveDump @ 0x14081EFA4 (IoCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

bool IopLiveDumpIsTracingEnabled()
{
  return IopLiveDumpEtwRegHandle && IopLiveDumpEtwEnabled;
}
