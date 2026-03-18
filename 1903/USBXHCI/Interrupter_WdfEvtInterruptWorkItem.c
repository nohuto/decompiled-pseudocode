/*
 * XREFs of Interrupter_WdfEvtInterruptWorkItem @ 0x1C001F690
 * Callers:
 *     <none>
 * Callees:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001E4C4 (Interrupter_DeferredWorkProcessor.c)
 */

void __fastcall Interrupter_WdfEvtInterruptWorkItem(__int64 a1, __int64 a2)
{
  KIRQL v4; // bl

  v4 = KfRaiseIrql(2u);
  Interrupter_DeferredWorkProcessor(a1, a2, 1);
  KeLowerIrql(v4);
}
