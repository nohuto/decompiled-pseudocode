/*
 * XREFs of HUBPSM20_DetachingDeviceOnCleanup @ 0x1C000ECC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_DetachDevice @ 0x1C002A9B0 (HUBMISC_DetachDevice.c)
 */

__int64 __fastcall HUBPSM20_DetachingDeviceOnCleanup(__int64 a1)
{
  HUBMISC_DetachDevice(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
