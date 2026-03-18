/*
 * XREFs of HUBBOOT_IsBootDeviceReady @ 0x1C00382B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_IsBootDeviceReady @ 0x1C002CDF4 (HUBMISC_IsBootDeviceReady.c)
 */

char __fastcall HUBBOOT_IsBootDeviceReady(__int64 a1, __int64 a2)
{
  return HUBMISC_IsBootDeviceReady(a2);
}
