/*
 * XREFs of ndisDereferencePackage @ 0x1C00B6834
 * Callers:
 *     ndisCloseIrpHandler @ 0x1C0009CA0 (ndisCloseIrpHandler.c)
 *     ndisQuerySetMiniportEx @ 0x1C000AC50 (ndisQuerySetMiniportEx.c)
 *     ndisCreateHandler @ 0x1C000F8B0 (ndisCreateHandler.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021CD8 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterDeviceEx @ 0x1C0024440 (NdisRegisterDeviceEx.c)
 *     ndisQueueFilterOnDriver @ 0x1C0025030 (ndisQueueFilterOnDriver.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0052C10 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0053340 (NdisCmRegisterAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C0053690 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C0059F60 (NdisEnumerateFilterModules.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisCleanupUserOpenContext @ 0x1C005F834 (ndisCleanupUserOpenContext.c)
 *     NdisDeregisterDeviceEx @ 0x1C0064BA0 (NdisDeregisterDeviceEx.c)
 *     NdisMDeregisterDevice @ 0x1C0064F00 (NdisMDeregisterDevice.c)
 *     ndisDeviceInternalDispatch @ 0x1C0068FC4 (ndisDeviceInternalDispatch.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisQueryPower @ 0x1C010A6B4 (ndisQueryPower.c)
 *     ndisPnPNotifyAllTransports @ 0x1C010A900 (ndisPnPNotifyAllTransports.c)
 *     ndisDevicePowerDown @ 0x1C010ABF0 (ndisDevicePowerDown.c)
 *     ndisQueueMiniportOnDriver @ 0x1C010B264 (ndisQueueMiniportOnDriver.c)
 *     ndisNotifyMiniports @ 0x1C010C298 (ndisNotifyMiniports.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C010D520 (NdisOpenAdapterEx.c)
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 *     NdisMRegisterInterruptEx @ 0x1C010F280 (NdisMRegisterInterruptEx.c)
 *     ndisFindRootDevice @ 0x1C0114F94 (ndisFindRootDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C01159F0 (ndisDeQueueMiniportOnDriver.c)
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 *     ndisMKillOpen @ 0x1C0116A68 (ndisMKillOpen.c)
 *     ndisMUnload @ 0x1C0116CF0 (ndisMUnload.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C0116F00 (NdisMCmRegisterAddressFamily.c)
 *     ndisNotifyAfRegistration @ 0x1C01173B0 (ndisNotifyAfRegistration.c)
 *     NdisDeregisterProtocol @ 0x1C0117730 (NdisDeregisterProtocol.c)
 *     NdisMAllocateMapRegisters @ 0x1C0117D80 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C0118370 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C0118440 (NdisMFreeMapRegisters.c)
 *     NdisMRegisterDevice @ 0x1C01185A0 (NdisMRegisterDevice.c)
 *     NdisMRegisterDmaChannel @ 0x1C0118870 (NdisMRegisterDmaChannel.c)
 *     ndisFindMiniportOnGlobalList @ 0x1C0118BB0 (ndisFindMiniportOnGlobalList.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C0118D10 (ndisMFinishQueuedPendingOpen.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 *     ndisRegisterMiniportDriver @ 0x1C01192C0 (ndisRegisterMiniportDriver.c)
 *     NdisMDeregisterInterruptEx @ 0x1C01199A0 (NdisMDeregisterInterruptEx.c)
 *     ndisPmHaltMiniport @ 0x1C0119C48 (ndisPmHaltMiniport.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C011A5A8 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011A9B4 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDereferencePackage(__int64 a1)
{
  MmUnlockPagableImageSection(*(PVOID *)(a1 + 16));
  _InterlockedDecrement((volatile signed __int32 *)a1);
}
