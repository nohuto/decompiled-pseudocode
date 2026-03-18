/*
 * XREFs of HUBMISC_DsmEventTimer @ 0x1C002A8C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMISC_DsmEventTimer(__int64 a1, __int64 a2)
{
  HUBSM_AddEvent(a2 + 504, 1002);
}
