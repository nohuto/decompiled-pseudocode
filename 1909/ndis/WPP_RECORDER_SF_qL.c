/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C0006320
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     ?ndisNsiGetIfNameForIfIndex@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0002C20 (-ndisNsiGetIfNameForIfIndex@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0004090 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C0006780 (ndisDereferenceMiniportForNsi.c)
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 *     ndisQueuedCheckForHang @ 0x1C0009E80 (ndisQueuedCheckForHang.c)
 *     ?ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E3@Z @ 0x1C000A244 (-ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E.c)
 *     ?ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C000F160 (-ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisCreateHandler @ 0x1C000FBB0 (ndisCreateHandler.c)
 *     ndisMWakeUpDpcX @ 0x1C0010F50 (ndisMWakeUpDpcX.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0011500 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     NdisTryAcquireNicActive @ 0x1C0011BA0 (NdisTryAcquireNicActive.c)
 *     ?ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0011DE0 (-ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C0012B40 (ndisSetDevicePowerOnComplete.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012C40 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisQueryPowerCompleteSystemState@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012D30 (-ndisQueryPowerCompleteSystemState@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisQueryPowerComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0012E40 (-ndisQueryPowerComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z.c)
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C0013050 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisSetSystemPower @ 0x1C00131C8 (ndisSetSystemPower.c)
 *     ndisSetPower @ 0x1C0013948 (ndisSetPower.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0013D24 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014248 (ndisNotifyDevicePowerStateChange.c)
 *     ndisMRestoreOpenHandlers @ 0x1C00145B4 (ndisMRestoreOpenHandlers.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0016CD8 (ndisWriteWmiStatusIndication.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0016F28 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisPnPDispatch @ 0x1C0018190 (ndisPnPDispatch.c)
 *     ndisWmiQuerySingleInstance @ 0x1C0018CD0 (ndisWmiQuerySingleInstance.c)
 *     ndisWMIDispatch @ 0x1C00191AC (ndisWMIDispatch.c)
 *     ndisPowerDispatch @ 0x1C0019F10 (ndisPowerDispatch.c)
 *     ?ndisNsiEnumerateAllIfStackEntriesFull@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C001A510 (-ndisNsiEnumerateAllIfStackEntriesFull@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C001B984 (ndisDevicePnPEventNotifyMiniport.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ndisMSwapOpenHandlers @ 0x1C001BD5C (ndisMSwapOpenHandlers.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001C33C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 *     NdisMSetBusData @ 0x1C001E3B0 (NdisMSetBusData.c)
 *     ndisIovGetNicSwitchList @ 0x1C001E4F8 (ndisIovGetNicSwitchList.c)
 *     ?ndisQueuedMiniportDpcWorkItem@@YAXPEAX@Z @ 0x1C001EC30 (-ndisQueuedMiniportDpcWorkItem@@YAXPEAX@Z.c)
 *     ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00200C0 (-ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     NdisWriteErrorLogEntry @ 0x1C0022460 (NdisWriteErrorLogEntry.c)
 *     ?ndisWmiEnableEvents@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@@Z @ 0x1C0027ABC (-ndisWmiEnableEvents@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@@Z.c)
 *     ?ndisWmiRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@_KPEAUWMIREGINFOW@@KPEAK@Z @ 0x1C0027E30 (-ndisWmiRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@_KPEAUWMIREGINFOW@@KPEAK@Z.c)
 *     ndisGetPortList @ 0x1C0028234 (ndisGetPortList.c)
 *     ?ndisQueryCustomGuids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_GUID@@PEAG@Z @ 0x1C0029908 (-ndisQueryCustomGuids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_GUID@@PE.c)
 *     ndisIfCreateFilterInterface @ 0x1C002A5AC (ndisIfCreateFilterInterface.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8A0 (NdisOpenConfigurationEx.c)
 *     ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002C1E8 (-ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C002C450 (-ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HA.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C002C8D0 (ndisReadMiniportDefaultPortAuthStates.c)
 *     NdisRegisterDeviceEx @ 0x1C002D430 (NdisRegisterDeviceEx.c)
 *     NdisMMapIoSpace @ 0x1C002D850 (NdisMMapIoSpace.c)
 *     ndisPnPAddDevice @ 0x1C002D984 (ndisPnPAddDevice.c)
 *     NdisSetOptionalHandlers @ 0x1C002DCB0 (NdisSetOptionalHandlers.c)
 *     NdisMAllocateSharedMemory @ 0x1C002DE30 (NdisMAllocateSharedMemory.c)
 *     ndisTranslateResources @ 0x1C002EA18 (ndisTranslateResources.c)
 *     NdisMGetBusData @ 0x1C002EDF0 (NdisMGetBusData.c)
 *     ndisStartDeviceSynchronous @ 0x1C002F158 (ndisStartDeviceSynchronous.c)
 *     ndisPnPIrpStartDevice @ 0x1C002F528 (ndisPnPIrpStartDevice.c)
 *     NdisMSetMiniportAttributes @ 0x1C002F6A0 (NdisMSetMiniportAttributes.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FBB4 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ndisQueryPowerCapabilities @ 0x1C0032F94 (ndisQueryPowerCapabilities.c)
 *     ?ndisQuerySupportedGuidToOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003346C (-ndisQuerySupportedGuidToOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisQueryOidList @ 0x1C00339C4 (ndisQueryOidList.c)
 *     ?ndisSplitStatisticsOids@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAKK@Z @ 0x1C0033B48 (-ndisSplitStatisticsOids@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAKK@Z.c)
 *     NdisMRegisterScatterGatherDma @ 0x1C00353B0 (NdisMRegisterScatterGatherDma.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z @ 0x1C00354F4 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z.c)
 *     NdisAllocateSharedMemory @ 0x1C00357F0 (NdisAllocateSharedMemory.c)
 *     ndisCreateFilterDriverRegistry @ 0x1C00382B0 (ndisCreateFilterDriverRegistry.c)
 *     ndisCreateNdisSupportedOidList @ 0x1C003D584 (ndisCreateNdisSupportedOidList.c)
 *     ndisOidPreRcvFilterEnumFilters @ 0x1C005FED0 (ndisOidPreRcvFilterEnumFilters.c)
 *     ndisOidPreRcvFilterEnumQueues @ 0x1C0060240 (ndisOidPreRcvFilterEnumQueues.c)
 *     ndisEnumeratePorts @ 0x1C0061FD0 (ndisEnumeratePorts.c)
 *     ndisPnPPortActivation @ 0x1C0062234 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C00628FC (ndisPnPPortDeactivation.c)
 *     ndisUpdateMiniportPortStates @ 0x1C0062F50 (ndisUpdateMiniportPortStates.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0064240 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0064470 (-ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00646D0 (-ndisNsiEnumerateAllIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllInvertedIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00648B0 (-ndisNsiEnumerateAllInvertedIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0064A80 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0064D70 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0065030 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00655E0 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0065700 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065BD0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065E50 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfSetIfDescr @ 0x1C0067FF8 (ndisIfSetIfDescr.c)
 *     NdisMQueryInformationComplete @ 0x1C0069290 (NdisMQueryInformationComplete.c)
 *     NdisMSetInformationComplete @ 0x1C00693A0 (NdisMSetInformationComplete.c)
 *     ndisOidPrePortState @ 0x1C006D9C0 (ndisOidPrePortState.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C006E590 (ndisOidPreSetPortAuthentication.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C006F5E0 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C006F940 (ndisQueryOpenRSSParameters.c)
 *     NdisCmActivateVc @ 0x1C00831E0 (NdisCmActivateVc.c)
 *     NdisCoCreateVc @ 0x1C00843F0 (NdisCoCreateVc.c)
 *     NdisFRestartComplete @ 0x1C008DD70 (NdisFRestartComplete.c)
 *     NdisCloseAdapterEx @ 0x1C0092940 (NdisCloseAdapterEx.c)
 *     NdisCompleteBindAdapterEx @ 0x1C0092A00 (NdisCompleteBindAdapterEx.c)
 *     ndisLegacyProtocolPauseRestartHandler @ 0x1C0093AA4 (ndisLegacyProtocolPauseRestartHandler.c)
 *     ndisDereferenceMiniportRef @ 0x1C0094E94 (ndisDereferenceMiniportRef.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C00964B8 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     NdisMIndicateStatus @ 0x1C0098340 (NdisMIndicateStatus.c)
 *     ndisMQueueWorkItem @ 0x1C009B7F8 (ndisMQueueWorkItem.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C009D500 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisIMRegisterLayeredMiniport @ 0x1C009D6A0 (NdisIMRegisterLayeredMiniport.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x1C009DF40 (NdisMAllocateSharedMemoryAsync.c)
 *     NdisMQueryAdapterResources @ 0x1C009E5E0 (NdisMQueryAdapterResources.c)
 *     NdisMRegisterIoPortRange @ 0x1C009E7E0 (NdisMRegisterIoPortRange.c)
 *     NdisMRegisterMiniport @ 0x1C009E920 (NdisMRegisterMiniport.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C009FC30 (ndisPnPQueryRemoveDevice.c)
 *     NdisReadEisaSlotInformation @ 0x1C009FF00 (NdisReadEisaSlotInformation.c)
 *     NdisReadEisaSlotInformationEx @ 0x1C009FFB0 (NdisReadEisaSlotInformationEx.c)
 *     NdisReadPcmciaAttributeMemory @ 0x1C00A0130 (NdisReadPcmciaAttributeMemory.c)
 *     NdisMRegisterInterrupt @ 0x1C00A1070 (NdisMRegisterInterrupt.c)
 *     NdisMNetPnPEvent @ 0x1C00A44E0 (NdisMNetPnPEvent.c)
 *     ndisWdfNotifySystemPower @ 0x1C00A72F8 (ndisWdfNotifySystemPower.c)
 *     ?ndisWmiDisableEvents@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@@Z @ 0x1C00A75A4 (-ndisWmiDisableEvents@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A851C (ndisWmiChangeSingleInstance.c)
 *     ndisWmiQueryAllData @ 0x1C00A8EDC (ndisWmiQueryAllData.c)
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00AF9F8 (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00B00AC (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisMEnableVirtualization @ 0x1C00B1120 (NdisMEnableVirtualization.c)
 *     NdisMGetVirtualFunctionBusData @ 0x1C00B1300 (NdisMGetVirtualFunctionBusData.c)
 *     NdisMQueryProbedBars @ 0x1C00B1640 (NdisMQueryProbedBars.c)
 *     NdisMSetVirtualFunctionBusData @ 0x1C00B1820 (NdisMSetVirtualFunctionBusData.c)
 *     ndisOidPreIovEnumNicSwitches @ 0x1C00B3680 (ndisOidPreIovEnumNicSwitches.c)
 *     ndisOidPreIovEnumVFs @ 0x1C00B38B0 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C00B3BF0 (ndisOidPreIovEnumVPorts.c)
 *     ndisPnPQuerySriovInterface @ 0x1C00B57E8 (ndisPnPQuerySriovInterface.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00B66F4 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00B6AA8 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00B6D1C (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00B6FD0 (NdisMIdleNotificationConfirm.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C00B93D0 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendStop @ 0x1C00B9798 (ndisSelectiveSuspendStop.c)
 *     NdisReleaseNicActive @ 0x1C00BE260 (NdisReleaseNicActive.c)
 *     ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C5750 (-ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C580C (-ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C00C58EC (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FF488 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C0105DDC (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0108568 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C0109030 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisNsiRegisterChangeNotification@@YAJPEAU_NM_REQUEST_REGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C010B0C0 (-ndisNsiRegisterChangeNotification@@YAJPEAU_NM_REQUEST_REGISTER_CHANGE_NOTIFICATION@@@Z.c)
 *     ?ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@@Z @ 0x1C01146B8 (-ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_.c)
 *     ndisSriovGetResourceForBar @ 0x1C011AA60 (ndisSriovGetResourceForBar.c)
 *     ndisSriovInterfaceGetDeviceLocation @ 0x1C011AC00 (ndisSriovInterfaceGetDeviceLocation.c)
 *     ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C011AD00 (ndisSriovInterfaceGetVendorAndDeviceIds.c)
 *     ndisSriovInterfaceQueryProbedBars @ 0x1C011AE90 (ndisSriovInterfaceQueryProbedBars.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C011B050 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C011B240 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceResetVF @ 0x1C011B430 (ndisSriovInterfaceResetVF.c)
 *     ndisSriovInterfaceSetVfPowerState @ 0x1C011B590 (ndisSriovInterfaceSetVfPowerState.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C011B700 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C011B8E0 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ndisSriovQueryLuid @ 0x1C011BAC0 (ndisSriovQueryLuid.c)
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C012A4FC (ndisQueryPower.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012ADF8 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 *     ndisPnPNotifyBinding @ 0x1C012B048 (ndisPnPNotifyBinding.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C012D370 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     NdisMRegisterInterruptEx @ 0x1C012F4F0 (NdisMRegisterInterruptEx.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C012FE70 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     NdisCloseAdapter @ 0x1C0138530 (NdisCloseAdapter.c)
 *     NdisDeregisterProtocol @ 0x1C0138860 (NdisDeregisterProtocol.c)
 *     ndisReferenceProtocolByName @ 0x1C0138BCC (ndisReferenceProtocolByName.c)
 *     NdisMAllocateMapRegisters @ 0x1C0139490 (NdisMAllocateMapRegisters.c)
 *     NdisMRegisterDmaChannel @ 0x1C013A050 (NdisMRegisterDmaChannel.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C0006320
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006320
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006320: mov     [rsp+arg_0], rbx
 * 00000001C0006325: mov     [rsp+arg_8], rbp
 * 00000001C000632A: mov     [rsp+arg_10], rsi
 * 00000001C000632F: mov     [rsp+arg_18], rdi
 * 00000001C0006334: push    r15
 * 00000001C0006336: sub     rsp, 50h
 * 00000001C000633A: mov     ebx, r8d
 * 00000001C000633D: mov     r15, rcx
 * 00000001C0006340: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0006347: movzx   ebp, r9w
 * 00000001C000634B: mov     edi, r8d
 * 00000001C000634E: movzx   esi, dl
 * 00000001C0006351: shr     rdi, 10h
 * 00000001C0006355: lea     r11d, [rbx-1]
 * 00000001C0006359: mov     r8d, r11d
 * 00000001C000635C: and     r11d, 1Fh
 * 00000001C0006360: shr     r8, 5
 * 00000001C0006364: and     r8d, 7FFh
 * 00000001C000636B: lea     rax, [rdi+rdi*4]
 * 00000001C000636F: lea     r10, [r8+rax*4]
 * 00000001C0006373: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C0006378: bt      eax, r11d
 * 00000001C000637C: jb      loc_1C00453F4
 * 00000001C0006382: mov     r9, [rsp+58h+arg_20]
 * 00000001C000638A: lea     rax, [rsp+58h+arg_30]
 * 00000001C0006392: mov     [rsp+58h+var_10], 0
 * 00000001C000639B: mov     r8d, ebx
 * 00000001C000639E: mov     [rsp+58h+var_18], 4
 * 00000001C00063A7: mov     rcx, r15
 * 00000001C00063AA: mov     [rsp+58h+var_20], rax
 * 00000001C00063AF: lea     rax, [rsp+58h+arg_28]
 * 00000001C00063B7: mov     [rsp+58h+var_28], 8
 * 00000001C00063C0: mov     [rsp+58h+var_30], rax
 * 00000001C00063C5: movzx   edx, sil
 * 00000001C00063C9: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00063CE: call    cs:__imp_WppAutoLogTrace
 * 00000001C00063D5: nop     dword ptr [rax+rax+00h]
 * 00000001C00063DA: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00063DF: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00063E4: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00063E9: mov     rdi, [rsp+58h+arg_18]
 * 00000001C00063EE: add     rsp, 50h
 * 00000001C00063F2: pop     r15
 * 00000001C00063F4: retn
 * 00000001C00453F4: lea     rax, [rdi+rdi*4]
 * 00000001C00453F8: add     rax, rax
 * 00000001C00453FB: cmp     [rcx+rax*8+29h], sil
 * 00000001C0045400: jb      loc_1C0006382
 * 00000001C0045406: mov     rcx, [rsp+58h+arg_20]; struct _GUID *
 * 00000001C004540E: lea     rax, [rsp+58h+arg_30]
 * 00000001C0045416: mov     [rsp+58h+var_28], 0
 * 00000001C004541F: lea     r8, [rsp+58h+arg_28]
 * 00000001C0045427: mov     [rsp+58h+var_30], 4
 * 00000001C0045430: mov     r9d, 8
 * 00000001C0045436: movzx   edx, bp; unsigned __int16
 * 00000001C0045439: mov     [rsp+58h+var_38], rax
 * 00000001C004543E: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C0045443: nop
 * 00000001C0045444: jmp     loc_1C0006382
 */
