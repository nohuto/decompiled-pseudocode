/*
 * XREFs of ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001BD00
 * Callers:
 *     ndisReferenceOpenByHandle @ 0x1C001BC04 (ndisReferenceOpenByHandle.c)
 *     ndisMRestoreFilterSettings @ 0x1C004623C (ndisMRestoreFilterSettings.c)
 *     ndisMapOpenByName @ 0x1C00503C4 (ndisMapOpenByName.c)
 *     ndisPktMonRegisterComponentsCallback @ 0x1C0050680 (ndisPktMonRegisterComponentsCallback.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0052C10 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0053340 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMSendPackets @ 0x1C0058440 (ndisMSendPackets.c)
 *     ndisSendPacketsWithPause @ 0x1C0059670 (ndisSendPacketsWithPause.c)
 *     NdisUnbindAdapter @ 0x1C005E4B0 (NdisUnbindAdapter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisMReset @ 0x1C0063990 (ndisMReset.c)
 *     ndisMDoProtocolRequest @ 0x1C00EE304 (ndisMDoProtocolRequest.c)
 *     NdisOpenAdapterEx @ 0x1C010D520 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 *     ndisCreateNotifyQueue @ 0x1C01170F8 (ndisCreateNotifyQueue.c)
 *     NdisCoOidRequest @ 0x1C011D0B0 (NdisCoOidRequest.c)
 *     ndisCoIndicateStatusInternal @ 0x1C011E468 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 */

void __fastcall ndisMReferenceOpen(__int64 a1, unsigned __int8 a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // bl

  v2 = (KSPIN_LOCK *)(a1 + 600);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
  NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 592), a2);
  ++*(_DWORD *)(a1 + 228);
  KeReleaseSpinLock(v2, v5);
}
