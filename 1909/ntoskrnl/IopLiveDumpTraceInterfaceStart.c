/*
 * XREFs of IopLiveDumpTraceInterfaceStart @ 0x14029B064
 * Callers:
 *     DbgkpWerCleanupContext @ 0x14084BB5C (DbgkpWerCleanupContext.c)
 *     IoCaptureLiveDump @ 0x140858644 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140858C90 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14029AC2C (IopLiveDumpIsTracingEnabled.c)
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
