/*
 * XREFs of NdisFreeCloneOidRequest @ 0x1C00082F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

void __stdcall NdisFreeCloneOidRequest(NDIS_HANDLE SourceHandle, PNDIS_OID_REQUEST Request)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)&Request->NdisReserved[24];
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(199LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, SourceHandle, Request);
  if ( v2 )
  {
    *(_BYTE *)(v2 + 232) = Request->SupportedRevision;
    *(_DWORD *)(v2 + 152) = *(_DWORD *)&Request->NdisReserved[80];
  }
  ExFreePoolWithTag(Request, 0);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(200LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, SourceHandle, 0LL);
}
