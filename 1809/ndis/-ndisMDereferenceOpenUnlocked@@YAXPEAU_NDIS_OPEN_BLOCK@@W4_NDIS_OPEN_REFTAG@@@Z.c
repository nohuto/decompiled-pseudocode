/*
 * XREFs of ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C000AC50 (ndisQuerySetMiniportEx.c)
 *     ndisMOidRequest @ 0x1C0016B50 (ndisMOidRequest.c)
 *     ndisAllocateReceiveQueue @ 0x1C003AA90 (ndisAllocateReceiveQueue.c)
 *     ndisDereferenceReceiveFilter @ 0x1C003B1EC (ndisDereferenceReceiveFilter.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003B3C8 (ndisDereferenceReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003CA90 (ndisSetReceiveFilter.c)
 *     ndisLegacyRequest @ 0x1C0045430 (ndisLegacyRequest.c)
 *     ndisMDirectOidRequest @ 0x1C0045790 (ndisMDirectOidRequest.c)
 *     ndisPktMonRegisterComponentsCallback @ 0x1C0050680 (ndisPktMonRegisterComponentsCallback.c)
 *     NdisMCoOidRequestComplete @ 0x1C0053880 (NdisMCoOidRequestComplete.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C0058360 (ndisMSendPacketCompleteToOpen.c)
 *     ndisSendCompleteWithPause @ 0x1C0059540 (ndisSendCompleteWithPause.c)
 *     ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1C005DF70 (-ndisUnbindAdapterWorkItem@@YAXPEAX@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BED24 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C011525C (ndisHandleProtocolReconfigNotification.c)
 *     ndisNotifyAfRegistration @ 0x1C01173B0 (ndisNotifyAfRegistration.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C0118D10 (ndisMFinishQueuedPendingOpen.c)
 *     NdisMCoRequestComplete @ 0x1C011E2F0 (NdisMCoRequestComplete.c)
 *     ndisCoIndicateStatusInternal @ 0x1C011E468 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017490 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
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
  *(_DWORD *)(v2 + 1864) = 1442229;
  ndisMDereferenceOpenLocked(a1, v6);
  *(_QWORD *)(v2 + 520) = 0LL;
  *(_DWORD *)(v2 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v7);
}
