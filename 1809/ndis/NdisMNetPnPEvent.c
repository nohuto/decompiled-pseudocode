/*
 * XREFs of NdisMNetPnPEvent @ 0x1C00F4190
 * Callers:
 *     NdisIMNotifyPnPEvent @ 0x1C00F4110 (NdisIMNotifyPnPEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     ndisPnPPortActivation @ 0x1C003DA98 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003E02C (ndisPnPPortDeactivation.c)
 *     ?ndisMBindRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0068910 (-ndisMBindRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B852C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00C2FC4 (ndisShallowCopyNetPnPEvent.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C342C (ndisInitializeNetPnPEvent.c)
 */

NDIS_STATUS __stdcall NdisMNetPnPEvent(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification)
{
  _NET_PNP_EVENT_CODE NetEvent; // ebx
  NDIS_STATUS v5; // edi
  NDIS_STATUS v6; // eax
  _QWORD v8[22]; // [rsp+30h] [rbp-D8h] BYREF

  NetEvent = NetPnPEventNotification->NetPnPEvent.NetEvent;
  v5 = 0;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x3Bu, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (__int64)MiniportAdapterHandle, NetEvent);
  if ( NetEvent > NetEventPortDeactivation )
  {
    if ( NetEvent < NetEventNDKEnable )
      goto LABEL_18;
    if ( NetEvent <= NetEventNDKDisable || NetEvent == NetEventSwitchActivate )
    {
LABEL_16:
      ndisInitializeNetPnPEvent(v8, 0LL);
      ndisShallowCopyNetPnPEvent((__int64)v8, (__int64)NetPnPEventNotification);
      v6 = ndisDevicePnPEventNotifyFiltersAndAllTransports(
             (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle,
             (__int64)v8);
      goto LABEL_17;
    }
    if ( (unsigned int)(NetEvent - 18) > 3 )
      goto LABEL_18;
    v6 = ndisMBindRequest((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, NetPnPEventNotification);
  }
  else
  {
    if ( NetEvent != NetEventPortDeactivation )
    {
      if ( NetEvent <= NetEventSetPower )
        goto LABEL_18;
      if ( NetEvent > NetEventCancelRemoveDevice && NetEvent != NetEventPnPCapabilities )
      {
        if ( NetEvent != NetEventPortActivation )
          goto LABEL_18;
        v6 = ndisPnPPortActivation(
               (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle,
               (__int64)NetPnPEventNotification);
        goto LABEL_17;
      }
      goto LABEL_16;
    }
    v6 = ndisPnPPortDeactivation((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, (__int64)NetPnPEventNotification);
  }
LABEL_17:
  v5 = v6;
LABEL_18:
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qdD(0x3Cu, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (__int64)MiniportAdapterHandle, NetEvent, v5);
  return v5;
}
