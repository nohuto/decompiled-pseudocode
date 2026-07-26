/*
 * XREFs of NdisAllocateCloneOidRequest @ 0x1C000DD90
 * Callers:
 *     ndisOidCloneForCompatibility @ 0x1C000DB90 (ndisOidCloneForCompatibility.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qqDq @ 0x1C0043FB4 (WPP_SF_qqDq.c)
 */

NDIS_STATUS __stdcall NdisAllocateCloneOidRequest(
        NDIS_HANDLE SourceHandle,
        PNDIS_OID_REQUEST OidRequest,
        UINT PoolTag,
        PNDIS_OID_REQUEST *ClonedOidRequest)
{
  NDIS_STATUS v4; // ebp
  struct _NDIS_OID_REQUEST *v6; // rbx
  char v7; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  struct _NDIS_OID_REQUEST *PoolWithTag; // rax
  UCHAR v15; // al
  NDIS_REQUEST_TYPE RequestType; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  UCHAR Revision; // al
  USHORT Size; // ax
  __int64 v24; // rcx
  unsigned __int8 v25; // al

  v4 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(197LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, SourceHandle, OidRequest, PoolTag);
  v11 = *(_DWORD *)&OidRequest->NdisReserved[16] & 0x20;
  if ( (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x20) == 0 )
  {
    if ( *(_BYTE *)SourceHandle == 18 )
      goto LABEL_31;
    if ( ((*(_BYTE *)SourceHandle - 5) & 0xEF) != 0 )
    {
      v4 = -1073741811;
      goto LABEL_21;
    }
  }
  if ( *(_BYTE *)SourceHandle != 18 && !(_DWORD)v11 )
  {
    if ( *(_BYTE *)SourceHandle == 5 )
    {
      v12 = *((_QWORD *)SourceHandle + 2);
      v13 = *(_BYTE *)(v12 + 100);
      if ( v13 <= 6u && (v13 != 6 || *(_BYTE *)(v12 + 101) < 0x32u) )
        goto LABEL_12;
    }
LABEL_24:
    v7 = 1;
    goto LABEL_12;
  }
LABEL_31:
  v24 = *((_QWORD *)SourceHandle + 3);
  v25 = *(_BYTE *)(v24 + 56);
  if ( v25 > 6u || v25 == 6 && *(_BYTE *)(v24 + 57) >= 0x32u )
    goto LABEL_24;
LABEL_12:
  PoolWithTag = (struct _NDIS_OID_REQUEST *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, PoolTag);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_21;
  }
  memset(PoolWithTag, 0, 0xF8uLL);
  v6->Header.Type = -106;
  if ( !v7 )
  {
    v15 = 1;
    v6->Header.Size = 236;
    goto LABEL_15;
  }
  Revision = OidRequest->Header.Revision;
  if ( Revision != 1 )
  {
    if ( Revision == 2 )
    {
      Size = OidRequest->Header.Size;
      if ( Size >= 0xF8u )
        goto LABEL_28;
    }
LABEL_38:
    KeBugCheckEx(0x7Cu, 0x21uLL, (ULONG_PTR)SourceHandle, (ULONG_PTR)OidRequest, 0LL);
  }
  Size = OidRequest->Header.Size;
  if ( Size < 0xECu )
    goto LABEL_38;
LABEL_28:
  v6->Header.Size = Size;
  v15 = OidRequest->Header.Revision;
LABEL_15:
  v6->Header.Revision = v15;
  v6->RequestType = OidRequest->RequestType;
  v6->Timeout = OidRequest->Timeout;
  v6->PortNumber = OidRequest->PortNumber;
  v6->RequestId = OidRequest->RequestId;
  v6->Timeout = OidRequest->Timeout;
  v6->RequestHandle = OidRequest->RequestHandle;
  v6->SupportedRevision = OidRequest->SupportedRevision;
  if ( OidRequest->Header.Revision >= 2u || (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x4000) != 0 )
  {
    v6[1].Header = OidRequest[1].Header;
    v6[1].RequestType = OidRequest[1].RequestType;
  }
  RequestType = OidRequest->RequestType;
  v6->DATA.QUERY_INFORMATION.Oid = OidRequest->DATA.QUERY_INFORMATION.Oid;
  if ( RequestType == NdisRequestMethod )
  {
    v6->DATA.QUERY_INFORMATION.BytesNeeded = OidRequest->DATA.QUERY_INFORMATION.BytesNeeded;
    v6->DATA.QUERY_INFORMATION.InformationBuffer = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
    v6->DATA.QUERY_INFORMATION.InformationBufferLength = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
    v6->DATA.QUERY_INFORMATION.InformationBufferLength = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
    v6->DATA.QUERY_INFORMATION.BytesWritten = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
    v6->DATA.METHOD_INFORMATION.BytesRead = OidRequest->DATA.METHOD_INFORMATION.BytesRead;
    v6->DATA.METHOD_INFORMATION.BytesNeeded = OidRequest->DATA.METHOD_INFORMATION.BytesNeeded;
    v6->DATA.METHOD_INFORMATION.BytesWritten = OidRequest->DATA.METHOD_INFORMATION.BytesWritten;
  }
  else
  {
    v6->DATA.QUERY_INFORMATION.InformationBuffer = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
    v6->DATA.QUERY_INFORMATION.InformationBufferLength = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
    v6->DATA.QUERY_INFORMATION.BytesWritten = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
    v6->DATA.QUERY_INFORMATION.BytesNeeded = OidRequest->DATA.QUERY_INFORMATION.BytesNeeded;
  }
  *(_DWORD *)&v6->NdisReserved[16] ^= (*(_DWORD *)&v6->NdisReserved[16] ^ *(_DWORD *)&OidRequest->NdisReserved[16]) & 0x8000;
  v17 = *(_DWORD *)&v6->NdisReserved[16] ^ ((unsigned __int8)*(_DWORD *)&v6->NdisReserved[16] ^ (unsigned __int8)*(_DWORD *)&OidRequest->NdisReserved[16]) & 0x80;
  *(_DWORD *)&v6->NdisReserved[16] = v17;
  v18 = v17 ^ (*(_DWORD *)&OidRequest->NdisReserved[16] ^ v17) & 4;
  *(_DWORD *)&v6->NdisReserved[16] = v18;
  v19 = v18 ^ (*(_DWORD *)&OidRequest->NdisReserved[16] ^ v18) & 0x80000;
  *(_DWORD *)&v6->NdisReserved[16] = v19;
  v20 = v19 ^ (*(_DWORD *)&OidRequest->NdisReserved[16] ^ v19) & 0x800000;
  *(_DWORD *)&v6->NdisReserved[16] = v20;
  v11 = v20 ^ (*(_DWORD *)&OidRequest->NdisReserved[16] ^ v20) & 0x1000000u;
  *(_DWORD *)&v6->NdisReserved[16] = v11;
  LODWORD(v11) = v11 | 0x4000;
  *(_DWORD *)&v6->NdisReserved[80] = *(_DWORD *)&OidRequest->NdisReserved[80];
  *(_DWORD *)&v6->NdisReserved[80] = *(_DWORD *)&OidRequest->NdisReserved[80];
  *(_DWORD *)&v6->NdisReserved[16] = v11;
  *(_QWORD *)&v6->NdisReserved[24] = OidRequest;
LABEL_21:
  *ClonedOidRequest = v6;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqDq(v11, OidRequest, SourceHandle, OidRequest, v4, v6);
  return v4;
}
