/*
 * XREFs of NdisFreeCloneOidRequest @ 0x1C00069C0
 * Callers:
 *     NdisMDirectOidRequestComplete @ 0x1C00205C0 (NdisMDirectOidRequestComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

void __stdcall NdisFreeCloneOidRequest(NDIS_HANDLE SourceHandle, PNDIS_OID_REQUEST Request)
{
  __int64 v2; // rdi
  PNDIS_OID_REQUEST v3; // rbx
  char v4; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)&Request->NdisReserved[24];
  v3 = Request;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = (char)Request;
    LOBYTE(Request) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Request,
      11,
      181,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v4,
      (char)SourceHandle);
  }
  if ( v2 )
  {
    *(_BYTE *)(v2 + 232) = v3->SupportedRevision;
    *(_DWORD *)(v2 + 152) = *(_DWORD *)&v3->NdisReserved[80];
  }
  ExFreePoolWithTag(v3, 0);
}
