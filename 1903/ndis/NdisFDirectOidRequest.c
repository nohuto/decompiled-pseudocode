/*
 * XREFs of NdisFDirectOidRequest @ 0x1C008D6B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisDoDirectOidRequest @ 0x1C001DB3C (ndisDoDirectOidRequest.c)
 *     IsOidRequestDirectOid @ 0x1C0068A60 (IsOidRequestDirectOid.c)
 */

NDIS_STATUS __stdcall NdisFDirectOidRequest(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest)
{
  PNDIS_OID_REQUEST v2; // rbx
  NDIS_STATUS v4; // edi
  char v6; // [rsp+30h] [rbp-18h]

  v2 = OidRequest;
  v4 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = (char)OidRequest;
    LOBYTE(OidRequest) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequest,
      11,
      51,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)NdisFilterHandle,
      v6);
  }
  if ( v2->Header.Type != 0x96 || v2->Header.Size < 0xECu )
    return -1073741811;
  if ( !v2->Header.Revision )
    return -1071448020;
  if ( (*(_DWORD *)(*((_QWORD *)NdisFilterHandle + 4) + 3688LL) & 0x400) == 0 )
    v2->SupportedRevision = 1;
  if ( *(_QWORD *)(*((_QWORD *)NdisFilterHandle + 2) + 304LL) )
  {
    if ( IsOidRequestDirectOid(v2->DATA.QUERY_INFORMATION.Oid) )
    {
      *(_DWORD *)&v2->NdisReserved[16] |= 0x200040u;
      *(_QWORD *)&v2->NdisReserved[32] = NdisFilterHandle;
      v4 = ndisDoDirectOidRequest(v2, *((KSPIN_LOCK **)NdisFilterHandle + 4), (__int64)NdisFilterHandle, 0LL);
    }
    else
    {
      v4 = -1073741637;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(OidRequest) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequest,
      11,
      52,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)v2,
      v4);
  }
  return v4;
}
