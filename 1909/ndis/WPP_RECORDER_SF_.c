/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0011C88
 * Callers:
 *     NdisFOidRequestComplete @ 0x1C0008850 (NdisFOidRequestComplete.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C0009B60 (ndisOidFreeInternalCloneRequest.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C000AE30 (ndisMTopReceiveNetBufferLists.c)
 *     NdisTryAcquireNicActive @ 0x1C0011BA0 (NdisTryAcquireNicActive.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1C0019BA0 (-ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C001B3C0 (-ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C001D65C (ndisCreatePMRejectWorkItem.c)
 *     NdisRetreatNetBufferListDataStart @ 0x1C001FCA0 (NdisRetreatNetBufferListDataStart.c)
 *     NdisMDirectOidRequestComplete @ 0x1C00205C0 (NdisMDirectOidRequestComplete.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C00237B0 (ndisCreatePMProtocolOffloadEntry.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00238B0 (NdisOpenProtocolConfiguration.c)
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0023C4C (ndisIfReadNetworkGuidFromKey.c)
 *     NdisAllocateNetBufferListPool @ 0x1C0029450 (NdisAllocateNetBufferListPool.c)
 *     NdisReadConfiguration @ 0x1C002BBB0 (NdisReadConfiguration.c)
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C002D104 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ndisPnPAddDevice @ 0x1C002D984 (ndisPnPAddDevice.c)
 *     ?ndisCreateReceiveWorkerThreadPool@@YAHXZ @ 0x1C0031C40 (-ndisCreateReceiveWorkerThreadPool@@YAHXZ.c)
 *     ?ndisEtwRegisterGuids@@YAJPEAUWMIREGINFOW@@KPEAK@Z @ 0x1C0031F24 (-ndisEtwRegisterGuids@@YAJPEAUWMIREGINFOW@@KPEAK@Z.c)
 *     NdisAllocatePacketPoolEx @ 0x1C0032100 (NdisAllocatePacketPoolEx.c)
 *     ndisDoesSystemSupportSriov @ 0x1C00328EC (ndisDoesSystemSupportSriov.c)
 *     ndisCreateWoLPatternEntry @ 0x1C00352BC (ndisCreateWoLPatternEntry.c)
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0035FA0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C00361E8 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C00368EC (-ndisIfInitGetCompartmentList@@YAJXZ.c)
 *     ?ndisStartNsiClient@@YAJXZ @ 0x1C0036D8C (-ndisStartNsiClient@@YAJXZ.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0038700 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C003FF2C (ndisSetOpenEthAddDeleteMulticast.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0063100 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisNsiQueuedTimestampingChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0065490 (-ndisNsiQueuedTimestampingChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisStopNsiProvider@@YAXXZ @ 0x1C006623C (-ndisStopNsiProvider@@YAXXZ.c)
 *     ndisValidateQosParameters @ 0x1C0071904 (ndisValidateQosParameters.c)
 *     ndisClonePMPatternList @ 0x1C0072B54 (ndisClonePMPatternList.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0072C94 (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C0072E5C (ndisCreatePMPdcTaskClientWorkItem.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C0072F3C (ndisCreateWakeUpPatternEntry.c)
 *     ndisSetAddWakeUpPattern @ 0x1C007685C (ndisSetAddWakeUpPattern.c)
 *     ndisSetEnableWakeUp @ 0x1C0076C14 (ndisSetEnableWakeUp.c)
 *     ndisSetOpenAddWakeUpPattern @ 0x1C0076F9C (ndisSetOpenAddWakeUpPattern.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C00774F8 (ndisUpdateAndIndicatePMCapabilities.c)
 *     ndisXlateWakeUpPatternListToWolPatternList @ 0x1C00783C4 (ndisXlateWakeUpPatternListToWolPatternList.c)
 *     ndisXlateWolPatternListToWakeUpPatternList @ 0x1C00786AC (ndisXlateWolPatternListToWakeUpPatternList.c)
 *     NdisFreeSharedMemory @ 0x1C0078E50 (NdisFreeSharedMemory.c)
 *     ?ndisKillReceiveWorkerThreadPool@@YAXXZ @ 0x1C007C428 (-ndisKillReceiveWorkerThreadPool@@YAXXZ.c)
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007C5B8 (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMapOpenByName@@YAPEAU_NDIS_OPEN_BLOCK@@PEBU_UNICODE_STRING@@PEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_MP_REFTAG@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C007C8A8 (-ndisMapOpenByName@@YAPEAU_NDIS_OPEN_BLOCK@@PEBU_UNICODE_STRING@@PEAU_NDIS_PROTOCOL_BLOCK@@W4_ND.c)
 *     ndisEnableWppTracingCallback @ 0x1C007E5EC (ndisEnableWppTracingCallback.c)
 *     NdisCloseFile @ 0x1C0080CF0 (NdisCloseFile.c)
 *     NdisOpenFile @ 0x1C0081640 (NdisOpenFile.c)
 *     NdisUnmapFile @ 0x1C0081D90 (NdisUnmapFile.c)
 *     ?ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008212C (-ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     NdisCmMakeCallComplete @ 0x1C0083990 (NdisCmMakeCallComplete.c)
 *     NdisCoCreateVc @ 0x1C00843F0 (NdisCoCreateVc.c)
 *     NdisMCmCreateVc @ 0x1C0085D30 (NdisMCmCreateVc.c)
 *     NdisMCoIndicateStatus @ 0x1C0086730 (NdisMCoIndicateStatus.c)
 *     NdisMCoIndicateStatusEx @ 0x1C0086830 (NdisMCoIndicateStatusEx.c)
 *     NdisMCoRequestComplete @ 0x1C00869E0 (NdisMCoRequestComplete.c)
 *     ndisDereferenceVcPtr @ 0x1C0087390 (ndisDereferenceVcPtr.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C0087A70 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0087CA0 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0088060 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     NdisWriteEventLogEntry @ 0x1C0093620 (NdisWriteEventLogEntry.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C00964B8 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ndisMIndicateQosParametersChange @ 0x1C009AAB4 (ndisMIndicateQosParametersChange.c)
 *     ndisMResetMiniportInternal @ 0x1C009BE9C (ndisMResetMiniportInternal.c)
 *     NdisInitializeWrapper @ 0x1C009C540 (NdisInitializeWrapper.c)
 *     NdisTerminateWrapper @ 0x1C009C730 (NdisTerminateWrapper.c)
 *     NdisLWMDeregisterMiniportDriver @ 0x1C009D7C0 (NdisLWMDeregisterMiniportDriver.c)
 *     NdisLWMInitializeNetworkInterface @ 0x1C009D890 (NdisLWMInitializeNetworkInterface.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C009D9E0 (NdisLWMRegisterMiniportDriver.c)
 *     ndisPnPCancelStopDevice @ 0x1C009FB9C (ndisPnPCancelStopDevice.c)
 *     ndisPnPStopDevice @ 0x1C009FD50 (ndisPnPStopDevice.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AC650 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z @ 0x1C00AD4A4 (-ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00AE630 (ndisMDispatchReceiveNetBufferLists.c)
 *     ?NdisGetVersion640Shim@@YAIXZ @ 0x1C00C2610 (-NdisGetVersion640Shim@@YAIXZ.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106E7C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisStartNsiProvider@@_Y2PAGE@@AJXZ @ 0x1C010916C (-ndisStartNsiProvider@@_Y2PAGE@@AJXZ.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C0115B9C (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C0117FA0 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C011840C (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     NdisSetAoAcOptions @ 0x1C011D400 (NdisSetAoAcOptions.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C0127BD8 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C0127D54 (-ReferenceWdi@@YA_NXZ.c)
 *     NdisOpenAdapterEx @ 0x1C012B900 (NdisOpenAdapterEx.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisMapFile @ 0x1C0136820 (NdisMapFile.c)
 *     ndisCreateNotifyQueue @ 0x1C01380B8 (ndisCreateNotifyQueue.c)
 *     NdisMDeregisterDmaChannel @ 0x1C0139AD0 (NdisMDeregisterDmaChannel.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BD64 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisIfInitialize @ 0x1C01440C8 (ndisIfInitialize.c)
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0146D04 (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0011C88
 * Reason: Hex-Rays returned no pseudocode for 0x1C0011C88
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0011C88: mov     [rsp+arg_0], rbx
 * 00000001C0011C8D: mov     [rsp+arg_8], rbp
 * 00000001C0011C92: mov     [rsp+arg_10], rsi
 * 00000001C0011C97: push    rdi
 * 00000001C0011C98: push    r14
 * 00000001C0011C9A: push    r15
 * 00000001C0011C9C: sub     rsp, 30h
 * 00000001C0011CA0: mov     r14d, r8d
 * 00000001C0011CA3: mov     r15, rcx
 * 00000001C0011CA6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0011CAD: movzx   esi, r9w
 * 00000001C0011CB1: mov     edi, r8d
 * 00000001C0011CB4: mov     bpl, dl
 * 00000001C0011CB7: shr     rdi, 10h
 * 00000001C0011CBB: lea     ebx, [r14-1]
 * 00000001C0011CBF: mov     r10d, ebx
 * 00000001C0011CC2: and     ebx, 1Fh
 * 00000001C0011CC5: shr     r10, 5
 * 00000001C0011CC9: and     r10d, 7FFh
 * 00000001C0011CD0: lea     rax, [rdi+rdi*4]
 * 00000001C0011CD4: lea     r11, [r10+rax*4]
 * 00000001C0011CD8: mov     eax, [rcx+r11*4+2Ch]
 * 00000001C0011CDD: bt      eax, ebx
 * 00000001C0011CE0: jb      loc_1C0054C50
 * 00000001C0011CE6: and     [rsp+48h+var_20], 0
 * 00000001C0011CEC: mov     r8d, r14d
 * 00000001C0011CEF: mov     r9, [rsp+48h+arg_20]
 * 00000001C0011CF4: mov     rcx, r15
 * 00000001C0011CF7: movzx   edx, bpl
 * 00000001C0011CFB: mov     [rsp+48h+var_28], si
 * 00000001C0011D00: call    cs:__imp_WppAutoLogTrace
 * 00000001C0011D07: nop     dword ptr [rax+rax+00h]
 * 00000001C0011D0C: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0011D11: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0011D16: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0011D1B: add     rsp, 30h
 * 00000001C0011D1F: pop     r15
 * 00000001C0011D21: pop     r14
 * 00000001C0011D23: pop     rdi
 * 00000001C0011D24: retn
 * 00000001C0054C50: lea     rax, [rdi+rdi*4]
 * 00000001C0054C54: add     rax, rax
 * 00000001C0054C57: cmp     [rcx+rax*8+29h], bpl
 * 00000001C0054C5C: jb      loc_1C0011CE6
 * 00000001C0054C62: mov     rcx, [rsp+48h+arg_20]; struct _GUID *
 * 00000001C0054C67: xor     r8d, r8d
 * 00000001C0054C6A: movzx   edx, si; unsigned __int16
 * 00000001C0054C6D: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C0054C72: nop
 * 00000001C0054C73: jmp     loc_1C0011CE6
 */
