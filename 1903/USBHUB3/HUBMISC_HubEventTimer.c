/*
 * XREFs of HUBMISC_HubEventTimer @ 0x1C002A8A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMISC_HubEventTimer(__int64 a1, __int64 a2)
{
  HUBSM_AddEvent(a2 + 1264, 1002);
}
