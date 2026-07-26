/*
 * XREFs of NdisMOidRequestComplete @ 0x1C0069120
 * Callers:
 *     NdisMCoOidRequestComplete @ 0x1C00868F0 (NdisMCoOidRequestComplete.c)
 *     NdisMCoRequestComplete @ 0x1C00869E0 (NdisMCoRequestComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqd @ 0x1C00084B0 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDqqd @ 0x1C0009A30 (WPP_RECORDER_SF_qDqqd.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C0009B60 (ndisOidFreeInternalCloneRequest.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C0018448 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  PNDIS_OID_REQUEST v6; // rsi
  NdisWatchdogState *v7; // rcx
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r10
  NDIS_STATUS v11; // [rsp+40h] [rbp-18h]
  char v12[4]; // [rsp+48h] [rbp-10h]
  PNDIS_OID_REQUEST v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = OidRequest;
  v6 = OidRequest;
  if ( *(_DWORD *)(*((_QWORD *)MiniportAdapterHandle + 470) + 904LL) != 1 )
  {
    v7 = (NdisWatchdogState *)*((_QWORD *)MiniportAdapterHandle + 681);
    if ( v7 != (NdisWatchdogState *)-1LL )
      NdisWatchdogState::CancelTimer(v7);
  }
  if ( (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)MiniportAdapterHandle, (__int64)OidRequest, 1, (KSPIN_LOCK *)&v13);
    v6 = v13;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v12 = Status;
      WPP_RECORDER_SF_qDqqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        v9,
        0x1Fu,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        (char)MiniportAdapterHandle,
        v13->DATA.QUERY_INFORMATION.Oid,
        (char)OidRequest,
        (char)v13,
        *(_DWORD *)v12);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = Status;
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequest,
      Status,
      0x20u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)MiniportAdapterHandle,
      OidRequest->DATA.QUERY_INFORMATION.Oid,
      (char)OidRequest,
      v11);
  }
  if ( *((_QWORD *)MiniportAdapterHandle + 278) )
    *((_QWORD *)MiniportAdapterHandle + 278) = 0LL;
  v10 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 470) + 904LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_OID_REQUEST, NDIS_STATUS))((char *)g_MiniportHookDrivers
                                                                                      + v10
                                                                                      + 48))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v10 + 24),
    *((_QWORD *)MiniportAdapterHandle + 659),
    MiniportAdapterHandle,
    v6,
    Status);
}
