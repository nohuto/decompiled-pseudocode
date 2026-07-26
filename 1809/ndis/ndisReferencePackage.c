/*
 * XREFs of ndisReferencePackage @ 0x1C00B685C
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
 *     ndisWmiQueryAllData @ 0x1C00B4384 (ndisWmiQueryAllData.c)
 *     ndisSetPower @ 0x1C00B887C (ndisSetPower.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00BA2C0 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BA894 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisStartDeviceWorkItem @ 0x1C00BC030 (ndisStartDeviceWorkItem.c)
 *     ndisInitializeAdapter @ 0x1C00BC300 (ndisInitializeAdapter.c)
 *     NdisSetOptionalHandlers @ 0x1C00BD790 (NdisSetOptionalHandlers.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00BE150 (ndisInitModeTimeoutWorkItem.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00BE800 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00C33BC (ndisPnPNotifyBindingUnlocked.c)
 *     ndisPnPDispatch @ 0x1C00C8490 (ndisPnPDispatch.c)
 *     NdisMSetMiniportAttributes @ 0x1C00C95F0 (NdisMSetMiniportAttributes.c)
 *     ndisDispatchRequest @ 0x1C00CB980 (ndisDispatchRequest.c)
 *     NdisRegisterProtocolDriver @ 0x1C00CDAF0 (NdisRegisterProtocolDriver.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00CF8F8 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00EB0F0 (NdisIMInitializeDeviceInstanceEx.c)
 *     NdisRegisterProtocol @ 0x1C00EDB50 (NdisRegisterProtocol.c)
 *     NdisLWMInitializeNetworkInterface @ 0x1C00F16A0 (NdisLWMInitializeNetworkInterface.c)
 *     NdisLWMStartNetworkInterface @ 0x1C00F1980 (NdisLWMStartNetworkInterface.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00F1A90 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00F2320 (NdisWdfPnpPowerEventHandler.c)
 *     ndisPnPHandlePagingIrp @ 0x1C00F442C (ndisPnPHandlePagingIrp.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisQueryPower @ 0x1C010A6B4 (ndisQueryPower.c)
 *     ndisPnPNotifyAllTransports @ 0x1C010A900 (ndisPnPNotifyAllTransports.c)
 *     ndisDevicePowerDown @ 0x1C010ABF0 (ndisDevicePowerDown.c)
 *     ndisQueueMiniportOnDriver @ 0x1C010B264 (ndisQueueMiniportOnDriver.c)
 *     ndisNotifyMiniports @ 0x1C010C298 (ndisNotifyMiniports.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C010D520 (NdisOpenAdapterEx.c)
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 *     NdisMSetAttributesEx @ 0x1C010E770 (NdisMSetAttributesEx.c)
 *     NdisMRegisterInterruptEx @ 0x1C010F280 (NdisMRegisterInterruptEx.c)
 *     ndisFindRootDevice @ 0x1C0114F94 (ndisFindRootDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C01159F0 (ndisDeQueueMiniportOnDriver.c)
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 *     ndisMKillOpen @ 0x1C0116A68 (ndisMKillOpen.c)
 *     ndisMUnload @ 0x1C0116CF0 (ndisMUnload.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C0116F00 (NdisMCmRegisterAddressFamily.c)
 *     ndisNotifyAfRegistration @ 0x1C01173B0 (ndisNotifyAfRegistration.c)
 *     NdisCloseAdapter @ 0x1C0117490 (NdisCloseAdapter.c)
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
 *     NdisMSleep @ 0x1C00CF740 (NdisMSleep.c)
 */

void __fastcall ndisReferencePackage(__int64 a1)
{
  signed __int32 v2; // eax
  void *v3; // rcx
  signed __int32 v4; // eax
  PVOID v5; // rax

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 1u);
  v3 = *(void **)(a1 + 16);
  v4 = v2 + 1;
  if ( !v3 )
  {
    if ( v4 == 1 )
    {
      v5 = MmLockPagableDataSection(*(PVOID *)(a1 + 8));
      *(_QWORD *)(a1 + 16) = v5;
      MmUnlockPagableImageSection(v5);
      v3 = *(void **)(a1 + 16);
    }
    else
    {
      do
      {
        NdisMSleep(0x32u);
        v3 = *(void **)(a1 + 16);
      }
      while ( !v3 );
    }
  }
  MmLockPagableSectionByHandle(v3);
}
