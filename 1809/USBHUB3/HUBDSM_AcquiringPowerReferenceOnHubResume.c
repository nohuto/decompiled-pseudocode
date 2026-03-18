/*
 * XREFs of HUBDSM_AcquiringPowerReferenceOnHubResume @ 0x1C001A2D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_AcquireDevicePowerReference @ 0x1C000E914 (HUBMUX_AcquireDevicePowerReference.c)
 */

__int64 __fastcall HUBDSM_AcquiringPowerReferenceOnHubResume(__int64 a1)
{
  HUBMUX_AcquireDevicePowerReference(*(volatile signed __int32 **)(a1 + 960));
  return 4077LL;
}
