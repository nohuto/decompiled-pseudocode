/*
 * XREFs of ndisReferenceMiniportNoCheck @ 0x1C001BC9C
 * Callers:
 *     ndisSetDevicePowerOnComplete @ 0x1C0012B40 (ndisSetDevicePowerOnComplete.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ndisQueueRequestWorkItem @ 0x1C001A984 (ndisQueueRequestWorkItem.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C001DCEC (ndisMOidRequestCompleteInternal.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C0077328 (ndisUpdateAndIndicatePMCapabilities.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C00829C0 (NdisClOpenAddressFamilyEx.c)
 *     NdisMPromoteMiniport @ 0x1C0098430 (NdisMPromoteMiniport.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C009DBC0 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisMFreeSharedMemory @ 0x1C009E1A0 (NdisMFreeSharedMemory.c)
 *     ?ndis5InterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A0250 (-ndis5InterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C00A09BC (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00A4F64 (ndisPnPIrpSurpriseRemoval.c)
 *     ?ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00A5614 (-ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00ADE28 (-ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisSriovInterfaceReference@@YAXPEAX@Z @ 0x1C00B0F30 (-ndisSriovInterfaceReference@@YAXPEAX@Z.c)
 *     ndisPnPQuerySriovInterface @ 0x1C00B5618 (ndisPnPQuerySriovInterface.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C01169C0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C0118F14 (ndisPnPIrpRemoveDevice.c)
 *     ndisWdfPreReleaseHardware @ 0x1C0119350 (ndisWdfPreReleaseHardware.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisMFinishClose @ 0x1C0137820 (ndisMFinishClose.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 */

void __fastcall ndisReferenceMiniportNoCheck(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  KIRQL v5; // al
  int v6; // edx
  struct _NDIS_REFCOUNT_BLOCK *v7; // rcx
  KIRQL v8; // si

  v2 = a1 + 4432;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4432));
  v7 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4888);
  v8 = v5;
  if ( v7 )
    NdisReferenceWithTag(v7, a2);
  ++*(_DWORD *)(v2 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      20,
      13,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1,
      *(_DWORD *)(a1 + 4440));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v8);
}
