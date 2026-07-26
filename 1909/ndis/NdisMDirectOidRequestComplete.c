/*
 * XREFs of NdisMDirectOidRequestComplete @ 0x1C00205C0
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeCloneOidRequest @ 0x1C00069C0 (NdisFreeCloneOidRequest.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMDirectOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  PNDIS_OID_REQUEST v4; // r9
  __int64 v6; // rbx
  __int64 v7; // r10

  v4 = OidRequest;
  if ( (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) != 0 )
  {
    v6 = *(_QWORD *)&OidRequest->NdisReserved[24];
    if ( v6 )
    {
      *(_QWORD *)&OidRequest->NdisReserved[24] = 0LL;
      if ( OidRequest->RequestType == NdisRequestMethod )
      {
        *(_QWORD *)(v6 + 60) = *(_QWORD *)&OidRequest->DATA.METHOD_INFORMATION.BytesWritten;
        *(_DWORD *)(v6 + 68) = OidRequest->DATA.METHOD_INFORMATION.BytesNeeded;
        *(_OWORD *)(v6 + 40) = *(_OWORD *)&OidRequest->DATA.METHOD_INFORMATION.InformationBuffer;
      }
      else
      {
        *(_QWORD *)(v6 + 52) = *(_QWORD *)&OidRequest->DATA.METHOD_INFORMATION.OutputBufferLength;
        *(_QWORD *)(v6 + 40) = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
        *(_DWORD *)(v6 + 48) = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
      }
      NdisFreeCloneOidRequest(OidRequest->RequestHandle, OidRequest);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(OidRequest) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequest,
        11,
        35,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids);
    }
    v4 = (PNDIS_OID_REQUEST)v6;
  }
  v7 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 470) + 904LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_OID_REQUEST, NDIS_STATUS))((char *)g_MiniportHookDrivers
                                                                                      + v7
                                                                                      + 56))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v7 + 24),
    *((_QWORD *)MiniportAdapterHandle + 659),
    MiniportAdapterHandle,
    v4,
    Status);
}
