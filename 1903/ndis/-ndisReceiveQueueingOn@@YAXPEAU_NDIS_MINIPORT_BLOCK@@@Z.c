/*
 * XREFs of ?ndisReceiveQueueingOn@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007CDEC
 * Callers:
 *     ?ndisSwitchMiniportReceiveFunction@@YAJW4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C007CF58 (-ndisSwitchMiniportReceiveFunction@@YAJW4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C007E270 (ndisBindUnbindPeriodicReceives.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C007E9BC (ndisTracePeriodicRcvOnOff.c)
 */

void __fastcall ndisReceiveQueueingOn(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  a1->NormalTopReceive = 0;
  a1->TopIndicateNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))&ndisMIndicateReceiveNblsWithThrottling;
  a1->PeriodicReceiveQueue.NextMiniportBlock = (_NDIS_MINIPORT_BLOCK *)WPP_MAIN_CB.DeviceQueue.Lock;
  ++*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
  WPP_MAIN_CB.DeviceQueue.Lock = (unsigned __int64)a1;
  a1->PeriodicReceiveQueue.State = (a1->PeriodicReceiveQueue.Paused == 1) + 1;
  if ( BYTE2(dword_1C00E8058) )
  {
    LOBYTE(a2) = 1;
    ndisTracePeriodicRcvOnOff(
      a1,
      a2,
      *(unsigned int *)(&WPP_MAIN_CB.DeviceQueue.Size + 1),
      *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
  }
}
