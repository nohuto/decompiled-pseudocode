/*
 * XREFs of NdisFOidRequestComplete @ 0x1C0007B50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005C6F4 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

void __stdcall NdisFOidRequestComplete(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest, NDIS_STATUS Status)
{
  __int64 v3; // rbx
  UCHAR *NdisReserved; // rsi
  KSPIN_LOCK *v8; // r15
  KSPIN_LOCK *v9; // r13
  KSPIN_LOCK v10; // rsi
  KIRQL v11; // al
  KSPIN_LOCK *v12; // rcx
  NDIS_HANDLE RequestHandle; // r15
  __int64 v14; // rbx
  KIRQL v15; // al
  KIRQL v16; // bl

  v3 = *((_QWORD *)NdisFilterHandle + 24);
  NdisReserved = OidRequest->NdisReserved;
  if ( v3 != -1 )
  {
    if ( KeCancelTimer((PKTIMER)(v3 + 64)) )
    {
      KeSetEvent((PRKEVENT)(v3 + 168), 0, 0);
      *(_DWORD *)(v3 + 160) = 0;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v3 + 160), 0);
    }
  }
  if ( (*((_DWORD *)NdisReserved + 4) & 0x8000000) == 0 )
    goto LABEL_23;
  v8 = 0LL;
  v9 = 0LL;
  if ( *(_BYTE *)NdisFilterHandle == 5 )
    v8 = (KSPIN_LOCK *)NdisFilterHandle;
  else
    v9 = (KSPIN_LOCK *)NdisFilterHandle;
  v10 = *(_QWORD *)&OidRequest->NdisReserved[24];
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(
      45LL,
      &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids,
      OidRequest,
      v10,
      OidRequest->DATA.QUERY_INFORMATION.Oid);
  if ( v10 )
  {
    *(_QWORD *)&OidRequest->NdisReserved[24] = 0LL;
    if ( OidRequest->RequestType == NdisRequestMethod )
    {
      *(_DWORD *)(v10 + 60) = OidRequest->DATA.METHOD_INFORMATION.BytesWritten;
      *(_DWORD *)(v10 + 64) = OidRequest->DATA.METHOD_INFORMATION.BytesRead;
      *(_DWORD *)(v10 + 68) = OidRequest->DATA.METHOD_INFORMATION.BytesNeeded;
      *(_QWORD *)(v10 + 40) = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v10 + 48) = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
      *(_DWORD *)(v10 + 52) = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
    }
    else
    {
      *(_DWORD *)(v10 + 52) = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
      *(_DWORD *)(v10 + 56) = OidRequest->DATA.QUERY_INFORMATION.BytesNeeded;
      *(_QWORD *)(v10 + 40) = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v10 + 48) = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
    }
    if ( (*(_DWORD *)(v10 + 88) & 0x400) == 0 )
    {
      if ( v8 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc(v8 + 18);
        v12 = v8 + 18;
        v8[23] = v10;
        v8[19] = 0LL;
        *((_DWORD *)v8 + 40) = 0;
      }
      else
      {
        v11 = KeAcquireSpinLockRaiseToDpc(v9 + 12);
        v12 = v9 + 12;
        v9[278] = v10;
        v9[65] = 0LL;
        *((_DWORD *)v9 + 466) = 0;
      }
      KeReleaseSpinLock(v12, v11);
    }
    RequestHandle = OidRequest->RequestHandle;
    v14 = *(_QWORD *)&OidRequest->NdisReserved[24];
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qq(199LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, OidRequest->RequestHandle, OidRequest);
    if ( v14 )
    {
      *(_BYTE *)(v14 + 232) = OidRequest->SupportedRevision;
      *(_DWORD *)(v14 + 152) = *(_DWORD *)&OidRequest->NdisReserved[80];
    }
    ExFreePoolWithTag(OidRequest, 0);
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qq(200LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, RequestHandle, 0LL);
    NdisReserved = (UCHAR *)(v10 + 72);
LABEL_23:
    *((_DWORD *)NdisReserved + 2) = Status;
    if ( KeExpandKernelStackAndCalloutEx(ndisFOidRequestCompleteInternal, NdisFilterHandle, 0x4CCCuLL, 0, 0LL) < 0 )
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
      *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
      v16 = v15;
      *((_DWORD *)NdisFilterHandle + 40) = 2101222;
      *((_BYTE *)NdisFilterHandle + 241) = 1;
      ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
      *((_QWORD *)NdisFilterHandle + 19) = 0LL;
      *((_DWORD *)NdisFilterHandle + 40) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v16);
    }
    return;
  }
  if ( (unsigned __int8)byte_1C00A025A >= 2u )
    WPP_SF_(46LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids);
}
