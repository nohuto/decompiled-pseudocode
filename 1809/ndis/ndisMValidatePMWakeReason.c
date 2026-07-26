/*
 * XREFs of ndisMValidatePMWakeReason @ 0x1C004AB04
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     McTemplateK0xq @ 0x1C0049A0C (McTemplateK0xq.c)
 *     WPP_SF_DqZ @ 0x1C0049A84 (WPP_SF_DqZ.c)
 *     WPP_SF_LqZ @ 0x1C0049B34 (WPP_SF_LqZ.c)
 *     ndisMValidatePMWakePacket @ 0x1C004A8F8 (ndisMValidatePMWakePacket.c)
 *     ?NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C007D6F8 (-NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

bool __fastcall ndisMValidatePMWakeReason(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  unsigned __int64 v5; // rdi
  unsigned __int16 v6; // ax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r9d
  int v10; // r8d
  unsigned __int16 v12; // cx

  v3 = *(_DWORD *)(a2 + 56);
  if ( v3 < 0x14 )
  {
    NdisTraceLoggingMiniportWakeBufferTooLarge((struct _NDIS_MINIPORT_BLOCK *)a1, v3);
    *(_DWORD *)(a1 + 4504) = 0xFFFF;
    return 0;
  }
  v5 = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 4504) = *(_DWORD *)(v5 + 8);
  if ( (byte_1C00A2083 & 4) != 0 )
    McTemplateK0xq(a1, &NicWakeReason, (const GUID *)(a1 + 4040), *(_QWORD *)(a1 + 4056), *(_DWORD *)(v5 + 8));
  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    WPP_SF_LqZ(0x8Au, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, *(_DWORD *)(v5 + 8), a1, *(_QWORD *)(a1 + 3888));
  if ( *(_BYTE *)v5 != 0x80
    || *(_BYTE *)(v5 + 1) != 1
    || (v6 = *(_WORD *)(v5 + 2), v6 < 0x14u)
    || (v7 = *(unsigned int *)(a2 + 56), v6 > (unsigned int)v7) )
  {
    if ( (unsigned __int8)byte_1C00A025D < 2u )
      return 0;
    v12 = 139;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(v5 + 4) )
    return 0;
  v8 = *(unsigned int *)(v5 + 12);
  if ( (v8 & 7) != 0 )
    return 0;
  if ( (unsigned int)v8 > (unsigned int)v7
    || v5 + v8 < v5
    || (v9 = *(_DWORD *)(v5 + 16), v9 + (int)v8 < (unsigned int)v8)
    || v9 + (int)v8 > (unsigned int)v7 )
  {
    if ( (unsigned __int8)byte_1C00A025D < 2u )
      return 0;
    v12 = 140;
LABEL_33:
    WPP_SF_q(v12, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1);
    return 0;
  }
  v10 = *(_DWORD *)(v5 + 8);
  if ( v10 == 1 )
    return ndisMValidatePMWakePacket(a1, a2);
  if ( v10 <= 1 || v10 > 3 && (v10 <= 4095 || v10 > 4099 && (unsigned int)(v10 - 0x2000) > 2) || (_DWORD)v8 || v9 )
    return 0;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_DqZ(*(_QWORD *)(a1 + 3888), v7, v10, a1, *(_QWORD *)(a1 + 3888));
  return 1;
}
