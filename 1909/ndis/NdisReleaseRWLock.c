/*
 * XREFs of NdisReleaseRWLock @ 0x1C000EBE0
 * Callers:
 *     ndisPostSetOpenPacketFilter @ 0x1C0026868 (ndisPostSetOpenPacketFilter.c)
 *     XNoteFilterOpenAdapter @ 0x1C0026E64 (XNoteFilterOpenAdapter.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0031B94 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0038700 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C007E440 (ndisBindUnbindPeriodicReceives.c)
 *     ?ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008212C (-ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0087E60 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0088060 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0088230 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0088710 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0088A70 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisMCoReceiveComplete @ 0x1C0088E40 (NdisMCoReceiveComplete.c)
 *     ?ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x1C0089574 (-ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@P.c)
 *     ?ndisMIsLoopbackPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@PEAPEAU2@@Z @ 0x1C008977C (-ndisMIsLoopbackPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@PEAPEAU2@@Z.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C008F0E4 (ndisFIsLoopbackNetBuffer.c)
 *     EthFilterDprIndicateReceive @ 0x1C00A1AA0 (EthFilterDprIndicateReceive.c)
 *     EthFilterDprIndicateReceiveComplete @ 0x1C00A1ED0 (EthFilterDprIndicateReceiveComplete.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C00A21A0 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C00A2244 (EthQueryOpenFilterAddresses.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C00A24E0 (ethFilterDprIndicateReceivePacket.c)
 *     XRemoveBindingFromLists @ 0x1C00A3064 (XRemoveBindingFromLists.c)
 *     ndisMIndicatePacket @ 0x1C00A3430 (ndisMIndicatePacket.c)
 *     ndisPeriodicReceivesWorker @ 0x1C00AF090 (ndisPeriodicReceivesWorker.c)
 *     ?ndisVerifyNdisReleaseRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z @ 0x1C00C4170 (-ndisVerifyNdisReleaseRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z.c)
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 *     ?ndisUnloadPeriodicReceives@@_Y2INIT@@AXXZ @ 0x1C0147FA0 (-ndisUnloadPeriodicReceives@@_Y2INIT@@AXXZ.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisReleaseRWLock(PNDIS_RW_LOCK_EX Lock, PLOCK_STATE_EX LockState)
{
  unsigned __int8 v2; // al
  _QWORD *v3; // r8
  KIRQL OldIrql; // cl
  KSPIN_LOCK *v5; // rcx
  KIRQL v6; // dl

  v2 = LockState->LockState;
  if ( v2 == 3 )
  {
    v3 = (_QWORD *)(*((_QWORD *)Lock + 4) + (KeGetPcr()->Prcb.Number << 12));
    --*v3;
    OldIrql = LockState->OldIrql;
    LockState->LockState = -1;
    if ( OldIrql != 2 )
      KeLowerIrql(OldIrql);
  }
  else if ( v2 == 4 )
  {
    LockState->LockState = -1;
    *((_QWORD *)Lock + 3) = 0LL;
    v5 = (KSPIN_LOCK *)((char *)Lock + 16);
    v6 = LockState->OldIrql;
    if ( v6 == 2 )
      KeReleaseSpinLockFromDpcLevel(v5);
    else
      KeReleaseSpinLock(v5, v6);
  }
}
