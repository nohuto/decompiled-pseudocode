/*
 * XREFs of PspSetProcessEnergyTrackingStateCallback @ 0x1406D0100
 * Callers:
 *     <none>
 * Callees:
 *     PsUpdateComponentPower @ 0x14008F830 (PsUpdateComponentPower.c)
 */

__int64 __fastcall PspSetProcessEnergyTrackingStateCallback(void *a1, unsigned __int64 *a2)
{
  PsUpdateComponentPower(a1, 8, *a2);
  return 0LL;
}
