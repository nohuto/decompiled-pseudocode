/*
 * XREFs of IopLiveDumpTraceSystemQuiesceEnd @ 0x14029B504
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x1405A94B8 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14029AECC (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceSystemQuiesceEnd()
{
  char result; // al
  __int64 v1; // rcx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCE_END;
    if ( (*(_DWORD *)(v1 + 80) & 1) == 0 )
      v2 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCE_END;
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v2, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  return result;
}
