/*
 * XREFs of ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     ndisMOidRequest @ 0x1C0015410 (ndisMOidRequest.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C005E400 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C005EA6C (-ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C005EC38 (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ndisSetReceiveFilter @ 0x1C0060DE8 (ndisSetReceiveFilter.c)
 *     ndisLegacyRequest @ 0x1C006ADD0 (ndisLegacyRequest.c)
 *     ndisMDirectOidRequest @ 0x1C006B170 (ndisMDirectOidRequest.c)
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C007C9F0 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 *     ?ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0081F5C (-ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     NdisMCoOidRequestComplete @ 0x1C0086720 (NdisMCoOidRequestComplete.c)
 *     NdisMCoRequestComplete @ 0x1C0086810 (NdisMCoRequestComplete.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C008B7D0 (ndisMSendPacketCompleteToOpen.c)
 *     ndisSendCompleteWithPause @ 0x1C008C6B0 (ndisSendCompleteWithPause.c)
 *     ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1C0092540 (-ndisUnbindAdapterWorkItem@@YAXPEAX@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z @ 0x1C0135CB8 (-ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z.c)
 *     ndisNotifyAfRegistration @ 0x1C0138410 (ndisNotifyAfRegistration.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C013A5B0 (ndisMFinishQueuedPendingOpen.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C118 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 */

void __fastcall ndisMDereferenceOpenUnlocked(__int64 a1, char a2)
{
  __int64 v2; // rbp
  KIRQL v5; // al
  __int64 v6; // rdx
  KIRQL v7; // bl

  v2 = *(_QWORD *)(a1 + 16);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  LOBYTE(v6) = a2;
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  v7 = v5;
  ndisMDereferenceOpenLocked(a1, v6);
  *(_QWORD *)(v2 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v7);
}
