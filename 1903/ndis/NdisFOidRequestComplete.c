/*
 * XREFs of NdisFOidRequestComplete @ 0x1C0008850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C00084B0 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDqqd @ 0x1C0009A30 (WPP_RECORDER_SF_qDqqd.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0013C08 (WPP_RECORDER_SF_qqd.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00903E8 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

void __stdcall NdisFOidRequestComplete(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest, NDIS_STATUS Status)
{
  __int64 v3; // rbx
  UCHAR *NdisReserved; // rbp
  PNDIS_OID_REQUEST v6; // rdi
  KSPIN_LOCK *v8; // r13
  KSPIN_LOCK v9; // r15
  KSPIN_LOCK *v10; // rbp
  KIRQL v11; // al
  KSPIN_LOCK *v12; // rcx
  __int64 v13; // rbp
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  KIRQL v17; // al
  KIRQL v18; // bl

  v3 = *((_QWORD *)NdisFilterHandle + 23);
  NdisReserved = OidRequest->NdisReserved;
  v6 = OidRequest;
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
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequest,
        Status,
        0x37u,
        (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
        (char)NdisFilterHandle,
        v6->DATA.QUERY_INFORMATION.Oid,
        (char)v6,
        Status);
    goto LABEL_20;
  }
  v8 = 0LL;
  v9 = *(_QWORD *)&v6->NdisReserved[24];
  v10 = (KSPIN_LOCK *)NdisFilterHandle;
  if ( *(_BYTE *)NdisFilterHandle != 5 )
  {
    v8 = (KSPIN_LOCK *)NdisFilterHandle;
    v10 = 0LL;
  }
  if ( v9 )
  {
    *(_QWORD *)&v6->NdisReserved[24] = 0LL;
    if ( v6->RequestType == NdisRequestMethod )
    {
      *(_DWORD *)(v9 + 60) = v6->DATA.METHOD_INFORMATION.BytesWritten;
      *(_DWORD *)(v9 + 64) = v6->DATA.METHOD_INFORMATION.BytesRead;
      *(_DWORD *)(v9 + 68) = v6->DATA.METHOD_INFORMATION.BytesNeeded;
      *(_QWORD *)(v9 + 40) = v6->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v9 + 48) = v6->DATA.QUERY_INFORMATION.InformationBufferLength;
      *(_DWORD *)(v9 + 52) = v6->DATA.QUERY_INFORMATION.BytesWritten;
    }
    else
    {
      *(_DWORD *)(v9 + 52) = v6->DATA.QUERY_INFORMATION.BytesWritten;
      *(_DWORD *)(v9 + 56) = v6->DATA.QUERY_INFORMATION.BytesNeeded;
      *(_QWORD *)(v9 + 40) = v6->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v9 + 48) = v6->DATA.QUERY_INFORMATION.InformationBufferLength;
    }
    if ( (*(_DWORD *)(v9 + 88) & 0x400) == 0 )
    {
      if ( v10 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc(v10 + 18);
        v12 = v10 + 18;
        v10[22] = v9;
        v10[19] = 0LL;
      }
      else
      {
        v11 = KeAcquireSpinLockRaiseToDpc(v8 + 12);
        v12 = v8 + 12;
        v8[276] = v9;
        v8[65] = 0LL;
      }
      KeReleaseSpinLock(v12, v11);
    }
    v13 = *(_QWORD *)&v6->NdisReserved[24];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(OidRequest) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequest,
        11,
        181,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        (char)v6,
        (char)v6->RequestHandle);
    }
    if ( v13 )
    {
      *(_BYTE *)(v13 + 232) = v6->SupportedRevision;
      *(_DWORD *)(v13 + 152) = *(_DWORD *)&v6->NdisReserved[80];
    }
    ExFreePoolWithTag(v6, 0);
    NdisReserved = (UCHAR *)(v9 + 72);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        v15,
        54,
        (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
        (char)NdisFilterHandle,
        *(_DWORD *)(v9 + 32),
        (char)v6,
        v9,
        Status);
LABEL_20:
    *((_DWORD *)NdisReserved + 2) = Status;
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisFOidRequestCompleteInternal,
           NdisFilterHandle,
           0x4CCCuLL,
           0,
           0LL) < 0 )
    {
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
      *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
      v18 = v17;
      *((_BYTE *)NdisFilterHandle + 233) = 1;
      ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
      *((_QWORD *)NdisFilterHandle + 19) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v18);
    }
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(OidRequest) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequest,
      11,
      35,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        11,
        53,
        (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
        (char)NdisFilterHandle,
        (char)v6,
        Status);
    }
  }
}
