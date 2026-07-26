/*
 * XREFs of ndisCleanUpForProtocol @ 0x1C00EDFA0
 * Callers:
 *     NdisCloseAdapter @ 0x1C0117490 (NdisCloseAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     NdisReleaseNicActive @ 0x1C007A040 (NdisReleaseNicActive.c)
 *     ndisClearReceiveFiltersForProtocol @ 0x1C00E1CA0 (ndisClearReceiveFiltersForProtocol.c)
 *     ndisMDoProtocolRequest @ 0x1C00EE304 (ndisMDoProtocolRequest.c)
 */

void __fastcall ndisCleanUpForProtocol(struct _NDIS_OPEN_BLOCK *a1, int a2)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rsi
  int v5; // edx
  int v6; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v7[11]; // [rsp+48h] [rbp-38h] BYREF

  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x37u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)a1);
  MiniportHandle = a1->MiniportHandle;
  if ( a1->PacketFilters )
  {
    v6 = 0;
    ndisMDoProtocolRequest((_DWORD)a1, a2, 65806, (unsigned int)&v6, 4, 0);
  }
  if ( a1->NumAddresses && MiniportHandle->MediaType == NdisMedium802_3 )
    ndisMDoProtocolRequest((_DWORD)a1, a2, 16843011, 0, 0, 1);
  NdisRSSParameters = a1->NdisRSSParameters;
  if ( NdisRSSParameters )
  {
    memset(v7, 0, sizeof(v7));
    LOBYTE(v7[0]) = -119;
    HIWORD(v7[0]) = 44;
    BYTE1(v7[0]) = NdisRSSParameters->Header.Revision;
    LOWORD(v7[1]) = 16;
    v7[9] = 16;
    v7[4] = 44;
    v7[6] = 44;
    v7[7] = 44;
    ndisMDoProtocolRequest((_DWORD)a1, v5, 66052, (unsigned int)v7, 44, 1);
  }
  while ( a1->AoAcReferences )
    NdisReleaseNicActive((__int64)a1, NdisPMComponentTest);
  if ( MiniportHandle->CurrentDevicePowerState != PowerDeviceD0 || (MiniportHandle->PnPFlags & 0x110) != 0 )
    ndisClearReceiveFiltersForProtocol(a1);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x38u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)a1);
}
