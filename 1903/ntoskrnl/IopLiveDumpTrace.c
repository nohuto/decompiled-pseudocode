/*
 * XREFs of IopLiveDumpTrace @ 0x14029AF30
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1405A8730 (IopLiveDumpEndMirroringCallback.c)
 *     IoCaptureLiveDump @ 0x140858F44 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140859590 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14029AECC (IopLiveDumpIsTracingEnabled.c)
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
