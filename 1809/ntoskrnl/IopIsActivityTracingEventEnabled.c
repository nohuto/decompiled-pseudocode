/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x14015FC38
 * Callers:
 *     IoReuseIrp @ 0x1400DF810 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x14015FC00 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x14027F1D4 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
