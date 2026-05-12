/*
 * XREFs of PortpErrorInitDpc @ 0x1C0052FB8
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1C0076F38 (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitDpc(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 88), (PKDEFERRED_ROUTINE)PortpErrorDrainListDpc, DeferredContext);
}
