/*
 * XREFs of NdisMNetPnPEvent @ 0x1C00A4310
 * Callers:
 *     NdisIMNotifyPnPEvent @ 0x1C00A4280 (NdisIMNotifyPnPEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisPnPPortActivation @ 0x1C0062064 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C006272C (ndisPnPPortDeactivation.c)
 *     ndisBindRequest @ 0x1C00A49B4 (ndisBindRequest.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00FCDB8 (ndisShallowCopyNetPnPEvent.c)
 */

NDIS_STATUS __stdcall NdisMNetPnPEvent(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_PNP_EVENT_NOTIFICATION NetPnPEventNotification)
{
  _NET_PNP_EVENT_CODE NetEvent; // ebx
  NDIS_STATUS v5; // esi
  int v6; // edx
  NDIS_STATUS v7; // eax
  unsigned __int8 v8; // al
  _DWORD v10[44]; // [rsp+40h] [rbp-E8h] BYREF

  NetEvent = NetPnPEventNotification->NetPnPEvent.NetEvent;
  v5 = 0;
  memset(v10, 0, sizeof(v10));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      13,
      59,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)MiniportAdapterHandle,
      NetEvent);
  }
  if ( NetEvent <= NetEventPortDeactivation )
  {
    if ( NetEvent == NetEventPortDeactivation )
    {
      v7 = ndisPnPPortDeactivation(
             (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle,
             (__int64)NetPnPEventNotification);
LABEL_20:
      v5 = v7;
      goto LABEL_21;
    }
    if ( NetEvent <= NetEventSetPower )
      goto LABEL_21;
    if ( NetEvent > NetEventCancelRemoveDevice && NetEvent != NetEventPnPCapabilities )
    {
      if ( NetEvent != NetEventPortActivation )
        goto LABEL_21;
      v7 = ndisPnPPortActivation((__int64)MiniportAdapterHandle, (__int64)NetPnPEventNotification);
      goto LABEL_20;
    }
LABEL_19:
    ndisInitializeNetPnPEvent(v10, 0LL);
    ndisShallowCopyNetPnPEvent(v10, NetPnPEventNotification);
    v7 = ndisDevicePnPEventNotifyFiltersAndAllTransports((__int64)MiniportAdapterHandle, (__int64)v10);
    goto LABEL_20;
  }
  if ( NetEvent < NetEventNDKEnable )
    goto LABEL_21;
  if ( NetEvent <= NetEventNDKDisable || NetEvent == NetEventSwitchActivate )
    goto LABEL_19;
  if ( (unsigned int)(NetEvent - 18) <= 3 )
  {
    v8 = *((_BYTE *)MiniportAdapterHandle + 32);
    if ( v8 > 6u || v8 == 6 && *((_BYTE *)MiniportAdapterHandle + 33) >= 0x32u )
      ndisBindRequest(
        (ULONG_PTR)MiniportAdapterHandle,
        (Ndis::BindEngine *)((char *)MiniportAdapterHandle + 5104),
        (Ndis::BindState *)((char *)MiniportAdapterHandle + 5032),
        (ULONG_PTR)NetPnPEventNotification);
  }
LABEL_21:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      0xDu,
      0x3Cu,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)MiniportAdapterHandle,
      NetEvent,
      v5);
  return v5;
}
