/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C0076428
 * Callers:
 *     PortTraceInitTracing @ 0x1C0053230 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitDpc @ 0x1C0052FA8 (PortpErrorInitDpc.c)
 *     PortpErrorInitRecords @ 0x1C007644C (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(char *DeferredContext)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(DeferredContext);
}
