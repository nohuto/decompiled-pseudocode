/*
 * XREFs of RaidNtStatusToStorStatus @ 0x1C0021518
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0017234 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C002148C (StorPortpInvokeAcpiMethod.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C003E0DC (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorpBuildScatterGatherList @ 0x1C003FDF4 (StorpBuildScatterGatherList.c)
 *     StorpGetLogicalProcessorRelationship @ 0x1C00409AC (StorpGetLogicalProcessorRelationship.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidNtStatusToStorStatus(int a1)
{
  switch ( a1 )
  {
    case -2147483643:
      return 3238002692LL;
    case -1073741811:
      return 3238002694LL;
    case -1073741670:
      return 3238002691LL;
    case -1073741496:
      return 3238002696LL;
  }
  if ( a1 < 0 )
    return 3238002689LL;
  return 0LL;
}
