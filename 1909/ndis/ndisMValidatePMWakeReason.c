/*
 * XREFs of ndisMValidatePMWakeReason @ 0x1C0073AD0
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0015150 (WPP_RECORDER_SF_LqZ.c)
 *     McTemplateK0xq @ 0x1C0072420 (McTemplateK0xq.c)
 *     WPP_RECORDER_SF_DqZ @ 0x1C0072554 (WPP_RECORDER_SF_DqZ.c)
 *     ndisMValidatePMWakePacket @ 0x1C007389C (ndisMValidatePMWakePacket.c)
 *     ?NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00C2ADC (-NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

bool __fastcall ndisMValidatePMWakeReason(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v13; // r9d
  int v14; // [rsp+20h] [rbp-38h]

  v5 = *(unsigned int *)(a2 + 56);
  if ( (unsigned int)v5 < 0x14 )
  {
    NdisTraceLoggingMiniportWakeBufferTooLarge((struct _NDIS_MINIPORT_BLOCK *)a1, v5);
    *(_DWORD *)(a1 + 4464) = 0xFFFF;
    return 0;
  }
  v7 = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 4464) = *(_DWORD *)(v7 + 8);
  if ( (byte_1C00E8083 & 4) != 0 )
  {
    v14 = *(_DWORD *)(v7 + 8);
    McTemplateK0xq(a1, &NicWakeReason, (const GUID *)(a1 + 4008), *(_QWORD *)(a1 + 4024));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      a3,
      0x8Au,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      *(_DWORD *)(v7 + 8),
      a1,
      *(unsigned __int16 **)(a1 + 3856));
  if ( *(_BYTE *)v7 != 0x80
    || *(_BYTE *)(v7 + 1) != 1
    || (v8 = *(_WORD *)(v7 + 2), v8 < 0x14u)
    || (LODWORD(v5) = *(_DWORD *)(a2 + 56), v8 > (unsigned int)v5) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = 139;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(v7 + 4) )
    return 0;
  v9 = *(unsigned int *)(v7 + 12);
  if ( (v9 & 7) != 0 )
    return 0;
  if ( (unsigned int)v9 > (unsigned int)v5
    || v7 + v9 < v7
    || (v10 = *(unsigned int *)(v7 + 16), (int)v10 + (int)v9 < (unsigned int)v9)
    || (int)v10 + (int)v9 > (unsigned int)v5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = 140;
LABEL_33:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      14,
      v13,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1);
    return 0;
  }
  v11 = *(unsigned int *)(v7 + 8);
  if ( (_DWORD)v11 == 1 )
    return ndisMValidatePMWakePacket(a1, a2);
  if ( (int)v11 <= 1
    || (int)v11 > 3 && ((int)v11 <= 4095 || (int)v11 > 4099 && (unsigned int)(v11 - 0x2000) > 2)
    || (_DWORD)v9
    || (_DWORD)v10 )
  {
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      v10,
      a4,
      v14,
      v11,
      a1,
      *(unsigned __int16 **)(a1 + 3856));
  return 1;
}
