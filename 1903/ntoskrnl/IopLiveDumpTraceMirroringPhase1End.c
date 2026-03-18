/*
 * XREFs of IopLiveDumpTraceMirroringPhase1End @ 0x14029B3BC
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1405A8730 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14029AECC (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceMirroringPhase1End()
{
  char result; // al
  __int64 v1; // rcx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_SIZING_WORKFLOW_MIRRORING_PHASE1_END;
    if ( (*(_DWORD *)(v1 + 80) & 1) == 0 )
      v2 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_MIRRORING_PHASE1_END;
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v2, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  return result;
}
