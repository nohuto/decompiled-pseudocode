/*
 * XREFs of NdisReleaseRWLock @ 0x1C000EBE0
 * Callers:
 *     ndisPostSetOpenPacketFilter @ 0x1C0026878 (ndisPostSetOpenPacketFilter.c)
 *     XNoteFilterOpenAdapter @ 0x1C0026E74 (XNoteFilterOpenAdapter.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0031BA4 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0038710 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C007E270 (ndisBindUnbindPeriodicReceives.c)
 *     ?ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0081F5C (-ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0087C90 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0087E90 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0088060 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0088540 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00888A0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisMCoReceiveComplete @ 0x1C0088C70 (NdisMCoReceiveComplete.c)
 *     ?ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x1C00893A4 (-ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@P.c)
 *     ?ndisMIsLoopbackPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@PEAPEAU2@@Z @ 0x1C00895AC (-ndisMIsLoopbackPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@PEAPEAU2@@Z.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C008EF14 (ndisFIsLoopbackNetBuffer.c)
 *     EthFilterDprIndicateReceive @ 0x1C00A18D0 (EthFilterDprIndicateReceive.c)
 *     EthFilterDprIndicateReceiveComplete @ 0x1C00A1D00 (EthFilterDprIndicateReceiveComplete.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C00A1FD0 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C00A2074 (EthQueryOpenFilterAddresses.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C00A2310 (ethFilterDprIndicateReceivePacket.c)
 *     XRemoveBindingFromLists @ 0x1C00A2E94 (XRemoveBindingFromLists.c)
 *     ndisMIndicatePacket @ 0x1C00A3260 (ndisMIndicatePacket.c)
 *     ndisPeriodicReceivesWorker @ 0x1C00AEEC0 (ndisPeriodicReceivesWorker.c)
 *     ?ndisVerifyNdisReleaseRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z @ 0x1C00C3FA0 (-ndisVerifyNdisReleaseRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z.c)
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
