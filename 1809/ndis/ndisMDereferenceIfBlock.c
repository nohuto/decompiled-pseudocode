/*
 * XREFs of ndisMDereferenceIfBlock @ 0x1C0019E34
 * Callers:
 *     ndisIndicateInitialStateToBinding @ 0x1C00188F4 (ndisIndicateInitialStateToBinding.c)
 *     ndisIfSetInterfaceState @ 0x1C0019BD4 (ndisIfSetInterfaceState.c)
 *     ndisMSetGeneralAttributes @ 0x1C001DD54 (ndisMSetGeneralAttributes.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0022BD0 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ndisIfDetachMiniportBlock @ 0x1C0042740 (ndisIfDetachMiniportBlock.c)
 *     ndisIfScheduleTimestampCapabilityChangeNotification @ 0x1C00429B8 (ndisIfScheduleTimestampCapabilityChangeNotification.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0068AB0 (NdisMReenumerateFailedAdapter.c)
 *     ndisPktMonMiniportRegister @ 0x1C00BDA64 (ndisPktMonMiniportRegister.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00F1380 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisMiniportFatalError @ 0x1C00F434C (ndisMiniportFatalError.c)
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00F5100 (ndisQueuedReenumerateFailedAdapter.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C010ABF0 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C0119DD8 (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0019E98 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 */

void __fastcall ndisMDereferenceIfBlock(__int64 a1, enum _NDIS_MPIF_REFTAG a2)
{
  KIRQL v4; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  IFBLOCK_DEREFERENCE_MINIPORT_LINK(*(struct _NDIS_IF_BLOCK **)(a1 + 4072), a2);
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v4);
}
