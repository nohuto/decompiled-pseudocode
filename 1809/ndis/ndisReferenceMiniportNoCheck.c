/*
 * XREFs of ndisReferenceMiniportNoCheck @ 0x1C00151C8
 * Callers:
 *     ndisSetDevicePowerOnComplete @ 0x1C00114C0 (ndisSetDevicePowerOnComplete.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ndisQueueRequestWorkItem @ 0x1C0020FA4 (ndisQueueRequestWorkItem.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045B94 (ndisMOidRequestCompleteInternal.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004BB4C (ndisUpdateAndIndicatePMCapabilities.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0052C10 (NdisClOpenAddressFamilyEx.c)
 *     NdisMPromoteMiniport @ 0x1C0060E00 (NdisMPromoteMiniport.c)
 *     NdisMFreeSharedMemory @ 0x1C0064FB0 (NdisMFreeSharedMemory.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0065C7C (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ndis5InterruptDpc @ 0x1C0066060 (ndis5InterruptDpc.c)
 *     ndisQueuePowerIrp @ 0x1C0069BBC (ndisQueuePowerIrp.c)
 *     ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006D1D4 (-ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisSriovInterfaceReference @ 0x1C0071A60 (ndisSriovInterfaceReference.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00EC300 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00F1A90 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00F4D34 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00F52B0 (ndisWdfPreReleaseHardware.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     ndisMFinishClose @ 0x1C01168D0 (ndisMFinishClose.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

void __fastcall ndisReferenceMiniportNoCheck(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  KIRQL v5; // al
  struct _NDIS_REFCOUNT_BLOCK *v6; // rcx
  KIRQL v7; // si

  v2 = a1 + 4472;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4472));
  v6 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4928);
  v7 = v5;
  if ( v6 )
    NdisReferenceWithTag(v6, a2);
  ++*(_DWORD *)(v2 + 8);
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qD(13LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1, *(unsigned int *)(a1 + 4480));
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
}
