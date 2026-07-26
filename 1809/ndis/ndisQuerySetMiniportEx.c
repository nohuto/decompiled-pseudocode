/*
 * XREFs of ndisQuerySetMiniportEx @ 0x1C000AC50
 * Callers:
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     ndisPMAddProtocolOffload @ 0x1C0014904 (ndisPMAddProtocolOffload.c)
 *     ndisAddWoLMagicPacket @ 0x1C0014CE0 (ndisAddWoLMagicPacket.c)
 *     ndisQuerySetMiniportEx2 @ 0x1C00206A0 (ndisQuerySetMiniportEx2.c)
 *     ndisPMAddWOLPattern @ 0x1C00256CC (ndisPMAddWOLPattern.c)
 *     ?ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0069364 (-ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C006F850 (ndisIovDeleteDefaultNicSwitch.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00794A8 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ndisOidPMRemove @ 0x1C00BB528 (ndisOidPMRemove.c)
 * Callees:
 *     ndisQueueOidRequest @ 0x1C000C300 (ndisQueueOidRequest.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 *     ndisDoDirectOidRequest @ 0x1C0044A48 (ndisDoDirectOidRequest.c)
 *     ndisMCoOidRequestToRequest @ 0x1C0045650 (ndisMCoOidRequestToRequest.c)
 *     NdisMCoOidRequestComplete @ 0x1C0053880 (NdisMCoOidRequestComplete.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     NdisMSleep @ 0x1C00CF740 (NdisMSleep.c)
 *     ndisDereferenceVcPtr @ 0x1C011E8EC (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C011EB94 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx(
        _QWORD *MiniportAdapterHandle,
        _QWORD *P,
        PNDIS_OID_REQUEST Request,
        char a4,
        __int64 a5,
        __int64 a6)
{
  char v10; // r12
  __int64 Oid; // rdx
  int v12; // eax
  _DWORD *v13; // rax
  unsigned int v14; // ecx
  unsigned int i; // ebx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v21; // rdx
  NDIS_STATUS v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  ULONGLONG UnbiasedInterruptTime; // [rsp+60h] [rbp+8h]

  v10 = 0;
  UnbiasedInterruptTime = 0LL;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqq(12LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, MiniportAdapterHandle, Request, a5);
  ndisReferencePackage(&ndisPkgs);
  if ( MiniportAdapterHandle[562]
    && Request->RequestType == NdisRequestSetInformation
    && Request->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  }
  if ( (MiniportAdapterHandle[464] & 0x400) == 0 )
    Request->SupportedRevision = 1;
  if ( *(_QWORD *)&Request->NdisReserved[32] && a4 )
    v10 = 1;
  v12 = *((_DWORD *)MiniportAdapterHandle + 31);
  if ( (v12 & 0x100) != 0 )
  {
    v18 = -1073676280;
    goto LABEL_30;
  }
  if ( (v12 & 0x4000) != 0 )
  {
    v18 = -1073741823;
    goto LABEL_30;
  }
  if ( *((int *)MiniportAdapterHandle + 975) > 1 && Request->DATA.QUERY_INFORMATION.Oid != -50265855 )
  {
    v18 = -1071448017;
LABEL_30:
    if ( v10 == 1 && a4 )
    {
      LOBYTE(Oid) = 6;
      ndisMDereferenceOpenUnlocked(*(_QWORD *)&Request->NdisReserved[32], Oid);
    }
    goto LABEL_24;
  }
  *(_DWORD *)&Request->NdisReserved[16] |= 8u;
  KeInitializeEvent((PRKEVENT)&Request->NdisReserved[40], NotificationEvent, 0);
  Oid = Request->DATA.QUERY_INFORMATION.Oid;
  v13 = &ndisDirectOidRequestPathOids;
  v14 = 0;
  while ( (_DWORD)Oid != *v13 )
  {
    ++v14;
    ++v13;
    if ( v14 >= 0x16 )
      goto LABEL_15;
  }
  *(_DWORD *)&Request->NdisReserved[16] |= 0x200000u;
LABEL_15:
  if ( KeGetCurrentIrql() < 2u )
  {
    for ( i = 0; i < 0x1388; ++i )
    {
      if ( (MiniportAdapterHandle[15] & 0x300000) == 0 )
        break;
      NdisMSleep(0x3E8u);
    }
  }
  v16 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (v16 & 0x300000) != 0 )
  {
    v18 = -1073676275;
    goto LABEL_30;
  }
  if ( (v16 & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)&Request->NdisReserved[16] & 0x200000) != 0 )
      v17 = ndisDoDirectOidRequest(Request, MiniportAdapterHandle, a6, a5);
    else
      v17 = ndisQueueOidRequest(Request, MiniportAdapterHandle, a6, a5);
    v18 = v17;
    if ( v17 == 259 )
    {
      KeWaitForSingleObject(&Request->NdisReserved[40], Executive, 0, 0, 0LL);
      v18 = *(_DWORD *)&Request->NdisReserved[8];
      goto LABEL_24;
    }
    goto LABEL_30;
  }
  v21 = 0LL;
  if ( P )
  {
    if ( !(unsigned __int8)ndisReferenceVcPtr(P, 0LL) )
    {
      v18 = -1073676286;
      goto LABEL_30;
    }
    v21 = P[25];
  }
  if ( *((_BYTE *)MiniportAdapterHandle + 32) < 6u )
    v22 = ndisMCoOidRequestToRequest(MiniportAdapterHandle);
  else
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, PNDIS_OID_REQUEST))(MiniportAdapterHandle[474] + 552LL))(
            MiniportAdapterHandle[3],
            v21,
            Request);
  if ( v22 == 259 )
    KeWaitForSingleObject(&Request->NdisReserved[40], Executive, 0, 0, 0LL);
  else
    NdisMCoOidRequestComplete(MiniportAdapterHandle, P, Request, v22);
  v18 = *(_DWORD *)&Request->NdisReserved[8];
  if ( P )
    ndisDereferenceVcPtr(P);
LABEL_24:
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqqL(13LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, MiniportAdapterHandle, Request, a5, v18);
  v19 = MiniportAdapterHandle[562];
  if ( v19 && Request->RequestType == NdisRequestSetInformation && Request->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    ++*(_DWORD *)(v19 + 1144);
    *(_QWORD *)(MiniportAdapterHandle[562] + 1152LL) = (KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime + 5000)
                                                     / 0x2710;
    v23 = MiniportAdapterHandle[562];
    v24 = *(_QWORD *)(v23 + 1160);
    if ( v24 <= *(_QWORD *)(v23 + 1152) )
      v24 = *(_QWORD *)(v23 + 1152);
    *(_QWORD *)(v23 + 1160) = v24;
    *(_QWORD *)(MiniportAdapterHandle[562] + 1168LL) += *(_QWORD *)(MiniportAdapterHandle[562] + 1152LL);
  }
  return v18;
}
