/*
 * XREFs of memmove @ 0x1C0041100
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 *     ?ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E3@Z @ 0x1C000A244 (-ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E.c)
 *     NdisGetDataBuffer @ 0x1C000E100 (NdisGetDataBuffer.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C000EC70 (NdisMAllocateNetBufferSGList.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0011500 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisOidPreEthAddress @ 0x1C0012120 (ndisOidPreEthAddress.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014248 (ndisNotifyDevicePowerStateChange.c)
 *     ndisOidPreSupportedList @ 0x1C0015250 (ndisOidPreSupportedList.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0016CD8 (ndisWriteWmiStatusIndication.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C0018A1C (-ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001B6B4 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     NdisFIndicateStatus @ 0x1C001B7A0 (NdisFIndicateStatus.c)
 *     ndisSetupWmiNode @ 0x1C001B83C (ndisSetupWmiNode.c)
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C001F590 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     NdisCopyFromNetBufferToNetBuffer @ 0x1C001FEA0 (NdisCopyFromNetBufferToNetBuffer.c)
 *     ndisGetAdapterRssInfo @ 0x1C0021168 (ndisGetAdapterRssInfo.c)
 *     ndisOidPreTimestampCapability @ 0x1C00214F0 (ndisOidPreTimestampCapability.c)
 *     ndisMSetReceiveFilterAttributes @ 0x1C0021654 (ndisMSetReceiveFilterAttributes.c)
 *     ndisFIndicateOffloadChange @ 0x1C0021A00 (ndisFIndicateOffloadChange.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0021C60 (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ndisMIndicateOffloadChange @ 0x1C0021CFC (ndisMIndicateOffloadChange.c)
 *     ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0021E14 (-ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_A.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0022090 (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     NdisWriteErrorLogEntry @ 0x1C0022460 (NdisWriteErrorLogEntry.c)
 *     ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0022720 (-ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIS.c)
 *     ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C00229D4 (-ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C00237B0 (ndisCreatePMProtocolOffloadEntry.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00238B0 (NdisOpenProtocolConfiguration.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C0024C80 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisSetMiniportEthMulticastList @ 0x1C0025474 (ndisSetMiniportEthMulticastList.c)
 *     ndisSetOpenEthMulticastList @ 0x1C0025988 (ndisSetOpenEthMulticastList.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0026FA4 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C0027818 (ndisNotifyWmiBindUnbind.c)
 *     ?ndisWmiRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@_KPEAUWMIREGINFOW@@KPEAK@Z @ 0x1C0027E40 (-ndisWmiRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@_KPEAUWMIREGINFOW@@KPEAK@Z.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0028770 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     NdisWriteConfiguration @ 0x1C002A780 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C002AD70 (NdisOpenConfigurationKeyByName.c)
 *     NdisReadConfiguration @ 0x1C002BBC0 (NdisReadConfiguration.c)
 *     ndisPnPStartDevice @ 0x1C002D22C (ndisPnPStartDevice.c)
 *     NdisRegisterDeviceEx @ 0x1C002D440 (NdisRegisterDeviceEx.c)
 *     NdisMSetMiniportAttributes @ 0x1C002F6B0 (NdisMSetMiniportAttributes.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FBC4 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ndisMSetPowerManagementCapabilities @ 0x1C00300B8 (ndisMSetPowerManagementCapabilities.c)
 *     ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x1C00301C0 (-ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z.c)
 *     ndisMSetOffloadAttributes @ 0x1C00312F0 (ndisMSetOffloadAttributes.c)
 *     ?ndisEtwRegisterGuids@@YAJPEAUWMIREGINFOW@@KPEAK@Z @ 0x1C0031F34 (-ndisEtwRegisterGuids@@YAJPEAUWMIREGINFOW@@KPEAK@Z.c)
 *     ?ndisQuerySupportedGuidToOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003347C (-ndisQuerySupportedGuidToOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCreateWoLPatternEntry @ 0x1C00352CC (ndisCreateWoLPatternEntry.c)
 *     NdisAllocateSharedMemory @ 0x1C0035800 (NdisAllocateSharedMemory.c)
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0036BD0 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036F70 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisFRegisterFilterDriver @ 0x1C00373A0 (NdisFRegisterFilterDriver.c)
 *     ndisSaveParameters @ 0x1C00385A0 (ndisSaveParameters.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0038D04 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisOidPostEthMulticastList @ 0x1C0039170 (ndisOidPostEthMulticastList.c)
 *     ndisPostOpenSetMulticastList @ 0x1C003925C (ndisPostOpenSetMulticastList.c)
 *     ndisIndicateOffloadChangeInternal @ 0x1C0039798 (ndisIndicateOffloadChangeInternal.c)
 *     ndisCreateSecurityDescriptor @ 0x1C003A9B8 (ndisCreateSecurityDescriptor.c)
 *     ndisSetOpenRSSParameters @ 0x1C003B1AC (ndisSetOpenRSSParameters.c)
 *     ndisPostSetOpenRSSParametersHelper @ 0x1C003B8B8 (ndisPostSetOpenRSSParametersHelper.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C003B9E4 (ndisPostSetMiniportRSSParameters.c)
 *     NdisGetProcessorInformationEx @ 0x1C003BC20 (NdisGetProcessorInformationEx.c)
 *     ndisOidPreRSSCaps @ 0x1C003CAC0 (ndisOidPreRSSCaps.c)
 *     NdisIfRegisterProvider @ 0x1C003D8B0 (NdisIfRegisterProvider.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C003DAF8 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     InitializeTelemetryAssertsKM @ 0x1C003E4E4 (InitializeTelemetryAssertsKM.c)
 *     ndisReadParameter @ 0x1C003EF50 (ndisReadParameter.c)
 *     ?ndisIfGrowAllocatedInterfaceIndexBitmap@@YAH_K@Z @ 0x1C003F2A0 (-ndisIfGrowAllocatedInterfaceIndexBitmap@@YAH_K@Z.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C003FAF8 (ndisInitializeMiniportRestartAttributes.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C003FF3C (ndisSetOpenEthAddDeleteMulticast.c)
 *     ethAddOneOpenMulticastAddress @ 0x1C0040304 (ethAddOneOpenMulticastAddress.c)
 *     ndisOidPostEthMulticastOid @ 0x1C0040640 (ndisOidPostEthMulticastOid.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C005E400 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisOidPreRcvFilterParameters @ 0x1C0060750 (ndisOidPreRcvFilterParameters.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C0060930 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisOidPreReceiveFilterCaps @ 0x1C0060C50 (ndisOidPreReceiveFilterCaps.c)
 *     ndisSetReceiveFilter @ 0x1C0060DE8 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C00618A0 (NdisMAllocatePort.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0062F30 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0063C58 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0064070 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0064E60 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065A00 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065C80 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C0067650 (ndisIfAliasChange.c)
 *     ndisIfSetIfDescr @ 0x1C0067E28 (ndisIfSetIfDescr.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C00680E0 (ndisIfUpdateCurrentMacAddress.c)
 *     ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0068558 (-ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisMAllocateRequest @ 0x1C006AF20 (ndisMAllocateRequest.c)
 *     ndisOidPostMiniportStats @ 0x1C006C410 (ndisOidPostMiniportStats.c)
 *     ndisOidPostTcpConnectionOffloadParameters @ 0x1C006C6A0 (ndisOidPostTcpConnectionOffloadParameters.c)
 *     ndisOidPreFriendlyName @ 0x1C006CAE0 (ndisOidPreFriendlyName.c)
 *     ndisOidPreMacAddress @ 0x1C006D000 (ndisOidPreMacAddress.c)
 *     ndisOidPreQosGetParameters @ 0x1C006DD00 (ndisOidPreQosGetParameters.c)
 *     ndisOidPreQueryOffloadEncapsulation @ 0x1C006E05C (ndisOidPreQueryOffloadEncapsulation.c)
 *     ndisOidPreQueryTcpConnectionParameters @ 0x1C006E1B8 (ndisOidPreQueryTcpConnectionParameters.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C006F410 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C006F770 (ndisQueryOpenRSSParameters.c)
 *     ndisClonePMPatternList @ 0x1C0072984 (ndisClonePMPatternList.c)
 *     ndisCreatePMPacketPattern @ 0x1C0072BAC (ndisCreatePMPacketPattern.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C0072D6C (ndisCreateWakeUpPatternEntry.c)
 *     ndisQueryWakeUpPatternList @ 0x1C0075D38 (ndisQueryWakeUpPatternList.c)
 *     ndisQueryWolPatternList @ 0x1C0075F14 (ndisQueryWolPatternList.c)
 *     ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00778E8 (ndisXlateAddPacketPatternToWolPatternOid.c)
 *     ndisXlateAddWolPatternToPacketPatternOid @ 0x1C0077B20 (ndisXlateAddWolPatternToPacketPatternOid.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C0077ED0 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ndisXlateWakeUpPatternListToWolPatternList @ 0x1C00781F4 (ndisXlateWakeUpPatternListToWolPatternList.c)
 *     ndisXlateWolPatternListToWakeUpPatternList @ 0x1C00784DC (ndisXlateWolPatternListToWakeUpPatternList.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C00786C4 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 *     ?ndisReadUpperBindings@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAPEA_WPEAK@Z @ 0x1C007ECD4 (-ndisReadUpperBindings@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAPEA_WPEAK@Z.c)
 *     NdisCopyFromPacketToPacket @ 0x1C0080C70 (NdisCopyFromPacketToPacket.c)
 *     NdisCopyFromPacketToPacketSafe @ 0x1C0080E70 (NdisCopyFromPacketToPacketSafe.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0088F94 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ndisMCopyFromPacketToBuffer @ 0x1C008A16C (ndisMCopyFromPacketToBuffer.c)
 *     NdisEnumerateFilterModules @ 0x1C008CD10 (NdisEnumerateFilterModules.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C008E534 (ndisFDoLoopbackNetBufferList.c)
 *     ndisFIndicateTimestampChange @ 0x1C008E880 (ndisFIndicateTimestampChange.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C008F6C8 (ndisGetOrCreateFilterInstanceKey.c)
 *     NdisMWriteLogData @ 0x1C0091AB0 (NdisMWriteLogData.c)
 *     ndisMGetLogData @ 0x1C0091DF0 (ndisMGetLogData.c)
 *     NdisWriteEventLogEntry @ 0x1C0093450 (NdisWriteEventLogEntry.c)
 *     ndisGetHardwareInfo @ 0x1C00950D8 (ndisGetHardwareInfo.c)
 *     ndisGetPowerInfo @ 0x1C0095754 (ndisGetPowerInfo.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C00971C8 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ndisMIndicateQosParametersChange @ 0x1C009A8E4 (ndisMIndicateQosParametersChange.c)
 *     NdisInitializeWrapper @ 0x1C009C370 (NdisInitializeWrapper.c)
 *     NdisMQueryAdapterResources @ 0x1C009E410 (NdisMQueryAdapterResources.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C00A1FD0 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C00A2074 (EthQueryOpenFilterAddresses.c)
 *     ethDeleteOneOpenMulticastAddress @ 0x1C00A2154 (ethDeleteOneOpenMulticastAddress.c)
 *     ?ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues@@YAHPEAU_NDIS_RECEIVE_QUEUE_INFO_ARRAY@@KKPEAK@Z @ 0x1C00A761C (-ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues@@YAHPEAU_NDIS_RECEIVE_QUEUE_INFO_ARRAY@@KKPEAK@Z.c)
 *     ndisWmiQueryAllData @ 0x1C00A8D0C (ndisWmiQueryAllData.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C00AB628 (ndisTopTcpConnectionOffloadStatus.c)
 *     NdisSetSessionCompartmentId @ 0x1C00ABB90 (NdisSetSessionCompartmentId.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C00AC070 (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ?ndisLWM5IndicateReceive@@YAXPEAU_X_FILTER@@PEAX1I1II@Z @ 0x1C00ACEC8 (-ndisLWM5IndicateReceive@@YAXPEAU_X_FILTER@@PEAX1I1II@Z.c)
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00AF828 (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z @ 0x1C00AFC0C (-ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00AFEDC (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1C00B0D94 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00B41F0 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovVFParameters @ 0x1C00B4D30 (ndisOidPreIovVFParameters.c)
 *     ndisNicAutoPowerInsertIntoSortedArray @ 0x1C00B5AE4 (ndisNicAutoPowerInsertIntoSortedArray.c)
 *     ndisSSGetCachedOidValue @ 0x1C00B8DAC (ndisSSGetCachedOidValue.c)
 *     ndisSSUpdateOidCacheValue @ 0x1C00B9118 (ndisSSUpdateOidCacheValue.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00BF448 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisMIndicatePDConfigChange @ 0x1C00C1DE8 (ndisMIndicatePDConfigChange.c)
 *     ndisOidPrePDQueryConfig @ 0x1C00C2110 (ndisOidPrePDQueryConfig.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C00C5030 (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C00C571C (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C5D0C (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS_V2@@2@Z @ 0x1C00C691C (-ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C00C7CA0 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x1C00C836C (Duplicate802_11AttachAttributesCommon.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00F98D0 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00F9F90 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FA2A0 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FA7E0 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FAFE0 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x1C00FF0B4 (--$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00FFD38 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C01019FC (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     KRegKey::QueryValueBlob__lambda_9a155988ce118065af57228fb750d321___ @ 0x1C0101AF4 (KRegKey--QueryValueBlob__lambda_9a155988ce118065af57228fb750d321___.c)
 *     ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C0102DE8 (-reserve@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010301C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisEnumerateFilterInstances @ 0x1C01050E8 (ndisEnumerateFilterInstances.c)
 *     ?reserve@?$KArray@E$00@Rtl@@QEAA_N_K@Z @ 0x1C0105468 (-reserve@-$KArray@E$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0106450 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C0106C5C (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C010C2B4 (SeSddlSecurityDescriptorFromSDDL.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0114544 (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 *     ?ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_DESC@@@Z @ 0x1C0115D88 (-ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_D.c)
 *     WppTraceCallback @ 0x1C0116000 (WppTraceCallback.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C011B050 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C011B240 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C011B700 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C011B8E0 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C0120880 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C01251C0 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0126CBC (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C01270D8 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C0128010 (NdisMRegisterWdiMiniportDriver.c)
 *     SepSddlAddAceToAcl @ 0x1C0128560 (SepSddlAddAceToAcl.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C01296B8 (CmRegUtilUcValueSetUcString.c)
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ?ndisEnumerateInterfaces@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF@@IPEAI@Z @ 0x1C012FB08 (-ndisEnumerateInterfaces@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF@@IPEAI@Z.c)
 *     ?ndisEnumerateInterfaces32@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF32@@IPEAI@Z @ 0x1C0135A98 (-ndisEnumerateInterfaces32@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF32@@IPEAI@Z.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0139034 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 *     NdisMRegisterDevice @ 0x1C0139D80 (NdisMRegisterDevice.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisIfInitialize @ 0x1C01440C8 (ndisIfInitialize.c)
 *     ?ndisAddMediaTypeToArray@@_Y2INIT@@AJPEA_WKPEAXK11@Z @ 0x1C0147EA0 (-ndisAddMediaTypeToArray@@_Y2INIT@@AJPEA_WKPEAXK11@Z.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto LABEL_38;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_38:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto LABEL_13;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_13:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
