/*
 * XREFs of HUBHSM_SignalingPnPPowerEventOnStop @ 0x1C0008870
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_SignalPnpPowerEvent @ 0x1C000C4B0 (HUBFDO_SignalPnpPowerEvent.c)
 */

__int64 __fastcall HUBHSM_SignalingPnPPowerEventOnStop(__int64 a1)
{
  HUBFDO_SignalPnpPowerEvent(*(_QWORD *)(a1 + 960));
  return 2053LL;
}
