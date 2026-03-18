/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@Z @ 0x1C015FCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C026FA70 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic(SURFREFDC *a1)
{
  SURFREFDC::vUnlock(a1);
}
