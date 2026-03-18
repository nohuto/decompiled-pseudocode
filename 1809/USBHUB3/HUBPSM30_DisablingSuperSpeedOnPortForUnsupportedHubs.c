/*
 * XREFs of HUBPSM30_DisablingSuperSpeedOnPortForUnsupportedHubs @ 0x1C000FD00
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer @ 0x1C00061EC (HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer.c)
 */

__int64 __fastcall HUBPSM30_DisablingSuperSpeedOnPortForUnsupportedHubs(__int64 a1)
{
  HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
