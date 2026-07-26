/*
 * XREFs of WPP_RECORDER_SF_qqL @ 0x1C00065A0
 * Callers:
 *     NdisFOidRequest @ 0x1C0007DB0 (NdisFOidRequest.c)
 *     ndisOidCloneForCompatibility @ 0x1C0008630 (ndisOidCloneForCompatibility.c)
 *     ndisCreateHandler @ 0x1C000FBB0 (ndisCreateHandler.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0013EA0 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C0018A1C (-ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C001D824 (ndisMInvokeDirectOidRequest.c)
 *     ndisMDoDirectOidRequest @ 0x1C001D980 (ndisMDoDirectOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C001DB3C (ndisDoDirectOidRequest.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C001DDE4 (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     ndisMSetReceiveFilterAttributes @ 0x1C0021654 (ndisMSetReceiveFilterAttributes.c)
 *     ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0021E14 (-ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_A.c)
 *     ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0022720 (-ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIS.c)
 *     ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C00229D4 (-ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_.c)
 *     ndisSetOpenPacketFilter @ 0x1C0026A68 (ndisSetOpenPacketFilter.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C0027818 (ndisNotifyWmiBindUnbind.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C0029FF0 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z @ 0x1C00317F8 (-ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z.c)
 *     ?ndisDriverSystemDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0031E38 (-ndisDriverSystemDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ndisOidPostOffloadEncapsulation @ 0x1C003A070 (ndisOidPostOffloadEncapsulation.c)
 *     ndisCreateFilterAdapterRegistry @ 0x1C003A590 (ndisCreateFilterAdapterRegistry.c)
 *     ndisSetOpenRSSParameters @ 0x1C003B1AC (ndisSetOpenRSSParameters.c)
 *     ndisSetMiniportRSSParameters @ 0x1C003B4B4 (ndisSetMiniportRSSParameters.c)
 *     ndisOidPostRSSParameters @ 0x1C003B6A0 (ndisOidPostRSSParameters.c)
 *     ndisPostSetOpenRSSParameters @ 0x1C003B7A8 (ndisPostSetOpenRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C003B9E4 (ndisPostSetMiniportRSSParameters.c)
 *     ndisOidPreCurrentLookahead @ 0x1C003C240 (ndisOidPreCurrentLookahead.c)
 *     NdisIfRegisterProvider @ 0x1C003D8B0 (NdisIfRegisterProvider.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C003DAF8 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisMInvokeAddDevice @ 0x1C003EB34 (ndisMInvokeAddDevice.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C0063D54 (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     ?ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00687C8 (-ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     NdisSynchronousOidRequest @ 0x1C00692E0 (NdisSynchronousOidRequest.c)
 *     ndisCompleteLegacyRequest @ 0x1C006A2F8 (ndisCompleteLegacyRequest.c)
 *     ndisMCoOidRequestToRequest @ 0x1C006AFF0 (ndisMCoOidRequestToRequest.c)
 *     ndisMDirectOidRequest @ 0x1C006B170 (ndisMDirectOidRequest.c)
 *     ndisMOidRequestToRequest @ 0x1C006B2BC (ndisMOidRequestToRequest.c)
 *     ndisOidPreEnumeratePorts @ 0x1C006C9E0 (ndisOidPreEnumeratePorts.c)
 *     ndisQueryOpenPacketFilter @ 0x1C006F640 (ndisQueryOpenPacketFilter.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C006F920 (ndisQueueRequestOnTopAsync.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C006FA74 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisPMAddRemoveAsync @ 0x1C0074D90 (ndisPMAddRemoveAsync.c)
 *     ndisPostRemoveMiniportWakeUpPattern @ 0x1C007516C (ndisPostRemoveMiniportWakeUpPattern.c)
 *     ndisPreRemoveOpenWakeUpPattern @ 0x1C0075A64 (ndisPreRemoveOpenWakeUpPattern.c)
 *     ndisQueryOpenEnableWakeUp @ 0x1C0075C54 (ndisQueryOpenEnableWakeUp.c)
 *     ndisRemoveOpenWakeUpPattern @ 0x1C0076484 (ndisRemoveOpenWakeUpPattern.c)
 *     ndisSetMiniportEnableWakeUp @ 0x1C0076CD8 (ndisSetMiniportEnableWakeUp.c)
 *     ndisIMInitializeDeviceInstanceInternal @ 0x1C00802A0 (ndisIMInitializeDeviceInstanceInternal.c)
 *     NdisMCoRequestComplete @ 0x1C0086810 (NdisMCoRequestComplete.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C008E420 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C008EB08 (ndisFInvokeDirectOidRequest.c)
 *     NdisQueryBindInstanceName @ 0x1C0092BD0 (NdisQueryBindInstanceName.c)
 *     ?ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00B04EC (-ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFreeVF@@YAHPEAU_NDIS_VF_BLOCK@@@Z @ 0x1C00B09AC (-ndisIovFreeVF@@YAHPEAU_NDIS_VF_BLOCK@@@Z.c)
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00C52E0 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00C5474 (-ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C5D0C (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6178 (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00C6374 (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6580 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisOidPostRSSv2Parameters @ 0x1C00C6F80 (ndisOidPostRSSv2Parameters.c)
 *     ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00F98D0 (-ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00F9F90 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FA7E0 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisInvokeNetPnPEvent @ 0x1C00FC890 (ndisInvokeNetPnPEvent.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00FC974 (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C0105C94 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ndisMInvokeInitialize @ 0x1C0108640 (ndisMInvokeInitialize.c)
 *     ndisMiniportQueryDevicePropertyData @ 0x1C010AA50 (ndisMiniportQueryDevicePropertyData.c)
 *     ?ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z @ 0x1C0116E3C (-ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z.c)
 *     ndisInvokeUnbindAdapter @ 0x1C0116FC4 (ndisInvokeUnbindAdapter.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011D50C (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C01216D4 (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C01218D8 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C012BD40 (-ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisQueueOpenOnProtocol @ 0x1C012BE40 (ndisQueueOpenOnProtocol.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisCreateNotifyQueue @ 0x1C01380B8 (ndisCreateNotifyQueue.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqL @ 0x1C00065A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00065A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00065A0: mov     [rsp+arg_0], rbx
 * 00000001C00065A5: mov     [rsp+arg_8], rbp
 * 00000001C00065AA: mov     [rsp+arg_10], rsi
 * 00000001C00065AF: mov     [rsp+arg_18], rdi
 * 00000001C00065B4: push    r15
 * 00000001C00065B6: sub     rsp, 60h
 * 00000001C00065BA: mov     ebx, r8d
 * 00000001C00065BD: mov     r15, rcx
 * 00000001C00065C0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00065C7: movzx   ebp, r9w
 * 00000001C00065CB: mov     edi, r8d
 * 00000001C00065CE: movzx   esi, dl
 * 00000001C00065D1: shr     rdi, 10h
 * 00000001C00065D5: lea     r11d, [rbx-1]
 * 00000001C00065D9: mov     r8d, r11d
 * 00000001C00065DC: and     r11d, 1Fh
 * 00000001C00065E0: shr     r8, 5
 * 00000001C00065E4: and     r8d, 7FFh
 * 00000001C00065EB: lea     rax, [rdi+rdi*4]
 * 00000001C00065EF: lea     r10, [r8+rax*4]
 * 00000001C00065F3: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C00065F8: bt      eax, r11d
 * 00000001C00065FC: jb      loc_1C00452B8
 * 00000001C0006602: mov     r9, [rsp+68h+arg_20]
 * 00000001C000660A: lea     rax, [rsp+68h+arg_38]
 * 00000001C0006612: mov     [rsp+68h+var_10], 0
 * 00000001C000661B: mov     r8d, ebx
 * 00000001C000661E: mov     [rsp+68h+var_18], 4
 * 00000001C0006627: mov     rcx, r15
 * 00000001C000662A: mov     [rsp+68h+var_20], rax
 * 00000001C000662F: lea     rax, [rsp+68h+arg_30]
 * 00000001C0006637: mov     [rsp+68h+var_28], 8
 * 00000001C0006640: mov     [rsp+68h+var_30], rax
 * 00000001C0006645: lea     rax, [rsp+68h+arg_28]
 * 00000001C000664D: mov     [rsp+68h+var_38], 8
 * 00000001C0006656: mov     [rsp+68h+var_40], rax
 * 00000001C000665B: movzx   edx, sil
 * 00000001C000665F: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0006664: call    cs:__imp_WppAutoLogTrace
 * 00000001C000666B: nop     dword ptr [rax+rax+00h]
 * 00000001C0006670: lea     r11, [rsp+68h+var_8]
 * 00000001C0006675: mov     rbx, [r11+10h]
 * 00000001C0006679: mov     rbp, [r11+18h]
 * 00000001C000667D: mov     rsi, [r11+20h]
 * 00000001C0006681: mov     rdi, [r11+28h]
 * 00000001C0006685: mov     rsp, r11
 * 00000001C0006688: pop     r15
 * 00000001C000668A: retn
 * 00000001C00452B8: lea     rax, [rdi+rdi*4]
 * 00000001C00452BC: add     rax, rax
 * 00000001C00452BF: cmp     [rcx+rax*8+29h], sil
 * 00000001C00452C4: jb      loc_1C0006602
 * 00000001C00452CA: mov     rcx, [rsp+68h+arg_20]; struct _GUID *
 * 00000001C00452D2: lea     rax, [rsp+68h+arg_38]
 * 00000001C00452DA: mov     [rsp+68h+var_28], 0
 * 00000001C00452E3: lea     r8, [rsp+68h+arg_28]
 * 00000001C00452EB: mov     [rsp+68h+var_30], 4
 * 00000001C00452F4: mov     r9d, 8
 * 00000001C00452FA: mov     [rsp+68h+var_38], rax
 * 00000001C00452FF: lea     rax, [rsp+68h+arg_30]
 * 00000001C0045307: mov     [rsp+68h+var_40], 8
 * 00000001C0045310: movzx   edx, bp; unsigned __int16
 * 00000001C0045313: mov     [rsp+68h+var_48], rax
 * 00000001C0045318: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C004531D: nop
 * 00000001C004531E: jmp     loc_1C0006602
 */
