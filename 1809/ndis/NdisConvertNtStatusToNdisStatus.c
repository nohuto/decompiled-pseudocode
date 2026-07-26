/*
 * XREFs of NdisConvertNtStatusToNdisStatus @ 0x1C0015520
 * Callers:
 *     ndisSetReceiveFilter @ 0x1C003CA90 (ndisSetReceiveFilter.c)
 *     NdisOpenConfiguration @ 0x1C00C6DD0 (NdisOpenConfiguration.c)
 *     ndisOidPreRcvFilterSetFilter @ 0x1C00E20C0 (ndisOidPreRcvFilterSetFilter.c)
 *     ndisSetTaskOffloadValidate @ 0x1C00E4FFC (ndisSetTaskOffloadValidate.c)
 *     ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00E9224 (ndisXlateAddPacketPatternToWolPatternOid.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C00F17A0 (NdisLWMRegisterMiniportDriver.c)
 *     NdisLWMStartNetworkInterface @ 0x1C00F1980 (NdisLWMStartNetworkInterface.c)
 *     ndisLWMCreateMiniport @ 0x1C00F2A18 (ndisLWMCreateMiniport.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
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
