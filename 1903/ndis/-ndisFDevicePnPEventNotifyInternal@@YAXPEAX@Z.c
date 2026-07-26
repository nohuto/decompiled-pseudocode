/*
 * XREFs of ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0014B60
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C0090B40 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     NdisFDevicePnPEventNotify @ 0x1C0014C20 (NdisFDevicePnPEventNotify.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001BB10 (ndisGetLowerFilterWithPnpRef.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00B6B4C (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisClearBusy @ 0x1C00B80E0 (ndisClearBusy.c)
 *     ?ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C00FC748 (-ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@.c)
 *     ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00FF5E8 (ndisMInvokeDevicePnPEventNotifyHandler.c)
 */

void __fastcall ndisFDevicePnPEventNotifyInternal(_QWORD *Parameter, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  struct _NET_DEVICE_PNP_EVENT *v4; // rsi
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  struct _NDIS_FILTER_BLOCK *LowerFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v7; // rdi
  void (__fastcall *PnPEventNotifyHandler)(void *, _NDIS_DEVICE_PNP_EVENT, void *, unsigned int); // rax

  v3 = Parameter[1];
  LOBYTE(a3) = 5;
  v4 = (struct _NET_DEVICE_PNP_EVENT *)Parameter[3];
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 32);
  LowerFilterWithPnpRef = (struct _NDIS_FILTER_BLOCK *)ndisGetLowerFilterWithPnpRef(v5, v3, a3);
  v7 = LowerFilterWithPnpRef;
  if ( LowerFilterWithPnpRef )
  {
    if ( LowerFilterWithPnpRef->FilterDriver->DefaultFilterCharacteristics.DevicePnPEventNotifyHandler )
      ndisFInvokeDevicePnPEventNotify(LowerFilterWithPnpRef, v4);
    else
      NdisFDevicePnPEventNotify(LowerFilterWithPnpRef, v4);
    ndisDereferenceRef(&v7->PnPRef.SpinLock);
  }
  else if ( v5->MajorNdisVersion < 6u )
  {
    PnPEventNotifyHandler = v5->DriverHandle->MiniportCharacteristics.PnPEventNotifyHandler;
    if ( PnPEventNotifyHandler )
      PnPEventNotifyHandler(
        v5->MiniportAdapterContext,
        v4->DevicePnPEvent,
        v4->InformationBuffer,
        v4->InformationBufferLength);
  }
  else if ( (v5->Flags & 0x80u) == 0 && SLOBYTE(v5->DriverHandle->Flags) >= 0 )
  {
    if ( v5->SelectiveSuspend )
      ndisWdmSetBusySync(v5, NdisBusyDevicePnPEvent, 0);
    ndisMInvokeDevicePnPEventNotifyHandler((char)v5);
    if ( v5->SelectiveSuspend )
      ndisClearBusy(v5, 1LL, 37LL);
  }
}
