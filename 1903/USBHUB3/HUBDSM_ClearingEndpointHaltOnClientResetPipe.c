/*
 * XREFs of HUBDSM_ClearingEndpointHaltOnClientResetPipe @ 0x1C001BD40
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C002896C (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_ClearingEndpointHaltOnClientResetPipe(__int64 a1)
{
  HUBDTX_ClearEndpointHaltUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
