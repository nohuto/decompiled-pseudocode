/*
 * XREFs of IopLiveDumpTrace @ 0x140285AD0
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x140578890 (IopLiveDumpEndMirroringCallback.c)
 *     IoCaptureLiveDump @ 0x14081EFA4 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14081F588 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAD40 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140285A78 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTrace()
{
  char result; // al
  const EVENT_DESCRIPTOR *v1; // rcx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v1, 0LL, 0, 0LL, 0LL, 0, 0LL);
  return result;
}
