/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0032368
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
 *     ndisIfAllocateIfIndex @ 0x1C00251FC (ndisIfAllocateIfIndex.c)
 *     ndisSetMiniportPacketFilter @ 0x1C0026694 (ndisSetMiniportPacketFilter.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C0027818 (ndisNotifyWmiBindUnbind.c)
 *     NdisAllocateNetBufferListPool @ 0x1C0029460 (NdisAllocateNetBufferListPool.c)
 *     ?ndisCreateThread@@YAHP6AXPEAX@Z0JPEAPEAU_KTHREAD@@@Z @ 0x1C0031D34 (-ndisCreateThread@@YAHP6AXPEAX@Z0JPEAPEAU_KTHREAD@@@Z.c)
 *     ?ndisDriverSystemDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0031E38 (-ndisDriverSystemDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisEtwRegisterGuids@@YAJPEAUWMIREGINFOW@@KPEAK@Z @ 0x1C0031F34 (-ndisEtwRegisterGuids@@YAJPEAUWMIREGINFOW@@KPEAK@Z.c)
 *     NdisGetVersion @ 0x1C00320B0 (NdisGetVersion.c)
 *     NdisAllocatePacketPoolEx @ 0x1C0032110 (NdisAllocatePacketPoolEx.c)
 *     ndisPowerStateCallback @ 0x1C0032800 (ndisPowerStateCallback.c)
 *     ndisReceiveWorkerThread @ 0x1C0034270 (ndisReceiveWorkerThread.c)
 *     ndisAddWoLMagicPacket @ 0x1C00349A8 (ndisAddWoLMagicPacket.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0034BA4 (ndisMiniportPreAddWoLPattern.c)
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0035FB0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C00361F8 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C00368FC (-ndisIfInitGetCompartmentList@@YAJXZ.c)
 *     ?ndisStartNsiClient@@YAJXZ @ 0x1C0036D9C (-ndisStartNsiClient@@YAJXZ.c)
 *     NdisFRegisterFilterDriver @ 0x1C00373A0 (NdisFRegisterFilterDriver.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C00632D8 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00636DC (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ndisIfAliasChange @ 0x1C0067650 (ndisIfAliasChange.c)
 *     ndisValidateQosParameters @ 0x1C0071734 (ndisValidateQosParameters.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C0075FEC (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C0076238 (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisSetAddWakeUpPattern @ 0x1C007668C (ndisSetAddWakeUpPattern.c)
 *     ndisMAllocSGList @ 0x1C00790F0 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C0079544 (ndisMAllocSGListS.c)
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007BAE4 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCpuHotAddHandler@@YAXPEAXPEAU_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT@@PEAJ@Z @ 0x1C007BCB0 (-ndisCpuHotAddHandler@@YAXPEAXPEAU_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT@@PEAJ@Z.c)
 *     ?ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C007D0D0 (-ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@.c)
 *     NdisOpenFile @ 0x1C0081470 (NdisOpenFile.c)
 *     NdisClCloseCall @ 0x1C0082410 (NdisClCloseCall.c)
 *     NdisCmMakeCallComplete @ 0x1C00837C0 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1C0084D80 (NdisCoDeleteVc.c)
 *     ndisMIndicateQosParametersChange @ 0x1C009A8E4 (ndisMIndicateQosParametersChange.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C009D810 (NdisLWMRegisterMiniportDriver.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x1C009DD70 (NdisMAllocateSharedMemoryAsync.c)
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
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0032368
 * Reason: Hex-Rays returned no pseudocode for 0x1C0032368
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0032368: mov     [rsp+arg_0], rbx
 * 00000001C003236D: mov     [rsp+arg_8], rbp
 * 00000001C0032372: mov     [rsp+arg_10], rsi
 * 00000001C0032377: push    rdi
 * 00000001C0032378: push    r14
 * 00000001C003237A: push    r15
 * 00000001C003237C: sub     rsp, 40h
 * 00000001C0032380: mov     r14d, r8d
 * 00000001C0032383: mov     r15, rcx
 * 00000001C0032386: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003238D: mov     sil, dl
 * 00000001C0032390: mov     edi, r8d
 * 00000001C0032393: movzx   ebp, r9w
 * 00000001C0032397: shr     rdi, 10h
 * 00000001C003239B: lea     ebx, [r14-1]
 * 00000001C003239F: mov     r10d, ebx
 * 00000001C00323A2: and     ebx, 1Fh
 * 00000001C00323A5: shr     r10, 5
 * 00000001C00323A9: mov     edx, ebx
 * 00000001C00323AB: and     r10d, 7FFh
 * 00000001C00323B2: lea     rax, [rdi+rdi*4]
 * 00000001C00323B6: mov     ebx, 4
 * 00000001C00323BB: lea     r11, [r10+rax*4]
 * 00000001C00323BF: mov     eax, [rcx+r11*4+2Ch]
 * 00000001C00323C4: bt      eax, edx
 * 00000001C00323C7: jb      loc_1C00507AE
 * 00000001C00323CD: and     [rsp+58h+var_20], 0
 * 00000001C00323D3: lea     rax, [rsp+58h+arg_28]
 * 00000001C00323DB: mov     r9, [rsp+58h+arg_20]
 * 00000001C00323E3: mov     r8d, r14d
 * 00000001C00323E6: mov     [rsp+58h+var_28], rbx
 * 00000001C00323EB: mov     rcx, r15
 * 00000001C00323EE: mov     [rsp+58h+var_30], rax
 * 00000001C00323F3: movzx   edx, sil
 * 00000001C00323F7: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00323FC: call    cs:__imp_WppAutoLogTrace
 * 00000001C0032403: nop     dword ptr [rax+rax+00h]
 * 00000001C0032408: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003240D: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0032412: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0032417: add     rsp, 40h
 * 00000001C003241B: pop     r15
 * 00000001C003241D: pop     r14
 * 00000001C003241F: pop     rdi
 * 00000001C0032420: retn
 * 00000001C00507AE: lea     rax, [rdi+rdi*4]
 * 00000001C00507B2: add     rax, rax
 * 00000001C00507B5: cmp     [rcx+rax*8+29h], sil
 * 00000001C00507BA: jb      loc_1C00323CD
 * 00000001C00507C0: and     [rsp+58h+var_38], 0
 * 00000001C00507C6: lea     r8, [rsp+58h+arg_28]
 * 00000001C00507CE: mov     rcx, [rsp+58h+arg_20]; struct _GUID *
 * 00000001C00507D6: mov     r9, rbx
 * 00000001C00507D9: movzx   edx, bp; unsigned __int16
 * 00000001C00507DC: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00507E1: nop
 * 00000001C00507E2: jmp     loc_1C00323CD
 */
