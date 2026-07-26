/*
 * XREFs of ndisPnPIrpRemoveDevice @ 0x1C00F4904
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C8490 (ndisPnPDispatch.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00F2320 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0009B54 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     ndisDereferenceDriver @ 0x1C0052A18 (ndisDereferenceDriver.c)
 *     ndisRemoveMiniportFromGlobalList @ 0x1C006432C (ndisRemoveMiniportFromGlobalList.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0065580 (ndisDereferenceDmaAdapter.c)
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C007D640 (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00836E8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ndisPowerSaveStop @ 0x1C00B8DB0 (ndisPowerSaveStop.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C00C2E8C (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 *     ndisWakeUpDevice @ 0x1C00E8E08 (ndisWakeUpDevice.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00F03E4 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00F4F94 (ndisPnPRemoveDeviceEx.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C01159F0 (ndisDeQueueMiniportOnDriver.c)
 */

__int64 __fastcall ndisPnPIrpRemoveDevice(
        PDEVICE_OBJECT DeviceObject,
        struct _NDIS_MINIPORT_BLOCK *a2,
        PIRP Irp,
        _BYTE *a4,
        _BYTE *a5)
{
  unsigned int v9; // esi
  bool v10; // zf
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  NDISWATCHDOG__ *m_ptr; // rcx
  struct _KEVENT *v13; // rax
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    WPP_SF_qZ(0x23u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (__int64)a2, &a2->pAdapterInstanceName->Length);
  ndisLogMiniportEvent((__int64)a2, 0x23u);
  if ( (a2->Flags & 4) == 0 )
  {
    NdisTraceLoggingDeviceRemoved();
    ndisPowerSaveStop(a2, 2);
    KeWaitForSingleObject(&a2->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
    if ( (a2->PnPFlags & 0x100) == 0 && a2->CurrentDevicePowerState > PowerDeviceD0 )
      v9 = ndisWakeUpDevice((__int64)a2);
    ndisReferenceMiniportNoCheck((__int64)a2, 0x1Eu);
  }
  if ( !a2->Ref.ReferenceCount )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v10 = a2->PnPDeviceState == NdisPnPDeviceRemoved;
  a2->RemoveReadyEvent = &Event;
  if ( !v10 )
    ndisPnPRemoveDeviceEx(a2);
  if ( Irp )
    Irp->IoStatus.Status = v9;
  ndisDereferenceMiniport((__int64)a2, 0x1Eu);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  DriverHandle = a2->DriverHandle;
  a2->RemoveReadyEvent = 0LL;
  if ( DriverHandle->HookType == NdisMiniportHookDriverTypeWdi && !ndisBugCheckOnReenumerationTimeout )
  {
    m_ptr = a2->ReenumerateWatchdog.m_ptr;
    if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
    {
      v13 = (struct _KEVENT *)ndisRefCountHandleFromRefCountBlock((struct _NDIS_REFCOUNT_BLOCK *)m_ptr);
      NdisWatchdogState::Disarm(v13);
    }
  }
  MiniportSGDmaBlock = a2->MiniportSGDmaBlock;
  if ( MiniportSGDmaBlock && MiniportSGDmaBlock->DmaAdapterRefCount == 1 && (a2->Flags & 0x40) != 0 )
  {
    MiniportSGDmaBlock->DmaResourcesReleasedEvent = 0LL;
    ndisDereferenceDmaAdapter(a2->MiniportSGDmaBlock);
    a2->Flags &= ~0x40u;
  }
  if ( ndisIsMiniportStarted(a2) )
  {
    ndisDeQueueMiniportOnDriver(a2, a2->DriverHandle);
    ndisDereferenceDriver((__int64)a2->DriverHandle, 0, 2u);
    if ( (a2->Flags & 0x20000) != 0 )
    {
      MmUnlockPagableImageSection(qword_1C009F0C0);
      _InterlockedDecrement(&dword_1C009F0B0);
    }
  }
  ndisRemoveMiniportFromGlobalList(a2);
  if ( Irp )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v9 = IofCallDriver(a2->NextDeviceObject, Irp);
    IoDetachDevice(a2->NextDeviceObject);
    IoDeleteDevice(DeviceObject);
  }
  ndisMDeleteMiniportBlockOnRemove(a2);
  *a5 = 0;
  result = v9;
  *a4 = 0;
  return result;
}
