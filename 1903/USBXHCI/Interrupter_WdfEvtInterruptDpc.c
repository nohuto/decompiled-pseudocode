/*
 * XREFs of Interrupter_WdfEvtInterruptDpc @ 0x1C001F550
 * Callers:
 *     <none>
 * Callees:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001E4C4 (Interrupter_DeferredWorkProcessor.c)
 */

void __fastcall Interrupter_WdfEvtInterruptDpc(__int64 a1, __int64 a2)
{
  Interrupter_DeferredWorkProcessor(a1, a2, 0);
}
