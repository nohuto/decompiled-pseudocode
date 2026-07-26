/*
 * XREFs of ndisPnPIrpStopDevice @ 0x1C00F4B78
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C8490 (ndisPnPDispatch.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     ndisDereferenceDriver @ 0x1C0052A18 (ndisDereferenceDriver.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0065580 (ndisDereferenceDmaAdapter.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C007D640 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisPowerSaveStop @ 0x1C00B8DB0 (ndisPowerSaveStop.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C01159F0 (ndisDeQueueMiniportOnDriver.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 */

__int64 __fastcall ndisPnPIrpStopDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v7; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    WPP_SF_qZ(0x2Au, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a2, *(const wchar_t **)(a2 + 3888));
  NdisTraceLoggingDeviceRemoved();
  ndisLogMiniportEvent(a2, 0x27u);
  ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a2, 5);
  *(_DWORD *)(a2 + 124) &= ~0x10000u;
  *(_DWORD *)(a2 + 1520) = 3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_DWORD *)(a2 + 1520) = 3;
  *(_QWORD *)(a2 + 1608) = &Event;
  ndisReferenceMiniport(a2);
  *(_DWORD *)(a2 + 124) |= 0x10u;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_(0x53u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
  ndisPnPRemoveDevice((NDIS_HANDLE)a2);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_(0x54u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
  if ( *(_QWORD *)(a2 + 1608) )
  {
    ndisDereferenceMiniport(a2, 0x1Cu);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 1608) = 0LL;
  }
  v7 = *(_QWORD *)(a2 + 504);
  if ( v7 && *(_DWORD *)(v7 + 72) == 1 && (*(_DWORD *)(a2 + 120) & 0x40) != 0 )
  {
    *(_QWORD *)(v7 + 80) = 0LL;
    ndisDereferenceDmaAdapter(*(PVOID *)(a2 + 504));
    *(_DWORD *)(a2 + 120) &= ~0x40u;
  }
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) )
  {
    ndisDeQueueMiniportOnDriver(a2, *(_QWORD *)(a2 + 3792));
    ndisDereferenceDriver(*(_QWORD *)(a2 + 3792), 0, 2u);
    if ( (*(_DWORD *)(a2 + 120) & 0x20000) != 0 )
    {
      MmUnlockPagableImageSection(qword_1C009F0C0);
      _InterlockedDecrement(&dword_1C009F0B0);
    }
  }
  *(_DWORD *)(a3 + 48) = 0;
  *a5 = 1;
  return 0LL;
}
