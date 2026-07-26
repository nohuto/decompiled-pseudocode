/*
 * XREFs of NdisConvertNtStatusToNdisStatus @ 0x1C003F4F0
 * Callers:
 *     NdisOpenConfiguration @ 0x1C002B160 (NdisOpenConfiguration.c)
 *     ndisOidPreRcvFilterSetFilter @ 0x1C0060D30 (ndisOidPreRcvFilterSetFilter.c)
 *     ndisSetReceiveFilter @ 0x1C0060FB8 (ndisSetReceiveFilter.c)
 *     ndisSetTaskOffloadValidate @ 0x1C00700C4 (ndisSetTaskOffloadValidate.c)
 *     ndisXlateAddPacketPatternToWolPatternOid @ 0x1C0077AB8 (ndisXlateAddPacketPatternToWolPatternOid.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C009D9E0 (NdisLWMRegisterMiniportDriver.c)
 *     NdisLWMStartNetworkInterface @ 0x1C009DC20 (NdisLWMStartNetworkInterface.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117D04 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisConvertNtStatusToNdisStatus(int a1)
{
  __int64 result; // rax

  if ( a1 >= 0 && a1 != 259 && a1 != 1076035585 )
    return 0LL;
  result = 3221291030LL;
  if ( a1 != -1073741789 )
    return (unsigned int)a1;
  return result;
}
