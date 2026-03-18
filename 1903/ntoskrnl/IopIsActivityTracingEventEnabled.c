/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x1401754F8
 * Callers:
 *     IoReuseIrp @ 0x1400A7F70 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x1401754C0 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x1402939B8 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
