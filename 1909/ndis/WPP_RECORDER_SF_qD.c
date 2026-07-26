/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x1C0009DA0
 * Callers:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C000A960 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000B420 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisSendNetBufferLists @ 0x1C000BFC0 (NdisSendNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C000D590 (NdisReturnNetBufferLists.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DCC0 (ndisMSendNBLToMiniportInternal.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C000E210 (NdisFSendNetBufferListsComplete.c)
 *     NdisFSendNetBufferLists @ 0x1C000F5D0 (NdisFSendNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0010740 (NdisFReturnNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0010A50 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     NdisFreeCloneNetBufferList @ 0x1C00123A0 (NdisFreeCloneNetBufferList.c)
 *     ?ndisReferenceNextUnprocessedOpenEx@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0012790 (-ndisReferenceNextUnprocessedOpenEx@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisGenericWaitWakeCallback @ 0x1C0012A50 (ndisGenericWaitWakeCallback.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C00137C0 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ndisMOidRequest @ 0x1C0015410 (ndisMOidRequest.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C0C (-ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisPnPDispatch @ 0x1C0018190 (ndisPnPDispatch.c)
 *     ?ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C0018A1C (-ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@.c)
 *     ndisPowerDispatch @ 0x1C0019F10 (ndisPowerDispatch.c)
 *     NdisFIndicateStatus @ 0x1C001B7A0 (NdisFIndicateStatus.c)
 *     ndisInvokeStatus @ 0x1C001C274 (ndisInvokeStatus.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C001CB1C (ndisSetMediaDisconnectTimer.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C001D824 (ndisMInvokeDirectOidRequest.c)
 *     ndisOidPMRemove @ 0x1C0022E6C (ndisOidPMRemove.c)
 *     ndisOidPreRemovePMProtocolOffload @ 0x1C00235C0 (ndisOidPreRemovePMProtocolOffload.c)
 *     ndisReferenceOpenByHandle @ 0x1C0023DC4 (ndisReferenceOpenByHandle.c)
 *     ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x1C002C580 (-ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z.c)
 *     ndisPnPStartDevice @ 0x1C002D21C (ndisPnPStartDevice.c)
 *     ndisGetPciDeviceCustomProperties @ 0x1C002E5F4 (ndisGetPciDeviceCustomProperties.c)
 *     ndisMSetOffloadAttributes @ 0x1C00312E0 (ndisMSetOffloadAttributes.c)
 *     ndisMInvokeStartDevice @ 0x1C0031A40 (ndisMInvokeStartDevice.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00329C4 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisQueryPowerCapabilities @ 0x1C0032F94 (ndisQueryPowerCapabilities.c)
 *     ndisAddWoLMagicPacket @ 0x1C0034998 (ndisAddWoLMagicPacket.c)
 *     ndisMInvokeFilterResourceRequirements @ 0x1C003E0AC (ndisMInvokeFilterResourceRequirements.c)
 *     NdisMQueryAdapterInstanceName @ 0x1C003E7D0 (NdisMQueryAdapterInstanceName.c)
 *     ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C0040C18 (-ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_T.c)
 *     ndisOidPostRcvFilterAllocateQueue @ 0x1C005F4F0 (ndisOidPostRcvFilterAllocateQueue.c)
 *     ndisOidPostRcvFilterClearFilter @ 0x1C005F670 (ndisOidPostRcvFilterClearFilter.c)
 *     ndisOidPostRcvFilterSetFilter @ 0x1C005F9D0 (ndisOidPostRcvFilterSetFilter.c)
 *     ?ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0068550 (-ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMRestoreFilterSettings @ 0x1C006B874 (ndisMRestoreFilterSettings.c)
 *     ndisOidPostTcpConnectionOffloadParameters @ 0x1C006C870 (ndisOidPostTcpConnectionOffloadParameters.c)
 *     ndisOidPreMacAddress @ 0x1C006D1D0 (ndisOidPreMacAddress.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C006FC44 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C0070AC4 (ndisUpdateHDSplitKeyword.c)
 *     ndisOidPrePMRemoveWOLPattern @ 0x1C0074850 (ndisOidPrePMRemoveWOLPattern.c)
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C0074C70 (ndisOidPreRemoveWakeUpPattern.c)
 *     ndisXlateAddWolPatternToPacketPatternOid @ 0x1C0077CF0 (ndisXlateAddWolPatternToPacketPatternOid.c)
 *     ndisIsMiniportReady @ 0x1C007E7C4 (ndisIsMiniportReady.c)
 *     NdisCoOidRequest @ 0x1C0085310 (NdisCoOidRequest.c)
 *     NdisEnumerateFilterModules @ 0x1C008CEE0 (NdisEnumerateFilterModules.c)
 *     NdisFDirectOidRequest @ 0x1C008D880 (NdisFDirectOidRequest.c)
 *     NdisFRestartFilter @ 0x1C008DE40 (NdisFRestartFilter.c)
 *     ndisFInvokeSynchronousOidRequest @ 0x1C008EF0C (ndisFInvokeSynchronousOidRequest.c)
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1C008EFE0 (ndisFInvokeSynchronousOidRequestComplete.c)
 *     ?ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z @ 0x1C009244C (-ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z.c)
 *     ?ndisMInvokeReset@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C009764C (-ndisMInvokeReset@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMRawInvokeDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0097A70 (-ndisMRawInvokeDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisMInvokeShutdown @ 0x1C009B0E8 (ndisMInvokeShutdown.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1C009B1C0 (ndisMInvokeSynchronousOidRequest.c)
 *     ndisMResetMiniportInternal @ 0x1C009BE9C (ndisMResetMiniportInternal.c)
 *     NdisLWMStartNetworkInterface @ 0x1C009DC20 (NdisLWMStartNetworkInterface.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C009FC30 (ndisPnPQueryRemoveDevice.c)
 *     NdisWritePcmciaAttributeMemory @ 0x1C00A02E0 (NdisWritePcmciaAttributeMemory.c)
 *     ndisWdfDevicePowerDown @ 0x1C00A5954 (ndisWdfDevicePowerDown.c)
 *     ndisWdmSendOidPmParametersForSx @ 0x1C00A6248 (ndisWdmSendOidPmParametersForSx.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C00B1A14 (ndisIovDeleteDefaultNicSwitch.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00B6210 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C00B6E90 (NdisMIdleNotificationCompleteEx.c)
 *     ndisCancelIdleRequest @ 0x1C00B805C (ndisCancelIdleRequest.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C00B8860 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C00B9BD0 (ndisSetPowerResumeComplete.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00BB590 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00BB6A0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C00BD9B8 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     ?NdisPDGetBuffersFromBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@PEAKPEAPEAU_PD_BUFFER@@@Z @ 0x1C00BEF10 (-NdisPDGetBuffersFromBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@PEAKPEAPEAU_PD_BUFFER@@@Z.c)
 *     ndisMInvokeCheckForHang @ 0x1C00FBBB4 (ndisMInvokeCheckForHang.c)
 *     ?ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00FC61C (-ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ndisMInvokeDevicePowerNotify @ 0x1C00FC6F0 (ndisMInvokeDevicePowerNotify.c)
 *     ?ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C00FC748 (-ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@.c)
 *     ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00FF5E8 (ndisMInvokeDevicePnPEventNotifyHandler.c)
 *     ndisPktMonFilterRegister @ 0x1C010242C (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C0102588 (ndisPktMonOpenRegister.c)
 *     ndisInvokeBindAdapter @ 0x1C0104EDC (ndisInvokeBindAdapter.c)
 *     ndisFInvokeRestart @ 0x1C010585C (ndisFInvokeRestart.c)
 *     ndisFInvokeSetFilterModuleOptions @ 0x1C0105A68 (ndisFInvokeSetFilterModuleOptions.c)
 *     ndisFInvokeAttach @ 0x1C0105BC4 (ndisFInvokeAttach.c)
 *     ndisCreateAdapterInstanceName @ 0x1C0106AA4 (ndisCreateAdapterInstanceName.c)
 *     ndisPktMonMiniportRegister @ 0x1C0106F3C (ndisPktMonMiniportRegister.c)
 *     ?ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C0109310 (-ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERI.c)
 *     ndisMInvokeSetOptions @ 0x1C01096B4 (ndisMInvokeSetOptions.c)
 *     ?ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1C0109840 (-ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010B988 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ndisMInvokeRestart @ 0x1C010BAA8 (ndisMInvokeRestart.c)
 *     ndisMInvokePause @ 0x1C010BC88 (ndisMInvokePause.c)
 *     ndisFInvokePause @ 0x1C010BEB0 (ndisFInvokePause.c)
 *     ndisAddWoLDirectedMAC @ 0x1C01154EC (ndisAddWoLDirectedMAC.c)
 *     ndisRemoveWoLDirectedMAC @ 0x1C0115860 (ndisRemoveWoLDirectedMAC.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C0116278 (ndisWdfOpenConfigurationKey.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C0116734 (ndisMiniportQueryInterfaceProperty.c)
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01171B4 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C01175DC (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C0117FA0 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ndisPnPCompleteRemoveDevice @ 0x1C0118868 (ndisPnPCompleteRemoveDevice.c)
 *     NdisSetAoAcOptions @ 0x1C011D400 (NdisSetAoAcOptions.c)
 *     ?NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C0120380 (-NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CO.c)
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C01214FC (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C01218D8 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?NdisPDBMAddMemberToDomain@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@PEBU_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS@@PEAPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x1C0122E00 (-NdisPDBMAddMemberToDomain@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@PEBU_NDIS_PD_BM_DOMAIN_MEMBER_PAR.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisQueryPower @ 0x1C012A4FC (ndisQueryPower.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012ADF8 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qD @ 0x1C0009DA0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009DA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009DA0: mov     [rsp+arg_0], rbx
 * 00000001C0009DA5: mov     [rsp+arg_8], rbp
 * 00000001C0009DAA: mov     [rsp+arg_10], rsi
 * 00000001C0009DAF: push    rdi
 * 00000001C0009DB0: push    r14
 * 00000001C0009DB2: push    r15
 * 00000001C0009DB4: sub     rsp, 50h
 * 00000001C0009DB8: mov     r14d, r8d
 * 00000001C0009DBB: mov     r15, rcx
 * 00000001C0009DBE: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0009DC5: mov     sil, dl
 * 00000001C0009DC8: mov     edi, r8d
 * 00000001C0009DCB: movzx   ebp, r9w
 * 00000001C0009DCF: shr     rdi, 10h
 * 00000001C0009DD3: lea     ebx, [r14-1]
 * 00000001C0009DD7: mov     r10d, ebx
 * 00000001C0009DDA: and     ebx, 1Fh
 * 00000001C0009DDD: shr     r10, 5
 * 00000001C0009DE1: mov     edx, ebx
 * 00000001C0009DE3: and     r10d, 7FFh
 * 00000001C0009DEA: lea     rax, [rdi+rdi*4]
 * 00000001C0009DEE: mov     ebx, 4
 * 00000001C0009DF3: lea     r11, [r10+rax*4]
 * 00000001C0009DF7: mov     eax, [rcx+r11*4+2Ch]
 * 00000001C0009DFC: bt      eax, edx
 * 00000001C0009DFF: jb      loc_1C004728E
 * 00000001C0009E05: and     [rsp+68h+var_20], 0
 * 00000001C0009E0B: lea     rax, [rsp+68h+arg_30]
 * 00000001C0009E13: mov     r9, [rsp+68h+arg_20]
 * 00000001C0009E1B: mov     r8d, r14d
 * 00000001C0009E1E: mov     [rsp+68h+var_28], rbx
 * 00000001C0009E23: mov     rcx, r15
 * 00000001C0009E26: mov     [rsp+68h+var_30], rax
 * 00000001C0009E2B: lea     rax, [rsp+68h+arg_28]
 * 00000001C0009E33: mov     [rsp+68h+var_38], 8
 * 00000001C0009E3C: mov     [rsp+68h+var_40], rax
 * 00000001C0009E41: movzx   edx, sil
 * 00000001C0009E45: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0009E4A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0009E51: nop     dword ptr [rax+rax+00h]
 * 00000001C0009E56: lea     r11, [rsp+68h+var_18]
 * 00000001C0009E5B: mov     rbx, [r11+20h]
 * 00000001C0009E5F: mov     rbp, [r11+28h]
 * 00000001C0009E63: mov     rsi, [r11+30h]
 * 00000001C0009E67: mov     rsp, r11
 * 00000001C0009E6A: pop     r15
 * 00000001C0009E6C: pop     r14
 * 00000001C0009E6E: pop     rdi
 * 00000001C0009E6F: retn
 * 00000001C004728E: lea     rax, [rdi+rdi*4]
 * 00000001C0047292: add     rax, rax
 * 00000001C0047295: cmp     [rcx+rax*8+29h], sil
 * 00000001C004729A: jb      loc_1C0009E05
 * 00000001C00472A0: and     [rsp+68h+var_38], 0
 * 00000001C00472A6: lea     rax, [rsp+68h+arg_30]
 * 00000001C00472AE: mov     rcx, [rsp+68h+arg_20]; struct _GUID *
 * 00000001C00472B6: lea     r8, [rsp+68h+arg_28]
 * 00000001C00472BE: mov     [rsp+68h+var_40], rbx
 * 00000001C00472C3: mov     r9d, 8
 * 00000001C00472C9: movzx   edx, bp; unsigned __int16
 * 00000001C00472CC: mov     [rsp+68h+var_48], rax
 * 00000001C00472D1: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00472D6: nop
 * 00000001C00472D7: jmp     loc_1C0009E05
 */
