/*
 * XREFs of ndisPnPIrpRemoveDevice @ 0x1C0118F14
 * Callers:
 *     ndisPnPDispatch @ 0x1C0018190 (ndisPnPDispatch.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C009EEA0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C000883C (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ndisPowerSaveStop @ 0x1C0014940 (ndisPowerSaveStop.c)
 *     ndisDereferenceDriver @ 0x1C00172A0 (ndisDereferenceDriver.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ndisWakeUpDevice @ 0x1C00774C0 (ndisWakeUpDevice.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009A1C0 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisRemoveMiniportFromGlobalList @ 0x1C009C180 (ndisRemoveMiniportFromGlobalList.c)
 *     ndisDereferenceDmaAdapter @ 0x1C009F5F8 (ndisDereferenceDmaAdapter.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00A50AC (ndisPnPRemoveDeviceEx.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C00C2854 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00C8E5C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C00FCD70 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C0136900 (ndisDeQueueMiniportOnDriver.c)
 */

__int64 __fastcall ndisPnPIrpRemoveDevice(PDEVICE_OBJECT DeviceObject, __int64 a2, PIRP Irp, _BYTE *a4, _BYTE *a5)
{
  unsigned int v9; // esi
  bool v10; // zf
  __int64 v11; // rax
  struct NDISWATCHDOG__ *v12; // rcx
  struct _KEVENT *v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      9u,
      0x23u,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a2,
      *(unsigned __int16 **)(a2 + 3856));
  ndisLogMiniportEvent(a2, 0x23u);
  if ( (*(_DWORD *)(a2 + 120) & 4) == 0 )
  {
    NdisTraceLoggingDeviceRemoved();
    ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a2, NdisSSDeviceRemove);
    KeWaitForSingleObject((PVOID)(a2 + 4216), Executive, 0, 0, 0LL);
    if ( (*(_DWORD *)(a2 + 124) & 0x100) == 0 && *(int *)(a2 + 3868) > 1 )
      v9 = ndisWakeUpDevice(a2);
    ndisReferenceMiniportNoCheck(a2, 0x1Eu);
  }
  if ( !*(_DWORD *)(a2 + 4440) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v10 = *(_DWORD *)(a2 + 1520) == 5;
  *(_QWORD *)(a2 + 1608) = &Event;
  if ( !v10 )
    ndisPnPRemoveDeviceEx(a2);
  if ( Irp )
    Irp->IoStatus.Status = v9;
  ndisDereferenceMiniport(a2, 0x1Eu);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v11 = *(_QWORD *)(a2 + 3760);
  *(_QWORD *)(a2 + 1608) = 0LL;
  if ( *(_DWORD *)(v11 + 904) == 1 && !ndisBugCheckOnReenumerationTimeout )
  {
    v12 = *(struct NDISWATCHDOG__ **)(a2 + 5464);
    if ( v12 != (struct NDISWATCHDOG__ *)-1LL )
    {
      v13 = (struct _KEVENT *)WatchdogFromHandle(v12);
      NdisWatchdogState::Disarm(v13);
    }
  }
  v14 = *(_QWORD *)(a2 + 504);
  if ( v14 && *(_DWORD *)(v14 + 72) == 1 && (*(_DWORD *)(a2 + 120) & 0x40) != 0 )
  {
    *(_QWORD *)(v14 + 80) = 0LL;
    ndisDereferenceDmaAdapter(*(PVOID *)(a2 + 504));
    *(_DWORD *)(a2 + 120) &= ~0x40u;
  }
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) )
  {
    ndisDeQueueMiniportOnDriver(a2, *(_QWORD *)(a2 + 3760));
    ndisDereferenceDriver(*(_QWORD *)(a2 + 3760), 0, 2u);
    if ( (*(_DWORD *)(a2 + 120) & 0x20000) != 0 )
      ndisDereferencePackage((__int64)&dword_1C00E50C0);
  }
  ndisRemoveMiniportFromGlobalList((struct _NDIS_MINIPORT_BLOCK *)a2);
  if ( Irp )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v9 = IofCallDriver(*(PDEVICE_OBJECT *)(a2 + 3840), Irp);
    IoDetachDevice(*(PDEVICE_OBJECT *)(a2 + 3840));
    IoDeleteDevice(DeviceObject);
  }
  ndisMDeleteMiniportBlockOnRemove(a2);
  *a5 = 0;
  result = v9;
  *a4 = 0;
  return result;
}
