/*
 * XREFs of NdisAllocateCloneOidRequest @ 0x1C0008040
 * Callers:
 *     ndisOidCloneForCompatibility @ 0x1C0008630 (ndisOidCloneForCompatibility.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDDqq @ 0x1C0008310 (WPP_RECORDER_SF_qDDqq.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

NDIS_STATUS __stdcall NdisAllocateCloneOidRequest(
        NDIS_HANDLE SourceHandle,
        PNDIS_OID_REQUEST OidRequest,
        UINT PoolTag,
        PNDIS_OID_REQUEST *ClonedOidRequest)
{
  NDIS_STATUS v5; // ebp
  char v6; // r15
  PNDIS_OID_REQUEST v8; // rdi
  char *v9; // rbx
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  char *PoolWithTag; // rax
  int v13; // edx
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  char v17; // al
  NDIS_REQUEST_TYPE RequestType; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  UCHAR Revision; // al
  USHORT Size; // ax
  __int64 v27; // rcx
  unsigned __int8 v28; // al

  v5 = 0;
  v6 = 0;
  v8 = OidRequest;
  v9 = 0LL;
  if ( (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x20) == 0 )
  {
    if ( *(_BYTE *)SourceHandle == 18 )
      goto LABEL_28;
    if ( ((*(_BYTE *)SourceHandle - 5) & 0xEF) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequest) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          11,
          178,
          (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
          (char)SourceHandle);
      }
      v5 = -1073741811;
      goto LABEL_20;
    }
  }
  if ( *(_BYTE *)SourceHandle != 18 && (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x20) == 0 )
  {
    if ( *(_BYTE *)SourceHandle == 5 )
    {
      v10 = *((_QWORD *)SourceHandle + 2);
      v11 = *(_BYTE *)(v10 + 100);
      if ( v11 <= 6u && (v11 != 6 || *(_BYTE *)(v10 + 101) < 0x32u) )
        goto LABEL_10;
    }
    goto LABEL_21;
  }
LABEL_28:
  v27 = *((_QWORD *)SourceHandle + 3);
  v28 = *(_BYTE *)(v27 + 56);
  if ( v28 <= 6u && (v28 != 6 || *(_BYTE *)(v27 + 57) < 0x32u) )
    goto LABEL_10;
LABEL_21:
  v6 = 1;
LABEL_10:
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, PoolTag);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag + 1, 0, 0xF7uLL);
    *v9 = -106;
    if ( !v6 )
    {
      v17 = 1;
      *((_WORD *)v9 + 1) = 236;
      goto LABEL_13;
    }
    Revision = v8->Header.Revision;
    if ( Revision == 1 )
    {
      Size = v8->Header.Size;
      if ( Size >= 0xECu )
      {
LABEL_25:
        *((_WORD *)v9 + 1) = Size;
        v17 = v8->Header.Revision;
LABEL_13:
        v9[1] = v17;
        *((_DWORD *)v9 + 1) = v8->RequestType;
        *((_DWORD *)v9 + 3) = v8->Timeout;
        *((_DWORD *)v9 + 2) = v8->PortNumber;
        *((_QWORD *)v9 + 2) = v8->RequestId;
        *((_DWORD *)v9 + 3) = v8->Timeout;
        *((_QWORD *)v9 + 3) = v8->RequestHandle;
        v9[232] = v8->SupportedRevision;
        if ( v8->Header.Revision >= 2u || (*(_DWORD *)&v8->NdisReserved[16] & 0x4000) != 0 )
        {
          *((_DWORD *)v9 + 60) = v8[1].Header;
          *((_DWORD *)v9 + 61) = v8[1].RequestType;
        }
        RequestType = v8->RequestType;
        *((_DWORD *)v9 + 8) = v8->DATA.QUERY_INFORMATION.Oid;
        if ( RequestType == NdisRequestMethod )
        {
          *((_DWORD *)v9 + 14) = v8->DATA.QUERY_INFORMATION.BytesNeeded;
          *((_QWORD *)v9 + 5) = v8->DATA.QUERY_INFORMATION.InformationBuffer;
          *((_DWORD *)v9 + 12) = v8->DATA.QUERY_INFORMATION.InformationBufferLength;
          *((_DWORD *)v9 + 12) = v8->DATA.QUERY_INFORMATION.InformationBufferLength;
          *((_DWORD *)v9 + 13) = v8->DATA.QUERY_INFORMATION.BytesWritten;
          *((_DWORD *)v9 + 16) = v8->DATA.METHOD_INFORMATION.BytesRead;
          *((_DWORD *)v9 + 17) = v8->DATA.METHOD_INFORMATION.BytesNeeded;
          *((_DWORD *)v9 + 15) = v8->DATA.METHOD_INFORMATION.BytesWritten;
        }
        else
        {
          *((_QWORD *)v9 + 5) = v8->DATA.QUERY_INFORMATION.InformationBuffer;
          *((_DWORD *)v9 + 12) = v8->DATA.QUERY_INFORMATION.InformationBufferLength;
          *((_DWORD *)v9 + 13) = v8->DATA.QUERY_INFORMATION.BytesWritten;
          *((_DWORD *)v9 + 14) = v8->DATA.QUERY_INFORMATION.BytesNeeded;
        }
        *((_DWORD *)v9 + 22) ^= (*(_DWORD *)&v8->NdisReserved[16] ^ *((_DWORD *)v9 + 22)) & 0x8000;
        v19 = *((_DWORD *)v9 + 22) ^ ((unsigned __int8)*((_DWORD *)v9 + 22) ^ (unsigned __int8)*(_DWORD *)&v8->NdisReserved[16]) & 0x80;
        *((_DWORD *)v9 + 22) = v19;
        v20 = v19 ^ (*(_DWORD *)&v8->NdisReserved[16] ^ v19) & 4;
        *((_DWORD *)v9 + 22) = v20;
        v21 = v20 ^ (*(_DWORD *)&v8->NdisReserved[16] ^ v20) & 0x80000;
        *((_DWORD *)v9 + 22) = v21;
        v22 = v21 ^ (*(_DWORD *)&v8->NdisReserved[16] ^ v21) & 0x800000;
        *((_DWORD *)v9 + 22) = v22;
        v23 = v22 ^ (*(_DWORD *)&v8->NdisReserved[16] ^ v22) & 0x1000000;
        *((_DWORD *)v9 + 22) = v23;
        *((_DWORD *)v9 + 38) = *(_DWORD *)&v8->NdisReserved[80];
        *((_DWORD *)v9 + 38) = *(_DWORD *)&v8->NdisReserved[80];
        *((_DWORD *)v9 + 22) = v23 | 0x4000;
        *((_QWORD *)v9 + 12) = v8;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDDqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v14, v15, v16);
        goto LABEL_20;
      }
    }
    else if ( Revision == 2 )
    {
      Size = v8->Header.Size;
      if ( Size >= 0xF8u )
        goto LABEL_25;
    }
    KeBugCheckEx(0x7Cu, 0x21uLL, (ULONG_PTR)SourceHandle, (ULONG_PTR)v8, 0LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      11,
      179,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v8);
  }
  v5 = -1073741670;
LABEL_20:
  *ClonedOidRequest = (PNDIS_OID_REQUEST)v9;
  return v5;
}
