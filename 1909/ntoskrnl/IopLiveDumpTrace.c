/*
 * XREFs of IopLiveDumpTrace @ 0x14029AC90
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1405A8710 (IopLiveDumpEndMirroringCallback.c)
 *     IoCaptureLiveDump @ 0x140858644 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140858C90 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14029AC2C (IopLiveDumpIsTracingEnabled.c)
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
