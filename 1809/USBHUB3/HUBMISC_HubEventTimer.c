/*
 * XREFs of HUBMISC_HubEventTimer @ 0x1C0028570
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMISC_HubEventTimer(__int64 a1, __int64 a2)
{
  HUBSM_AddEvent(a2 + 1264, 1002);
}
