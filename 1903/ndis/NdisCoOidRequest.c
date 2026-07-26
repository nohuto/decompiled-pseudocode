/*
 * XREFs of NdisCoOidRequest @ 0x1C0085140
 * Callers:
 *     NdisCoRequest @ 0x1C0085660 (NdisCoRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F3C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C0082220 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00822F4 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisCoOidRequestComplete @ 0x1C00855A0 (NdisCoOidRequestComplete.c)
 *     NdisMCoOidRequestComplete @ 0x1C0086720 (NdisMCoOidRequestComplete.c)
 *     ndisCoOidRequestToRequest @ 0x1C0086FA4 (ndisCoOidRequestToRequest.c)
 */

NDIS_STATUS __stdcall NdisCoOidRequest(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PNDIS_OID_REQUEST OidRequest)
{
  struct _NDIS_CO_AF_BLOCK *v7; // rbp
  char v10; // r12
  unsigned int v11; // ebx
  __int64 v12; // rsi
  int (__fastcall *CmRequestHandler)(void *, void *, void *, _NDIS_REQUEST *); // rbx
  int v15; // edx
  void *ClientContext; // rax
  __int64 v17; // rax
  __int64 (__fastcall *v18)(void *, __int64, __int64, PNDIS_OID_REQUEST); // r15
  NDIS_STATUS Status; // eax
  __int64 v20; // rbp
  KIRQL v21; // al
  __int64 v22; // rax
  char v23; // [rsp+30h] [rbp-58h]
  int (__fastcall *v24)(void *, void *, void *, _NDIS_REQUEST *); // [rsp+40h] [rbp-48h] BYREF
  void *CallMgrContext; // [rsp+48h] [rbp-40h]
  __int64 v26; // [rsp+90h] [rbp+8h]
  __int64 v27; // [rsp+A0h] [rbp+18h]
  PNDIS_OID_REQUEST OidRequesta; // [rsp+B0h] [rbp+28h]
  KIRQL OidRequestb; // [rsp+B0h] [rbp+28h]

  v7 = (struct _NDIS_CO_AF_BLOCK *)NdisAfHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = (char)NdisAfHandle;
    LOBYTE(NdisAfHandle) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisAfHandle,
      11,
      59,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      (char)NdisBindingHandle,
      v23,
      (char)OidRequest);
  }
  *(_QWORD *)&OidRequest->NdisReserved[32] = NdisBindingHandle;
  if ( OidRequest->Header.Type != 0x96 || OidRequest->Header.Size < 0xECu )
  {
    v11 = -1073741823;
    goto LABEL_10;
  }
  v10 = 1;
  if ( !OidRequest->Header.Revision )
  {
    v11 = -1071448020;
    goto LABEL_10;
  }
  v12 = 0LL;
  if ( v7 )
  {
    CmRequestHandler = 0LL;
    OidRequesta = 0LL;
    v24 = 0LL;
    if ( !ndisReferenceAf(v7) )
    {
      v11 = -1073741823;
      goto LABEL_10;
    }
    *(_DWORD *)&OidRequest->NdisReserved[16] |= 8u;
    v27 = 0LL;
    v26 = 0LL;
    KeInitializeEvent((PRKEVENT)&OidRequest->NdisReserved[40], NotificationEvent, 0);
    if ( v7->ClientOpen == NdisBindingHandle )
    {
      if ( v7->CmMajorNdisVersion < 6 )
      {
        CmRequestHandler = v7->CallMgrEntries->CmRequestHandler;
        v24 = CmRequestHandler;
      }
      else
      {
        v10 = 0;
        OidRequesta = (PNDIS_OID_REQUEST)v7->CallMgrChars->CmOidRequestHandler;
      }
      ClientContext = v7->ClientContext;
      CallMgrContext = v7->CallMgrContext;
      *(_QWORD *)&OidRequest->NdisReserved[64] = ClientContext;
      if ( NdisVcHandle )
      {
        *(_QWORD *)&OidRequest->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 3);
        v27 = *((_QWORD *)NdisVcHandle + 18);
      }
      if ( NdisPartyHandle )
      {
        *(_QWORD *)&OidRequest->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 2);
        v17 = *((_QWORD *)NdisPartyHandle + 1);
LABEL_28:
        v26 = v17;
      }
    }
    else
    {
      if ( v7->ClMajorNdisVersion < 6 )
      {
        CmRequestHandler = v7->ClientEntries.ClRequestHandler;
        v24 = CmRequestHandler;
      }
      else
      {
        v10 = 0;
        OidRequesta = (PNDIS_OID_REQUEST)v7->ClientChars.ClOidRequestHandler;
      }
      CallMgrContext = v7->ClientContext;
      *(_QWORD *)&OidRequest->NdisReserved[64] = v7->CallMgrContext;
      if ( NdisVcHandle )
      {
        *(_QWORD *)&OidRequest->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 18);
        v27 = *((_QWORD *)NdisVcHandle + 3);
      }
      if ( NdisPartyHandle )
      {
        *(_QWORD *)&OidRequest->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 1);
        v17 = *((_QWORD *)NdisPartyHandle + 2);
        goto LABEL_28;
      }
    }
    if ( v10 )
    {
      if ( !CmRequestHandler )
      {
LABEL_31:
        v11 = -1073741637;
        ndisDereferenceAf((KSPIN_LOCK *)v7);
        goto LABEL_10;
      }
      v18 = (__int64 (__fastcall *)(void *, __int64, __int64, PNDIS_OID_REQUEST))OidRequesta;
    }
    else
    {
      v18 = (__int64 (__fastcall *)(void *, __int64, __int64, PNDIS_OID_REQUEST))OidRequesta;
      if ( !OidRequesta )
        goto LABEL_31;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v15,
        11,
        60,
        (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
        (char)CmRequestHandler,
        (char)OidRequest);
    }
    if ( v10 )
      Status = ndisCoOidRequestToRequest((unsigned int)&v24, (_DWORD)CallMgrContext, v27, v26, (__int64)OidRequest);
    else
      Status = v18(CallMgrContext, v27, v26, OidRequest);
    v11 = Status;
    if ( Status != 259 )
    {
      NdisCoOidRequestComplete(v7, NdisVcHandle, NdisPartyHandle, OidRequest, Status);
LABEL_42:
      v11 = 259;
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  v20 = *((_QWORD *)NdisBindingHandle + 2);
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 96));
  *(_QWORD *)(v20 + 520) = KeGetCurrentThread();
  OidRequestb = v21;
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x8000) != 0 )
  {
    v11 = -1073676286;
  }
  else if ( (*(_DWORD *)(v20 + 120) & 0x300000) != 0 )
  {
    v11 = -1073676275;
  }
  else
  {
    v11 = 0;
    ndisMReferenceOpen((__int64)NdisBindingHandle, 6u);
  }
  *(_QWORD *)(v20 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 96), OidRequestb);
  if ( !v11 )
  {
    *(_DWORD *)&OidRequest->NdisReserved[16] |= 0x20u;
    *(_QWORD *)&OidRequest->NdisReserved[32] = NdisBindingHandle;
    *(_QWORD *)&OidRequest->NdisReserved[56] = 0LL;
    if ( NdisVcHandle )
    {
      if ( *((NDIS_HANDLE *)NdisVcHandle + 10) == NdisBindingHandle )
        v22 = *((_QWORD *)NdisVcHandle + 3);
      else
        v22 = *((_QWORD *)NdisVcHandle + 18);
      *(_QWORD *)&OidRequest->NdisReserved[56] = v22;
    }
    if ( (*(_DWORD *)(*((_QWORD *)NdisBindingHandle + 2) + 124LL) & 0x100) != 0 )
    {
      v11 = OidRequest->RequestType != NdisRequestSetInformation ? 0xC0000001 : 0;
    }
    else
    {
      if ( NdisVcHandle )
        v12 = *((_QWORD *)NdisVcHandle + 25);
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, PNDIS_OID_REQUEST))(*(_QWORD *)(v20 + 3760) + 552LL))(
              *(_QWORD *)(v20 + 2232),
              v12,
              OidRequest);
    }
    if ( v11 != 259 )
    {
      NdisMCoOidRequestComplete(*((NDIS_HANDLE *)NdisBindingHandle + 2), NdisVcHandle, OidRequest, v11);
      goto LABEL_42;
    }
  }
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NdisAfHandle) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisAfHandle,
      11,
      61,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      (char)OidRequest,
      v11);
  }
  return v11;
}
