/*
 * XREFs of ndisCleanUpForProtocol @ 0x1C0093634
 * Callers:
 *     NdisCloseAdapter @ 0x1C0138530 (NdisCloseAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z @ 0x1C009227C (-ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z.c)
 *     NdisReleaseNicActive @ 0x1C00BE090 (NdisReleaseNicActive.c)
 *     ndisClearReceiveFiltersForProtocol @ 0x1C0113BB0 (ndisClearReceiveFiltersForProtocol.c)
 */

__int64 __fastcall ndisCleanUpForProtocol(struct _NDIS_OPEN_BLOCK *a1)
{
  __int64 v2; // rdx
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v6[12]; // [rsp+48h] [rbp-38h] BYREF

  memset(v6, 0, 0x2CuLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      6,
      55,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)a1);
  }
  MiniportHandle = a1->MiniportHandle;
  if ( a1->PacketFilters )
  {
    v5 = 0;
    ndisMDoProtocolRequest(a1, v2, 65806, &v5, 4, 0);
  }
  if ( a1->NumAddresses && MiniportHandle->MediaType == NdisMedium802_3 )
    ndisMDoProtocolRequest(a1, v2, 16843011, 0LL, 0, 1u);
  result = (__int64)a1->NdisRSSParameters;
  if ( result )
  {
    LOBYTE(v6[0]) = -119;
    HIWORD(v6[0]) = 44;
    BYTE1(v6[0]) = *(_BYTE *)(result + 1);
    LOWORD(v6[1]) = 16;
    v6[9] = 16;
    v6[4] = 44;
    v6[6] = 44;
    v6[7] = 44;
    result = ndisMDoProtocolRequest(a1, v2, 66052, v6, 44, 1u);
  }
  for ( ; a1->AoAcReferences; result = NdisReleaseNicActive(a1, 8LL) )
    ;
  if ( MiniportHandle->CurrentDevicePowerState != PowerDeviceD0 || (MiniportHandle->PnPFlags & 0x110) != 0 )
    result = ndisClearReceiveFiltersForProtocol((char)a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v2,
             6,
             56,
             (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
             (char)a1);
  }
  return result;
}
