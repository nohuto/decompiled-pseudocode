/*
 * XREFs of NdisMCoRequestComplete @ 0x1C00869E0
 * Callers:
 *     ndisMCoOidRequestToRequest @ 0x1C006B1C0 (ndisMCoOidRequestToRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     NdisMOidRequestComplete @ 0x1C0069120 (NdisMOidRequestComplete.c)
 */

void __stdcall NdisMCoRequestComplete(NDIS_STATUS Status, NDIS_HANDLE MiniportAdapterHandle, PNDIS_REQUEST Request)
{
  _QWORD *v4; // rbp
  _NDIS_REQUEST_TYPE RequestType; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  struct _NDIS_OID_REQUEST *v11; // rdx
  int v12; // edx
  char v13; // [rsp+28h] [rbp-30h]

  v4 = MiniportAdapterHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (char)MiniportAdapterHandle;
    LOBYTE(MiniportAdapterHandle) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportAdapterHandle,
      11,
      49,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      v13,
      (char)Request,
      Status);
  }
  RequestType = Request->RequestType;
  v7 = *(_QWORD *)&Request->MacReserved[8];
  if ( RequestType == NdisRequestQueryInformation || (unsigned int)(RequestType - 1) <= 1 )
  {
    *(_DWORD *)(v7 + 52) = Request->DATA.QUERY_INFORMATION.BytesWritten;
    *(_DWORD *)(v7 + 56) = Request->DATA.QUERY_INFORMATION.BytesNeeded;
  }
  v8 = *(_DWORD *)(v7 + 88);
  if ( (v8 & 0x220) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 104);
    if ( Request->RequestType == NdisRequestQueryInformation
      && Request->DATA.QUERY_INFORMATION.Oid == 65806
      && Request->DATA.QUERY_INFORMATION.InformationBufferLength
      && v9
      && (*(_DWORD *)(v9 + 224) & 4) != 0 )
    {
      *(_DWORD *)Request->DATA.QUERY_INFORMATION.InformationBuffer |= 0xA0u;
    }
    v10 = *(_DWORD *)(v7 + 88);
    if ( (v10 & 0x2000) != 0 )
    {
      v11 = (struct _NDIS_OID_REQUEST *)v4[276];
      v4[72] = 0LL;
      NdisMOidRequestComplete(v4, v11, Status);
    }
    else
    {
      if ( (v10 & 0x200) != 0 )
      {
        if ( (v10 & 8) != 0 )
        {
          *(_DWORD *)(v7 + 80) = Status;
          KeSetEvent((PRKEVENT)(v7 + 112), 0, 0);
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, NDIS_STATUS))(v9 + 1088))(
          *(_QWORD *)(v9 + 32),
          *(_QWORD *)(v7 + 128),
          0LL,
          v7,
          Status);
      }
      ndisMDereferenceOpenUnlocked(v9, 6);
    }
  }
  else if ( (v8 & 8) != 0 )
  {
    *(_DWORD *)(v7 + 80) = Status;
    KeSetEvent((PRKEVENT)(v7 + 112), 0, 0);
  }
  ExFreePoolWithTag(Request, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      50,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
  }
}
