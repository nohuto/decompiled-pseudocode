/*
 * XREFs of HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum @ 0x1C001B930
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CheckIfDeviceProgrammingWasLost @ 0x1C002A8B0 (HUBMISC_CheckIfDeviceProgrammingWasLost.c)
 */

__int64 __fastcall HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum(__int64 a1)
{
  return HUBMISC_CheckIfDeviceProgrammingWasLost(*(_QWORD *)(a1 + 960));
}
