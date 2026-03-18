/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x140175C28
 * Callers:
 *     IoReuseIrp @ 0x140091F90 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140175BF0 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x140293718 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
