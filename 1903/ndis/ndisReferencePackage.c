/*
 * XREFs of ndisReferencePackage @ 0x1C0001008
 * Callers:
 *     ndisCloseIrpHandler @ 0x1C0001070 (ndisCloseIrpHandler.c)
 *     ndisCreateHandler @ 0x1C000FBB0 (ndisCreateHandler.c)
 *     ndisSetPower @ 0x1C0013948 (ndisSetPower.c)
 *     ndisPnPDispatch @ 0x1C0018190 (ndisPnPDispatch.c)
 *     ?ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0019840 (-ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 *     ndisInitializeAdapter @ 0x1C002CA48 (ndisInitializeAdapter.c)
 *     NdisRegisterDeviceEx @ 0x1C002D440 (NdisRegisterDeviceEx.c)
 *     NdisSetOptionalHandlers @ 0x1C002DCC0 (NdisSetOptionalHandlers.c)
 *     ?ndisStartDeviceWorkItem@@YAXPEAX@Z @ 0x1C002F270 (-ndisStartDeviceWorkItem@@YAXPEAX@Z.c)
 *     NdisMSetMiniportAttributes @ 0x1C002F6B0 (NdisMSetMiniportAttributes.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036F70 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterProtocolDriver @ 0x1C0037860 (NdisRegisterProtocolDriver.c)
 *     ndisQueueFilterOnDriver @ 0x1C003C678 (ndisQueueFilterOnDriver.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C007F9E0 (NdisIMInitializeDeviceInstanceEx.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C00829C0 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0083DF0 (NdisCmRegisterAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C0086260 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C008CD10 (NdisEnumerateFilterModules.c)
 *     NdisRegisterProtocol @ 0x1C0092F20 (NdisRegisterProtocol.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093A48 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisCleanupUserOpenContext @ 0x1C0094A3C (ndisCleanupUserOpenContext.c)
 *     NdisDeregisterDeviceEx @ 0x1C009D0E0 (NdisDeregisterDeviceEx.c)
 *     NdisLWMInitializeNetworkInterface @ 0x1C009D6C0 (NdisLWMInitializeNetworkInterface.c)
 *     NdisLWMStartNetworkInterface @ 0x1C009DA50 (NdisLWMStartNetworkInterface.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C009DBC0 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisMDeregisterDevice @ 0x1C009E010 (NdisMDeregisterDevice.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C009EEA0 (NdisWdfPnpPowerEventHandler.c)
 *     ?ndisPnPHandlePagingIrp@@YAXPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A3A98 (-ndisPnPHandlePagingIrp@@YAXPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisDeviceInternalDispatch @ 0x1C00A4C88 (ndisDeviceInternalDispatch.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A834C (ndisWmiChangeSingleInstance.c)
 *     ndisWmiQueryAllData @ 0x1C00A8D0C (ndisWmiQueryAllData.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C0105238 (ndisPnPNotifyBindingUnlocked.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01056FC (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C010A190 (-ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010B988 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010BB80 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010BD5C (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C012A4FC (ndisQueryPower.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ndisNotifyMiniports @ 0x1C012B80C (ndisNotifyMiniports.c)
 *     NdisOpenAdapterEx @ 0x1C012B900 (NdisOpenAdapterEx.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 *     NdisMSetAttributesEx @ 0x1C012F0C0 (NdisMSetAttributesEx.c)
 *     NdisMRegisterInterruptEx @ 0x1C012F4F0 (NdisMRegisterInterruptEx.c)
 *     ndisQueueMiniportOnDriver @ 0x1C012FD5C (ndisQueueMiniportOnDriver.c)
 *     ndisFindRootDevice @ 0x1C0136458 (ndisFindRootDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C0136900 (ndisDeQueueMiniportOnDriver.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 *     ndisMKillOpen @ 0x1C01379FC (ndisMKillOpen.c)
 *     ndisMUnload @ 0x1C0137C70 (ndisMUnload.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C0137ED0 (NdisMCmRegisterAddressFamily.c)
 *     ndisNotifyAfRegistration @ 0x1C0138410 (ndisNotifyAfRegistration.c)
 *     NdisCloseAdapter @ 0x1C0138530 (NdisCloseAdapter.c)
 *     NdisDeregisterProtocol @ 0x1C0138860 (NdisDeregisterProtocol.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0139034 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 *     NdisMAllocateMapRegisters @ 0x1C0139490 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C0139AD0 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C0139BE0 (NdisMFreeMapRegisters.c)
 *     NdisMRegisterDevice @ 0x1C0139D80 (NdisMRegisterDevice.c)
 *     NdisMRegisterDmaChannel @ 0x1C013A050 (NdisMRegisterDmaChannel.c)
 *     ndisFindMiniportOnGlobalList @ 0x1C013A410 (ndisFindMiniportOnGlobalList.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C013A5B0 (ndisMFinishQueuedPendingOpen.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 *     NdisMDeregisterInterruptEx @ 0x1C013B000 (NdisMDeregisterInterruptEx.c)
 *     ndisPmHaltMiniport @ 0x1C013B334 (ndisPmHaltMiniport.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BD64 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     NdisMSleep @ 0x1C001BEC0 (NdisMSleep.c)
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
