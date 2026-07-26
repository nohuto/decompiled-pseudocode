/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0032358
 * Callers:
 *     NdisMAllocateNetBufferSGList @ 0x1C000EC70 (NdisMAllocateNetBufferSGList.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014248 (ndisNotifyDevicePowerStateChange.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisPMAddWOLPattern @ 0x1C001D0F4 (ndisPMAddWOLPattern.c)
 *     ndisOidPMAddRemove @ 0x1C001D2F4 (ndisOidPMAddRemove.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0020380 (ndisIfReferenceCompartmentForUser.c)
 *     ndisPMAddProtocolOffload @ 0x1C002311C (ndisPMAddProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0023410 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisIfAllocateIfIndex @ 0x1C00251EC (ndisIfAllocateIfIndex.c)
 *     ndisSetMiniportPacketFilter @ 0x1C0026684 (ndisSetMiniportPacketFilter.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C0027808 (ndisNotifyWmiBindUnbind.c)
 *     NdisAllocateNetBufferListPool @ 0x1C0029450 (NdisAllocateNetBufferListPool.c)
 *     ?ndisCreateThread@@YAHP6AXPEAX@Z0JPEAPEAU_KTHREAD@@@Z @ 0x1C0031D24 (-ndisCreateThread@@YAHP6AXPEAX@Z0JPEAPEAU_KTHREAD@@@Z.c)
 *     ?ndisDriverSystemDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0031E28 (-ndisDriverSystemDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisEtwRegisterGuids@@YAJPEAUWMIREGINFOW@@KPEAK@Z @ 0x1C0031F24 (-ndisEtwRegisterGuids@@YAJPEAUWMIREGINFOW@@KPEAK@Z.c)
 *     NdisGetVersion @ 0x1C00320A0 (NdisGetVersion.c)
 *     NdisAllocatePacketPoolEx @ 0x1C0032100 (NdisAllocatePacketPoolEx.c)
 *     ndisPowerStateCallback @ 0x1C00327F0 (ndisPowerStateCallback.c)
 *     ndisReceiveWorkerThread @ 0x1C0034260 (ndisReceiveWorkerThread.c)
 *     ndisAddWoLMagicPacket @ 0x1C0034998 (ndisAddWoLMagicPacket.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0034B94 (ndisMiniportPreAddWoLPattern.c)
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0035FA0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C00361E8 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C00368EC (-ndisIfInitGetCompartmentList@@YAJXZ.c)
 *     ?ndisStartNsiClient@@YAJXZ @ 0x1C0036D8C (-ndisStartNsiClient@@YAJXZ.c)
 *     NdisFRegisterFilterDriver @ 0x1C0037390 (NdisFRegisterFilterDriver.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C00634A8 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00638AC (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ndisIfAliasChange @ 0x1C0067820 (ndisIfAliasChange.c)
 *     ndisValidateQosParameters @ 0x1C0071904 (ndisValidateQosParameters.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00761BC (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C0076408 (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisSetAddWakeUpPattern @ 0x1C007685C (ndisSetAddWakeUpPattern.c)
 *     ndisMAllocSGList @ 0x1C00792C0 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C0079714 (ndisMAllocSGListS.c)
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007BCB4 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCpuHotAddHandler@@YAXPEAXPEAU_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT@@PEAJ@Z @ 0x1C007BE80 (-ndisCpuHotAddHandler@@YAXPEAXPEAU_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT@@PEAJ@Z.c)
 *     ?ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C007D2A0 (-ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@.c)
 *     NdisOpenFile @ 0x1C0081640 (NdisOpenFile.c)
 *     NdisClCloseCall @ 0x1C00825E0 (NdisClCloseCall.c)
 *     NdisCmMakeCallComplete @ 0x1C0083990 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1C0084F50 (NdisCoDeleteVc.c)
 *     ndisMIndicateQosParametersChange @ 0x1C009AAB4 (ndisMIndicateQosParametersChange.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C009D9E0 (NdisLWMRegisterMiniportDriver.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x1C009DF40 (NdisMAllocateSharedMemoryAsync.c)
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00FF7E0 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0101424 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0106450 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C0107B90 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 *     ?ndisStartNsiProvider@@_Y2PAGE@@AJXZ @ 0x1C010916C (-ndisStartNsiProvider@@_Y2PAGE@@AJXZ.c)
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0115320 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisAddWoLDirectedMAC @ 0x1C01154EC (ndisAddWoLDirectedMAC.c)
 *     ndisRemoveWoLDirectedMAC @ 0x1C0115860 (ndisRemoveWoLDirectedMAC.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C0117FA0 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C011840C (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     ndisLWMOpenConfigurationKey @ 0x1C01186B0 (ndisLWMOpenConfigurationKey.c)
 *     ?ndisDisconnectInStandby@@YA_NXZ @ 0x1C011C674 (-ndisDisconnectInStandby@@YA_NXZ.c)
 *     NdisSetAoAcOptions @ 0x1C011D400 (NdisSetAoAcOptions.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     NdisMapFile @ 0x1C0136820 (NdisMapFile.c)
 *     NdisMAllocateMapRegisters @ 0x1C0139490 (NdisMAllocateMapRegisters.c)
 *     NdisMRegisterDmaChannel @ 0x1C013A050 (NdisMRegisterDmaChannel.c)
 *     ndisIfInitialize @ 0x1C01440C8 (ndisIfInitialize.c)
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0032358
 * Reason: Hex-Rays returned no pseudocode for 0x1C0032358
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0032358: mov     [rsp+arg_0], rbx
 * 00000001C003235D: mov     [rsp+arg_8], rbp
 * 00000001C0032362: mov     [rsp+arg_10], rsi
 * 00000001C0032367: push    rdi
 * 00000001C0032368: push    r14
 * 00000001C003236A: push    r15
 * 00000001C003236C: sub     rsp, 40h
 * 00000001C0032370: mov     r14d, r8d
 * 00000001C0032373: mov     r15, rcx
 * 00000001C0032376: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003237D: mov     sil, dl
 * 00000001C0032380: mov     edi, r8d
 * 00000001C0032383: movzx   ebp, r9w
 * 00000001C0032387: shr     rdi, 10h
 * 00000001C003238B: lea     ebx, [r14-1]
 * 00000001C003238F: mov     r10d, ebx
 * 00000001C0032392: and     ebx, 1Fh
 * 00000001C0032395: shr     r10, 5
 * 00000001C0032399: mov     edx, ebx
 * 00000001C003239B: and     r10d, 7FFh
 * 00000001C00323A2: lea     rax, [rdi+rdi*4]
 * 00000001C00323A6: mov     ebx, 4
 * 00000001C00323AB: lea     r11, [r10+rax*4]
 * 00000001C00323AF: mov     eax, [rcx+r11*4+2Ch]
 * 00000001C00323B4: bt      eax, edx
 * 00000001C00323B7: jb      loc_1C0050986
 * 00000001C00323BD: and     [rsp+58h+var_20], 0
 * 00000001C00323C3: lea     rax, [rsp+58h+arg_28]
 * 00000001C00323CB: mov     r9, [rsp+58h+arg_20]
 * 00000001C00323D3: mov     r8d, r14d
 * 00000001C00323D6: mov     [rsp+58h+var_28], rbx
 * 00000001C00323DB: mov     rcx, r15
 * 00000001C00323DE: mov     [rsp+58h+var_30], rax
 * 00000001C00323E3: movzx   edx, sil
 * 00000001C00323E7: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00323EC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00323F3: nop     dword ptr [rax+rax+00h]
 * 00000001C00323F8: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00323FD: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0032402: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0032407: add     rsp, 40h
 * 00000001C003240B: pop     r15
 * 00000001C003240D: pop     r14
 * 00000001C003240F: pop     rdi
 * 00000001C0032410: retn
 * 00000001C0050986: lea     rax, [rdi+rdi*4]
 * 00000001C005098A: add     rax, rax
 * 00000001C005098D: cmp     [rcx+rax*8+29h], sil
 * 00000001C0050992: jb      loc_1C00323BD
 * 00000001C0050998: and     [rsp+58h+var_38], 0
 * 00000001C005099E: lea     r8, [rsp+58h+arg_28]
 * 00000001C00509A6: mov     rcx, [rsp+58h+arg_20]; struct _GUID *
 * 00000001C00509AE: mov     r9, rbx
 * 00000001C00509B1: movzx   edx, bp; unsigned __int16
 * 00000001C00509B4: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00509B9: nop
 * 00000001C00509BA: jmp     loc_1C00323BD
 */
