/*
 * XREFs of HUBPSM30_CreatingDeviceInConnectedWithResetInProgress @ 0x1C000FD30
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CreateNewDSM @ 0x1C002D068 (HUBMISC_CreateNewDSM.c)
 */

__int64 __fastcall HUBPSM30_CreatingDeviceInConnectedWithResetInProgress(__int64 a1)
{
  return HUBMISC_CreateNewDSM(*(_QWORD *)(a1 + 960));
}
