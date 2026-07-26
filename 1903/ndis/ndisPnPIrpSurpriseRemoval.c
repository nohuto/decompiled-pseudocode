/*
 * XREFs of ndisPnPIrpSurpriseRemoval @ 0x1C00A4F64
 * Callers:
 *     ndisPnPDispatch @ 0x1C0018190 (ndisPnPDispatch.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C009EEA0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C001B984 (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C00C2854 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0118B70 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpSurpriseRemoval(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _BYTE *a5)
{
  int v8; // eax
  unsigned __int8 v9; // al
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      9u,
      0x27u,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a2,
      *(unsigned __int16 **)(a2 + 3856));
  NdisTraceLoggingDeviceRemoved(a2, 3LL);
  ndisLogMiniportEvent(a2, 0x24u);
  v8 = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(a2 + 120) |= 4u;
  *(_DWORD *)(a2 + 124) = v8 & 0xFFFEFFEF | 0x10;
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2)
    && *(_DWORD *)(a2 + 1520) == 1
    && (*(_DWORD *)(a2 + 124) & 0x4000) == 0 )
  {
    ndisDevicePnPEventNotifyMiniport((struct _NDIS_MINIPORT_BLOCK *)a2, 2, 0LL, 0);
  }
  ndisReferenceMiniportNoCheck(a2, 0x1Eu);
  ndisReferenceMiniportNoCheck(a2, 0x1Du);
  v9 = *(_BYTE *)(a2 + 32);
  *(_DWORD *)(a2 + 1520) = 5;
  if ( v9 > 6u || v9 == 6 && *(_BYTE *)(a2 + 33) >= 0x28u )
  {
    *(_QWORD *)(a2 + 4968) = 0LL;
    *(_QWORD *)(a2 + 4984) = ndisQueuedPnPIrpSurpriseRemoval;
    *(_QWORD *)(a2 + 4992) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 4968), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  }
  else
  {
    ndisPnPIrpSurpriseRemovalInner((struct _NDIS_MINIPORT_BLOCK *)a2);
  }
  if ( a3 )
    *(_DWORD *)(a3 + 48) = 0;
  *a5 = 1;
  result = 0LL;
  *a4 = 0;
  return result;
}
