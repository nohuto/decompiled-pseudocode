/*
 * XREFs of IopLiveDumpTrace @ 0x140285BD0
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x140578890 (IopLiveDumpEndMirroringCallback.c)
 *     IoCaptureLiveDump @ 0x14081EF84 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14081F568 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAD60 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140285B78 (IopLiveDumpIsTracingEnabled.c)
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
