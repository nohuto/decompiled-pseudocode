/*
 * XREFs of NdisReleaseRWLock @ 0x1C0005F00
 * Callers:
 *     XNoteFilterOpenAdapter @ 0x1C001AAC0 (XNoteFilterOpenAdapter.c)
 *     ndisPostSetOpenPacketFilter @ 0x1C001AE3C (ndisPostSetOpenPacketFilter.c)
 *     ndisConfigurePeriodicReceives @ 0x1C001E5FC (ndisConfigurePeriodicReceives.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0023280 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004FC88 (ndisBindUnbindPeriodicReceives.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00541F0 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0054440 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0054610 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0054B50 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0054EB0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisMIsLoopbackNetBuffer @ 0x1C00572C4 (ndisMIsLoopbackNetBuffer.c)
 *     ndisMIsLoopbackPacket @ 0x1C0057520 (ndisMIsLoopbackPacket.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C005BAF4 (ndisFIsLoopbackNetBuffer.c)
 *     EthFilterDprIndicateReceive @ 0x1C0066EA0 (EthFilterDprIndicateReceive.c)
 *     EthFilterDprIndicateReceiveComplete @ 0x1C00672C0 (EthFilterDprIndicateReceiveComplete.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C00673A4 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C006743C (EthQueryOpenFilterAddresses.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0067510 (ethFilterDprIndicateReceivePacket.c)
 *     XRemoveBindingFromLists @ 0x1C0068090 (XRemoveBindingFromLists.c)
 *     ndisMIndicatePacket @ 0x1C0068450 (ndisMIndicatePacket.c)
 *     ndisPeriodicReceivesWorker @ 0x1C006E750 (ndisPeriodicReceivesWorker.c)
 *     ?ndisVerifyNdisReleaseRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z @ 0x1C007F020 (-ndisVerifyNdisReleaseRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z.c)
 *     ndisPnPNotifyAllTransports @ 0x1C010A900 (ndisPnPNotifyAllTransports.c)
 *     ndisCoIndicateStatusInternal @ 0x1C011E468 (ndisCoIndicateStatusInternal.c)
 *     NdisMCoReceiveComplete @ 0x1C011EDA0 (NdisMCoReceiveComplete.c)
 *     ndisUnloadPeriodicReceives @ 0x1C0129F60 (ndisUnloadPeriodicReceives.c)
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
