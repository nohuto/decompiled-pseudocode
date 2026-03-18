/*
 * XREFs of PspSetProcessEnergyTrackingStateCallback @ 0x1406EF280
 * Callers:
 *     <none>
 * Callees:
 *     PsUpdateComponentPower @ 0x1400EA990 (PsUpdateComponentPower.c)
 */

__int64 __fastcall PspSetProcessEnergyTrackingStateCallback(struct _KPROCESS *a1, unsigned __int64 *a2)
{
  PsUpdateComponentPower(a1, 8, *a2);
  return 0LL;
}
