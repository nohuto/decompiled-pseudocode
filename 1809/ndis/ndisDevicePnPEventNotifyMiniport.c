/*
 * XREFs of ndisDevicePnPEventNotifyMiniport @ 0x1C00BDB3C
 * Callers:
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00F4D34 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisNotifyMiniports @ 0x1C010C298 (ndisNotifyMiniports.c)
 * Callees:
 *     NdisFDevicePnPEventNotify @ 0x1C0010F20 (NdisFDevicePnPEventNotify.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C0016340 (ndisGetLowerFilterWithPnpRef.c)
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisClearBusy @ 0x1C00748D0 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C0075F58 (ndisSetBusySync.c)
 *     ndisFInvokeDevicePnPEventNotify @ 0x1C00B8EB0 (ndisFInvokeDevicePnPEventNotify.c)
 *     ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00BDC54 (ndisMInvokeDevicePnPEventNotifyHandler.c)
 */

void __fastcall ndisDevicePnPEventNotifyMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int32 a2,
        void *a3,
        unsigned int a4)
{
  _QWORD *LowerFilterWithPnpRef; // rax
  _QWORD *v9; // rdi
  void (__fastcall *PnPEventNotifyHandler)(void *, _NDIS_DEVICE_PNP_EVENT, void *, unsigned int); // rax
  struct _NET_DEVICE_PNP_EVENT NetDevicePnPEvent; // [rsp+30h] [rbp-68h] BYREF

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x3Cu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, (__int64)a1, a2);
  memset(&NetDevicePnPEvent, 0, sizeof(NetDevicePnPEvent));
  NetDevicePnPEvent.Header = (_NDIS_OBJECT_HEADER)3146112;
  NetDevicePnPEvent.DevicePnPEvent = a2;
  NetDevicePnPEvent.InformationBuffer = a3;
  NetDevicePnPEvent.InformationBufferLength = a4;
  LowerFilterWithPnpRef = (_QWORD *)ndisGetLowerFilterWithPnpRef((__int64)a1, 0LL);
  v9 = LowerFilterWithPnpRef;
  if ( LowerFilterWithPnpRef )
  {
    if ( *(_QWORD *)(LowerFilterWithPnpRef[2] + 272LL) )
      ndisFInvokeDevicePnPEventNotify((__int64)LowerFilterWithPnpRef, (__int64)&NetDevicePnPEvent);
    else
      NdisFDevicePnPEventNotify(LowerFilterWithPnpRef, &NetDevicePnPEvent);
    ndisDereferenceRef(v9 + 40, 6u);
  }
  else if ( a1->MajorNdisVersion < 6u )
  {
    PnPEventNotifyHandler = a1->DriverHandle->MiniportCharacteristics.PnPEventNotifyHandler;
    if ( PnPEventNotifyHandler )
      PnPEventNotifyHandler(a1->MiniportAdapterContext, (_NDIS_DEVICE_PNP_EVENT)a2, a3, a4);
  }
  else if ( (a1->Flags & 0x80u) == 0 && SLOBYTE(a1->DriverHandle->Flags) >= 0 )
  {
    if ( a1->SelectiveSuspend )
      ndisSetBusySync(a1, 0x25u, 0);
    ndisMInvokeDevicePnPEventNotifyHandler(a1, &NetDevicePnPEvent);
    if ( a1->SelectiveSuspend )
      ndisClearBusy((__int64)a1, 1, 37);
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x3Du, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, (__int64)a1, a2);
}
