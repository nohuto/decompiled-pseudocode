/*
 * XREFs of ?ndisReceiveQueueingOff@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007CD80
 * Callers:
 *     ?ndisSwitchMiniportReceiveFunction@@YAJW4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C007CF58 (-ndisSwitchMiniportReceiveFunction@@YAJW4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C007E270 (ndisBindUnbindPeriodicReceives.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C007E9BC (ndisTracePeriodicRcvOnOff.c)
 */

void __fastcall ndisReceiveQueueingOff(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int8 InitMode; // al
  void (__fastcall *v3)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rcx

  a1->PeriodicReceiveQueue.State = PeriodicReceivesOff;
  if ( BYTE2(dword_1C00E8058) )
    ndisTracePeriodicRcvOnOff(a1, 0LL, 0LL, 0LL);
  InitMode = a1->InitMode;
  v3 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferListsWithLock;
  if ( !InitMode )
    v3 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  a1->NormalTopReceive = InitMode == 0;
  a1->TopIndicateNetBufferListsHandler = v3;
  a1->TopIndicateLoopbackNetBufferListsHandler = v3;
  --*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
}
