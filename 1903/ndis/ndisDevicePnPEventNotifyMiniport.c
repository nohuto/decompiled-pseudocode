/*
 * XREFs of ndisDevicePnPEventNotifyMiniport @ 0x1C001B984
 * Callers:
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00A4F64 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisNotifyMiniports @ 0x1C012B80C (ndisNotifyMiniports.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     NdisFDevicePnPEventNotify @ 0x1C0014C20 (NdisFDevicePnPEventNotify.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001BB10 (ndisGetLowerFilterWithPnpRef.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00B6B4C (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisClearBusy @ 0x1C00B80E0 (ndisClearBusy.c)
 *     ?ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C00FC748 (-ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@.c)
 *     ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00FF5E8 (ndisMInvokeDevicePnPEventNotifyHandler.c)
 */

char __fastcall ndisDevicePnPEventNotifyMiniport(struct _NDIS_MINIPORT_BLOCK *a1, int a2, void *a3, unsigned int a4)
{
  unsigned __int32 v6; // esi
  __int64 v8; // r8
  struct _NDIS_FILTER_BLOCK *LowerFilterWithPnpRef; // rax
  int v10; // edx
  struct _NDIS_FILTER_BLOCK *v11; // rdi
  _NDIS_M_DRIVER_BLOCK *PnPEventNotifyHandler; // rax
  char v14; // [rsp+30h] [rbp-88h]
  struct _NET_DEVICE_PNP_EVENT NetDevicePnPEvent; // [rsp+40h] [rbp-78h] BYREF

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      58,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      (char)a1,
      v14);
  }
  memset(&NetDevicePnPEvent, 0, sizeof(NetDevicePnPEvent));
  LOBYTE(v8) = 6;
  NetDevicePnPEvent.Header = (_NDIS_OBJECT_HEADER)3146112;
  NetDevicePnPEvent.DevicePnPEvent = v6;
  NetDevicePnPEvent.InformationBuffer = a3;
  NetDevicePnPEvent.InformationBufferLength = a4;
  LowerFilterWithPnpRef = (struct _NDIS_FILTER_BLOCK *)ndisGetLowerFilterWithPnpRef(a1, 0LL, v8);
  v11 = LowerFilterWithPnpRef;
  if ( LowerFilterWithPnpRef )
  {
    if ( LowerFilterWithPnpRef->FilterDriver->DefaultFilterCharacteristics.DevicePnPEventNotifyHandler )
      ndisFInvokeDevicePnPEventNotify(LowerFilterWithPnpRef, &NetDevicePnPEvent);
    else
      NdisFDevicePnPEventNotify(LowerFilterWithPnpRef, &NetDevicePnPEvent);
    LOBYTE(PnPEventNotifyHandler) = ndisDereferenceRef(&v11->PnPRef.SpinLock, 6u);
  }
  else if ( a1->MajorNdisVersion < 6u )
  {
    PnPEventNotifyHandler = (_NDIS_M_DRIVER_BLOCK *)a1->DriverHandle->MiniportCharacteristics.PnPEventNotifyHandler;
    if ( PnPEventNotifyHandler )
      LOBYTE(PnPEventNotifyHandler) = ((__int64 (__fastcall *)(void *, _QWORD, void *, _QWORD))PnPEventNotifyHandler)(
                                        a1->MiniportAdapterContext,
                                        v6,
                                        a3,
                                        a4);
  }
  else
  {
    LODWORD(PnPEventNotifyHandler) = a1->Flags;
    if ( (char)PnPEventNotifyHandler >= 0 )
    {
      PnPEventNotifyHandler = a1->DriverHandle;
      if ( SLOBYTE(PnPEventNotifyHandler->Flags) >= 0 )
      {
        if ( a1->SelectiveSuspend )
          ndisWdmSetBusySync(a1, NdisBusyDevicePnPEvent, 0);
        LOBYTE(PnPEventNotifyHandler) = ndisMInvokeDevicePnPEventNotifyHandler((char)a1);
        if ( a1->SelectiveSuspend )
          LOBYTE(PnPEventNotifyHandler) = ndisClearBusy(a1, 1LL, 37LL);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    LOBYTE(PnPEventNotifyHandler) = WPP_RECORDER_SF_qL(
                                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                                      v10,
                                      13,
                                      59,
                                      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
                                      (char)a1,
                                      v6);
  }
  return (char)PnPEventNotifyHandler;
}
