/*
 * XREFs of ndisPnPIrpSurpriseRemoval @ 0x1C00F4D34
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C8490 (ndisPnPDispatch.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00F2320 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C007D640 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00BDB3C (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00F4E5C (ndisPnPIrpSurpriseRemovalInner.c)
 */

__int64 __fastcall ndisPnPIrpSurpriseRemoval(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _BYTE *a5)
{
  int v8; // eax
  unsigned __int8 v9; // al
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    WPP_SF_qZ(0x27u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a2, *(const wchar_t **)(a2 + 3888));
  NdisTraceLoggingDeviceRemoved();
  ndisLogMiniportEvent(a2, 0x24u);
  v8 = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(a2 + 120) |= 4u;
  *(_DWORD *)(a2 + 124) = v8 & 0xFFFEFFEF | 0x10;
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2)
    && *(_DWORD *)(a2 + 1520) == 1
    && (*(_DWORD *)(a2 + 124) & 0x4000) == 0 )
  {
    ndisDevicePnPEventNotifyMiniport((struct _NDIS_MINIPORT_BLOCK *)a2, 2u, 0LL, 0);
  }
  ndisReferenceMiniportNoCheck(a2, 0x1Eu);
  ndisReferenceMiniportNoCheck(a2, 0x1Du);
  v9 = *(_BYTE *)(a2 + 32);
  *(_DWORD *)(a2 + 1520) = 5;
  if ( v9 > 6u || v9 == 6 && *(_BYTE *)(a2 + 33) >= 0x28u )
  {
    *(_QWORD *)(a2 + 5008) = 0LL;
    *(_QWORD *)(a2 + 5024) = ndisQueuedPnPIrpSurpriseRemoval;
    *(_QWORD *)(a2 + 5032) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 5008), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
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
