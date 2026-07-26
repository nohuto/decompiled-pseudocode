/*
 * XREFs of NdisMCoOidRequestComplete @ 0x1C0086720
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     NdisCoOidRequest @ 0x1C0085140 (NdisCoOidRequest.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     NdisMOidRequestComplete @ 0x1C0068F50 (NdisMOidRequestComplete.c)
 */

void __stdcall NdisMCoOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisMiniportVcHandle,
        PNDIS_OID_REQUEST Request,
        NDIS_STATUS Status)
{
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax

  v4 = *(_DWORD *)&Request->NdisReserved[16];
  if ( (v4 & 0x220) != 0 )
  {
    v5 = *(_QWORD *)&Request->NdisReserved[32];
    if ( Request->RequestType == NdisRequestQueryInformation
      && Request->DATA.QUERY_INFORMATION.Oid == 65806
      && Request->DATA.QUERY_INFORMATION.InformationBufferLength
      && v5
      && (*(_DWORD *)(v5 + 224) & 4) != 0 )
    {
      *(_DWORD *)Request->DATA.QUERY_INFORMATION.InformationBuffer |= 0xA0u;
    }
    v6 = *(_DWORD *)&Request->NdisReserved[16];
    if ( (v6 & 0x2000) != 0 )
    {
      NdisMOidRequestComplete(MiniportAdapterHandle, *((PNDIS_OID_REQUEST *)MiniportAdapterHandle + 276), Status);
    }
    else
    {
      if ( (v6 & 0x200) != 0 )
      {
        if ( (v6 & 8) != 0 )
        {
          *(_DWORD *)&Request->NdisReserved[8] = Status;
          KeSetEvent((PRKEVENT)&Request->NdisReserved[40], 0, 0);
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, PNDIS_OID_REQUEST, NDIS_STATUS))(v5 + 1088))(
          *(_QWORD *)(v5 + 32),
          *(_QWORD *)&Request->NdisReserved[56],
          0LL,
          Request,
          Status);
      }
      ndisMDereferenceOpenUnlocked(v5, 6);
    }
  }
  else if ( (v4 & 8) != 0 )
  {
    *(_DWORD *)&Request->NdisReserved[8] = Status;
    KeSetEvent((PRKEVENT)&Request->NdisReserved[40], 0, 0);
  }
}
