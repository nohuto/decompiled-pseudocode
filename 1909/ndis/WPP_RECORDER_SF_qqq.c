/*
 * XREFs of WPP_RECORDER_SF_qqq @ 0x1C0008AE0
 * Callers:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0014CA4 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001C33C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisPMAddWOLPattern @ 0x1C001D0F4 (ndisPMAddWOLPattern.c)
 *     ndisOidPMAddRemove @ 0x1C001D2F4 (ndisOidPMAddRemove.c)
 *     ndisMSetReceiveFilterAttributes @ 0x1C0021654 (ndisMSetReceiveFilterAttributes.c)
 *     ndisPMAddProtocolOffload @ 0x1C002311C (ndisPMAddProtocolOffload.c)
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023FA0 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     ?ndisSetupMiniportProtocolHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002492C (-ndisSetupMiniportProtocolHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS.c)
 *     ndisOidPreOffloadEncapsulation @ 0x1C00255D0 (ndisOidPreOffloadEncapsulation.c)
 *     ndisSetOpenEthMulticastList @ 0x1C0025978 (ndisSetOpenEthMulticastList.c)
 *     ndisIsValidMulticastFilter @ 0x1C0025FA0 (ndisIsValidMulticastFilter.c)
 *     ndisOidPrePacketFilter @ 0x1C0026530 (ndisOidPrePacketFilter.c)
 *     ?ndisAllocateConfigurationString@@YAHPEBU_UNICODE_STRING@@00PEAU1@@Z @ 0x1C002AF7C (-ndisAllocateConfigurationString@@YAHPEBU_UNICODE_STRING@@00PEAU1@@Z.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0038CF4 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ?ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003A190 (-ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisOidPreRSSParameters @ 0x1C003B000 (ndisOidPreRSSParameters.c)
 *     ndisSetOpenRSSParameters @ 0x1C003B19C (ndisSetOpenRSSParameters.c)
 *     ndisOidPostRSSParameters @ 0x1C003B690 (ndisOidPostRSSParameters.c)
 *     ndisOidPreRSSCaps @ 0x1C003CAB0 (ndisOidPreRSSCaps.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C003FF2C (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisOidPreNicSwitchCaps @ 0x1C005FB00 (ndisOidPreNicSwitchCaps.c)
 *     ndisOidPreRcvFilterGlobalParameters @ 0x1C0060600 (ndisOidPreRcvFilterGlobalParameters.c)
 *     ndisOidPreReceiveFilterCaps @ 0x1C0060E20 (ndisOidPreReceiveFilterCaps.c)
 *     ndisOidPostTaskOffload @ 0x1C006C700 (ndisOidPostTaskOffload.c)
 *     ndisOidPreOffloadCaps @ 0x1C006D830 (ndisOidPreOffloadCaps.c)
 *     ndisOidPreTaskOffload @ 0x1C006E930 (ndisOidPreTaskOffload.c)
 *     ndisProcessRequestAsync @ 0x1C006F270 (ndisProcessRequestAsync.c)
 *     ndisOidPrePMProtocolOffloadList @ 0x1C00745D0 (ndisOidPrePMProtocolOffloadList.c)
 *     ndisOidPrePMWOLPatternList @ 0x1C0074A60 (ndisOidPrePMWOLPatternList.c)
 *     ndisPostSetRemoveWakeUpPattern @ 0x1C0075770 (ndisPostSetRemoveWakeUpPattern.c)
 *     ndisQueryWakeUpPatternList @ 0x1C0075F08 (ndisQueryWakeUpPatternList.c)
 *     ndisSetEnableWakeUp @ 0x1C0076C14 (ndisSetEnableWakeUp.c)
 *     ?ndisIMQueueDeviceInstance@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C007F81C (-ndisIMQueueDeviceInstance@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C007FBB0 (NdisIMInitializeDeviceInstanceEx.c)
 *     NdisCmActivateVc @ 0x1C00831E0 (NdisCmActivateVc.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0083FC0 (NdisCmRegisterAddressFamilyEx.c)
 *     NdisCoOidRequest @ 0x1C0085310 (NdisCoOidRequest.c)
 *     NdisCoRequest @ 0x1C0085830 (NdisCoRequest.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C008E0D4 (ndisCreateFilterInstanceRegistry.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C008F898 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C0090690 (ndisSetAllFilterDefaultParameters.c)
 *     ndisSetFilterDefaultParameter @ 0x1C009099C (ndisSetFilterDefaultParameter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093C18 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C009D030 (-ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ndisOidPreIovAllocateVF @ 0x1C00B2BD0 (ndisOidPreIovAllocateVF.c)
 *     ndisOidPreIovCreateVPort @ 0x1C00B31D0 (ndisOidPreIovCreateVPort.c)
 *     NdisPDStartup @ 0x1C00C0510 (NdisPDStartup.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6750 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisOidPostRSSv2Parameters @ 0x1C00C7150 (ndisOidPostRSSv2Parameters.c)
 *     ndisOidPreRSSv2Parameters @ 0x1C00C7250 (ndisOidPreRSSv2Parameters.c)
 *     ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FA2A0 (-ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FAFE0 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FB430 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0114544 (-ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_.c)
 *     ?NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z @ 0x1C0120F60 (-NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z.c)
 *     NdisOpenAdapterEx @ 0x1C012B900 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C012C0CC (ndisMOpenAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqq @ 0x1C0008AE0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0008AE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0008AE0: mov     [rsp+arg_0], rbx
 * 00000001C0008AE5: mov     [rsp+arg_8], rbp
 * 00000001C0008AEA: mov     [rsp+arg_10], rsi
 * 00000001C0008AEF: mov     [rsp+arg_18], rdi
 * 00000001C0008AF4: push    r15
 * 00000001C0008AF6: sub     rsp, 60h
 * 00000001C0008AFA: mov     ebx, r8d
 * 00000001C0008AFD: mov     r15, rcx
 * 00000001C0008B00: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0008B07: movzx   ebp, r9w
 * 00000001C0008B0B: mov     edi, r8d
 * 00000001C0008B0E: movzx   esi, dl
 * 00000001C0008B11: shr     rdi, 10h
 * 00000001C0008B15: lea     r11d, [rbx-1]
 * 00000001C0008B19: mov     r8d, r11d
 * 00000001C0008B1C: and     r11d, 1Fh
 * 00000001C0008B20: shr     r8, 5
 * 00000001C0008B24: and     r8d, 7FFh
 * 00000001C0008B2B: lea     rax, [rdi+rdi*4]
 * 00000001C0008B2F: lea     r10, [r8+rax*4]
 * 00000001C0008B33: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C0008B38: bt      eax, r11d
 * 00000001C0008B3C: jb      loc_1C00465FE
 * 00000001C0008B42: mov     r9, [rsp+68h+arg_20]
 * 00000001C0008B4A: lea     rax, [rsp+68h+arg_38]
 * 00000001C0008B52: mov     [rsp+68h+var_10], 0
 * 00000001C0008B5B: mov     r8d, ebx
 * 00000001C0008B5E: mov     [rsp+68h+var_18], 8
 * 00000001C0008B67: mov     rcx, r15
 * 00000001C0008B6A: mov     [rsp+68h+var_20], rax
 * 00000001C0008B6F: lea     rax, [rsp+68h+arg_30]
 * 00000001C0008B77: mov     [rsp+68h+var_28], 8
 * 00000001C0008B80: mov     [rsp+68h+var_30], rax
 * 00000001C0008B85: lea     rax, [rsp+68h+arg_28]
 * 00000001C0008B8D: mov     [rsp+68h+var_38], 8
 * 00000001C0008B96: mov     [rsp+68h+var_40], rax
 * 00000001C0008B9B: movzx   edx, sil
 * 00000001C0008B9F: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0008BA4: call    cs:__imp_WppAutoLogTrace
 * 00000001C0008BAB: nop     dword ptr [rax+rax+00h]
 * 00000001C0008BB0: lea     r11, [rsp+68h+var_8]
 * 00000001C0008BB5: mov     rbx, [r11+10h]
 * 00000001C0008BB9: mov     rbp, [r11+18h]
 * 00000001C0008BBD: mov     rsi, [r11+20h]
 * 00000001C0008BC1: mov     rdi, [r11+28h]
 * 00000001C0008BC5: mov     rsp, r11
 * 00000001C0008BC8: pop     r15
 * 00000001C0008BCA: retn
 * 00000001C00465FE: lea     rax, [rdi+rdi*4]
 * 00000001C0046602: add     rax, rax
 * 00000001C0046605: cmp     [rcx+rax*8+29h], sil
 * 00000001C004660A: jb      loc_1C0008B42
 * 00000001C0046610: mov     rcx, [rsp+68h+arg_20]; struct _GUID *
 * 00000001C0046618: lea     rax, [rsp+68h+arg_38]
 * 00000001C0046620: mov     [rsp+68h+var_28], 0
 * 00000001C0046629: lea     r8, [rsp+68h+arg_28]
 * 00000001C0046631: mov     [rsp+68h+var_30], 8
 * 00000001C004663A: mov     r9d, 8
 * 00000001C0046640: mov     [rsp+68h+var_38], rax
 * 00000001C0046645: lea     rax, [rsp+68h+arg_30]
 * 00000001C004664D: mov     [rsp+68h+var_40], 8
 * 00000001C0046656: movzx   edx, bp; unsigned __int16
 * 00000001C0046659: mov     [rsp+68h+var_48], rax
 * 00000001C004665E: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C0046663: nop
 * 00000001C0046664: jmp     loc_1C0008B42
 */
