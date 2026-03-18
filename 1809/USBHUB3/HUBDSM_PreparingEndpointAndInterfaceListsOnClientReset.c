/*
 * XREFs of HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset @ 0x1C001AB20
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset @ 0x1C002A7EC (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset.c)
 */

__int64 __fastcall HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset(__int64 a1)
{
  return HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset(*(_QWORD *)(a1 + 960));
}
