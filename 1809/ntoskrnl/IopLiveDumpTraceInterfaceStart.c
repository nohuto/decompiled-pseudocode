/*
 * XREFs of IopLiveDumpTraceInterfaceStart @ 0x140285FA4
 * Callers:
 *     DbgkpWerCleanupContext @ 0x140812A10 (DbgkpWerCleanupContext.c)
 *     IoCaptureLiveDump @ 0x14081EF84 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14081F568 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAD60 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140285B78 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceInterfaceStart()
{
  char result; // al
  int v1; // ecx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    if ( v1 )
    {
      v2 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_WRITE_DEFERRED_DATA_API_START;
      if ( v1 != 1 )
        v2 = &LIVEDUMP_EVENT_DISCARD_DEFERRED_DATA_API_START;
    }
    else
    {
      v2 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_CAPTURE_API_START;
    }
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v2, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  return result;
}
