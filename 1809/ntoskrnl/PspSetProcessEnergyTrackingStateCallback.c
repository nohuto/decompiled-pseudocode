/*
 * XREFs of PspSetProcessEnergyTrackingStateCallback @ 0x1406CEE60
 * Callers:
 *     <none>
 * Callees:
 *     PsUpdateComponentPower @ 0x14008F910 (PsUpdateComponentPower.c)
 */

__int64 __fastcall PspSetProcessEnergyTrackingStateCallback(void *a1, unsigned __int64 *a2)
{
  PsUpdateComponentPower(a1, 8, *a2);
  return 0LL;
}
