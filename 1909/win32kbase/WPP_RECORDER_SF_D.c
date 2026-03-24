/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C003705C
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001728 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     AssociateKernelIocpWcp @ 0x1C0033AF0 (AssociateKernelIocpWcp.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0036E74 (RIMUnregisterCurrentProcessForInput.c)
 *     GiveForegroundActivateRight @ 0x1C0037820 (GiveForegroundActivateRight.c)
 *     HasForegroundActivateRight @ 0x1C0038590 (HasForegroundActivateRight.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0046FBC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     rimDoRimDevChange @ 0x1C0055BCC (rimDoRimDevChange.c)
 *     RIMDeviceIoControl @ 0x1C0055DE0 (RIMDeviceIoControl.c)
 *     RIMResetPointerDevices @ 0x1C0055FE0 (RIMResetPointerDevices.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0056150 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMUnregisterForInput @ 0x1C00566D0 (RIMUnregisterForInput.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0056A80 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMReadInput @ 0x1C0057060 (RIMReadInput.c)
 *     RIMOnPnpNotification @ 0x1C00572F0 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0057780 (RIMDirectStartStopDeviceRead.c)
 *     RIMRemoveInputOfType @ 0x1C0059BC0 (RIMRemoveInputOfType.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0059D80 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C005A290 (RIMRegisterForInputWithCallbacks.c)
 *     RIMCreateHidDesc @ 0x1C005C480 (RIMCreateHidDesc.c)
 *     RIMAllocateHidDesc @ 0x1C005D02C (RIMAllocateHidDesc.c)
 *     xxxRemoteConnect @ 0x1C0063E60 (xxxRemoteConnect.c)
 *     xxxInternalToUnicode @ 0x1C0074B60 (xxxInternalToUnicode.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C009B1DC (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C009C320 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     CreateKernelIocpWcp @ 0x1C00A0F40 (CreateKernelIocpWcp.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C00A4970 (RIMHandleTTMDeviceRemoval.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00A49D8 (RIMHandleTTMDeviceArrival.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C00A4B84 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     CreateKernelIocp @ 0x1C00A4C80 (CreateKernelIocp.c)
 *     hCreateKernelEvent @ 0x1C00A69E0 (hCreateKernelEvent.c)
 *     RIMDoOnPowerNotification @ 0x1C00B0D04 (RIMDoOnPowerNotification.c)
 *     RIMOnPowerNotification @ 0x1C00B0E00 (RIMOnPowerNotification.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00B69C0 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00B6A00 (RIMDirectStartDeviceClassNotifications.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00B7460 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C00B76E4 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     hCreateKernelTimer @ 0x1C01045C0 (hCreateKernelTimer.c)
 *     NtUserInjectDeviceInput @ 0x1C0117180 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C01175E0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0117D50 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C01181A0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01185E0 (NtUserInjectPointerInput.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C01338F0 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0134C60 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0135110 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01352A0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0135600 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAreSiblingDevices @ 0x1C01359B0 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0135BA0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0136080 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0136200 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C01364D0 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0136A40 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0136CE0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0136EF0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C01372D0 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C01375D0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C0137790 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0137CE0 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0137EB0 (RIMRemoveInjectionDevice.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0139164 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0139BA8 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMActivatePointerDeviceDeadzone @ 0x1C0139D30 (RIMActivatePointerDeviceDeadzone.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1C0139E60 (RIMCreatePointerDeviceDeadzone.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C0139FE0 (RIMDestroyPointerDeviceDeadzone.c)
 *     RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C013A160 (RIMUpdatePointerDeviceDeadzoneOrigin.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C013AD70 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C013D458 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPanelId @ 0x1C013D8EC (RIMGetPanelId.c)
 *     RIMGetProductString @ 0x1C013DE8C (RIMGetProductString.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C013EB88 (RIMReleasePointerDeviceInfo.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0140670 (RIMAllocateHidConfigDesc.c)
 *     RIMGetDeviceParent @ 0x1C0141278 (RIMGetDeviceParent.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0141A94 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0142008 (RIMVirtAllocateHidDesc.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C014630C (RIMIDECreateDeviceInstancePath.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0146FDC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0147454 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0147D4C (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C01482DC (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C01486D4 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0148EAC (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C01490F8 (RIMIDEValidateMouseInputStruct.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C0149D7C (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C014A564 (RIMIDE_InjectGenericHidInput.c)
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C014ABC0 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C014ADA0 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMHandleTTMDeviceInput @ 0x1C014AFC8 (RIMHandleTTMDeviceInput.c)
 *     traceFrame @ 0x1C014C764 (traceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C014D3B0 (RIMStartPointerDeviceFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C014D774 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     RIMDeviceNotify @ 0x1C014E2E0 (RIMDeviceNotify.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01513BC (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C01520B4 (rimSignalReadComplete.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0152AF4 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0153610 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01538CC (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0153B4C (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C0154A00 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C0154E08 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C01552E8 (rimExtractScantime.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C0155B18 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C0155D24 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimProcessPointerDeviceContact @ 0x1C0156A14 (rimProcessPointerDeviceContact.c)
 *     rimObsAddInputObserver @ 0x1C015735C (rimObsAddInputObserver.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0161A70 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C01629E8 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C0168AEC (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0169234 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C016A4C0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016C9CC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C016DD5C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C0172ABC (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C017DA7C (-ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C017DE10 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 *     ?SerializeFullKeyboardStatesForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@@Z @ 0x1C017E8A4 (-SerializeFullKeyboardStatesForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@@Z.c)
 *     ?SerializeKeyboardInputForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C017E9C8 (-SerializeKeyboardInputForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING.c)
 *     ?ivRootBroadcastAsyncKeyState@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@GH@Z @ 0x1C017ED10 (-ivRootBroadcastAsyncKeyState@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?ivRootDeliverFullKeyboardStates@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@@Z @ 0x1C017EE94 (-ivRootDeliverFullKeyboardStates@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C017F010 (-ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PE.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C017FFF0 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C0181368 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C0185188 (-SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z.c)
 *     ?SerializeContainerMouseInput@CMouseSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C0185480 (-SerializeContainerMouseInput@CMouseSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUC.c)
 *     ?ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C018586C (-ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z @ 0x1C0189CC0 (-_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z.c)
 *     ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018A3F0 (-ivHandleKeyboardInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018A590 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018ADB0 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C018CC90 (-ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C018CF3C (-ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C018D3B0 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C003705C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003705C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003705C: mov     [rsp+arg_0], rbx
 * 00000001C0037061: mov     [rsp+arg_8], rbp
 * 00000001C0037066: mov     [rsp+arg_10], rsi
 * 00000001C003706B: push    rdi
 * 00000001C003706C: push    r14
 * 00000001C003706E: push    r15
 * 00000001C0037070: sub     rsp, 40h
 * 00000001C0037074: mov     r14d, r8d
 * 00000001C0037077: mov     sil, dl
 * 00000001C003707A: mov     edi, r8d
 * 00000001C003707D: movzx   ebp, r9w
 * 00000001C0037081: shr     rdi, 10h
 * 00000001C0037085: mov     r15, rcx
 * 00000001C0037088: lea     ebx, [r14-1]
 * 00000001C003708C: mov     r10d, ebx
 * 00000001C003708F: and     ebx, 1Fh
 * 00000001C0037092: shr     r10, 5
 * 00000001C0037096: lea     rax, [rdi+rdi*4]
 * 00000001C003709A: and     r10d, 7FFh
 * 00000001C00370A1: mov     edx, ebx
 * 00000001C00370A3: mov     ebx, 4
 * 00000001C00370A8: lea     r11, [r10+rax*4]
 * 00000001C00370AC: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00370B3: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00370B8: bt      eax, edx
 * 00000001C00370BB: jb      loc_1C00D061C
 * 00000001C00370C1: and     [rsp+58h+var_20], 0
 * 00000001C00370C7: lea     rax, [rsp+58h+arg_28]
 * 00000001C00370CF: mov     r9, [rsp+58h+arg_20]
 * 00000001C00370D7: mov     r8d, r14d
 * 00000001C00370DA: mov     [rsp+58h+var_28], rbx
 * 00000001C00370DF: mov     rcx, r15
 * 00000001C00370E2: mov     [rsp+58h+var_30], rax
 * 00000001C00370E7: movzx   edx, sil
 * 00000001C00370EB: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00370F0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00370F7: nop     dword ptr [rax+rax+00h]
 * 00000001C00370FC: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0037101: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0037106: mov     rsi, [rsp+58h+arg_10]
 * 00000001C003710B: add     rsp, 40h
 * 00000001C003710F: pop     r15
 * 00000001C0037111: pop     r14
 * 00000001C0037113: pop     rdi
 * 00000001C0037114: retn
 * 00000001C00D061C: lea     rcx, [rdi+rdi*4]
 * 00000001C00D0620: add     rcx, rcx
 * 00000001C00D0623: cmp     [r10+rcx*8+29h], sil
 * 00000001C00D0628: jb      loc_1C00370C1
 * 00000001C00D062E: and     [rsp+58h+var_28], 0
 * 00000001C00D0634: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00D063C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00D0643: mov     r8, [rsp+58h+arg_20]
 * 00000001C00D064B: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00D0650: mov     [rsp+58h+var_30], rbx
 * 00000001C00D0655: mov     [rsp+58h+var_38], rdx
 * 00000001C00D065A: mov     edx, 2Bh ; '+'
 * 00000001C00D065F: movzx   r9d, bp
 * 00000001C00D0663: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00D0669: nop
 * 00000001C00D066A: jmp     loc_1C00370C1
 */
