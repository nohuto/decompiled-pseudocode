/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x14015FB18
 * Callers:
 *     IoReuseIrp @ 0x1400DF770 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x14015FAE0 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x14027EEE4 (IopInitActivityIdIrp.c)
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
