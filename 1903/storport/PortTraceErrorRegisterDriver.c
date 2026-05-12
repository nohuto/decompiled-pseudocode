/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C0075F6C
 * Callers:
 *     PortTraceInitTracing @ 0x1C00520D8 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitDpc @ 0x1C0051E38 (PortpErrorInitDpc.c)
 *     PortpErrorInitRecords @ 0x1C0075F90 (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(char *DeferredContext)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(DeferredContext);
}
