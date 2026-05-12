/*
 * XREFs of PortpErrorInitDpc @ 0x1C0051E38
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1C0075F6C (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitDpc(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 88), (PKDEFERRED_ROUTINE)PortpErrorDrainListDpc, DeferredContext);
}
