/*
 * XREFs of HUBPSM20_CancellingDisableOnHubStopSuspend @ 0x1C000EAF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_CancelControlTransfer @ 0x1C0003BEC (HUBHTX_CancelControlTransfer.c)
 */

__int64 __fastcall HUBPSM20_CancellingDisableOnHubStopSuspend(__int64 a1)
{
  HUBHTX_CancelControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
