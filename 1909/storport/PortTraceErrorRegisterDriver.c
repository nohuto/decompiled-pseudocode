/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C0076F38
 * Callers:
 *     PortTraceInitTracing @ 0x1C0053258 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitDpc @ 0x1C0052FB8 (PortpErrorInitDpc.c)
 *     PortpErrorInitRecords @ 0x1C0076F5C (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(char *DeferredContext)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(DeferredContext);
}
