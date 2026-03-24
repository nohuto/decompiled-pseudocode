/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C00380CC
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001728 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     AssociateKernelIocpWcp @ 0x1C0034840 (AssociateKernelIocpWcp.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0037EE4 (RIMUnregisterCurrentProcessForInput.c)
 *     GiveForegroundActivateRight @ 0x1C0038890 (GiveForegroundActivateRight.c)
 *     HasForegroundActivateRight @ 0x1C0039600 (HasForegroundActivateRight.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B9BC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     RIMCreateHidDesc @ 0x1C00513AC (RIMCreateHidDesc.c)
 *     rimDoRimDevChange @ 0x1C0069B2C (rimDoRimDevChange.c)
 *     RIMDeviceIoControl @ 0x1C0069D40 (RIMDeviceIoControl.c)
 *     RIMResetPointerDevices @ 0x1C0069F40 (RIMResetPointerDevices.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C006A0B0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMUnregisterForInput @ 0x1C006A630 (RIMUnregisterForInput.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C006A9E0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMReadInput @ 0x1C006AFC0 (RIMReadInput.c)
 *     RIMOnPnpNotification @ 0x1C006B250 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C006B6E0 (RIMDirectStartStopDeviceRead.c)
 *     RIMRemoveInputOfType @ 0x1C006D5B0 (RIMRemoveInputOfType.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C006D770 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C006DC80 (RIMRegisterForInputWithCallbacks.c)
 *     xxxInternalToUnicode @ 0x1C00710D0 (xxxInternalToUnicode.c)
 *     xxxRemoteConnect @ 0x1C0076D40 (xxxRemoteConnect.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C009CBE0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     CreateKernelIocpWcp @ 0x1C00A1E60 (CreateKernelIocpWcp.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C00A59C0 (RIMHandleTTMDeviceRemoval.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00A5A28 (RIMHandleTTMDeviceArrival.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C00A5BD4 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     CreateKernelIocp @ 0x1C00A5CD0 (CreateKernelIocp.c)
 *     hCreateKernelEvent @ 0x1C00A7680 (hCreateKernelEvent.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C00AA0EC (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     RIMAllocateHidDesc @ 0x1C00AE4FC (RIMAllocateHidDesc.c)
 *     RIMDoOnPowerNotification @ 0x1C00B3880 (RIMDoOnPowerNotification.c)
 *     RIMOnPowerNotification @ 0x1C00B40C0 (RIMOnPowerNotification.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00B4270 (RIMDirectStartDeviceClassNotifications.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00B4380 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00BA520 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C00BA7A4 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     hCreateKernelTimer @ 0x1C0106F30 (hCreateKernelTimer.c)
 *     NtUserInjectDeviceInput @ 0x1C0119AF0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0119F50 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C011A6C0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C011AB10 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C011AF50 (NtUserInjectPointerInput.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0135F60 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C01372D0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0137780 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0137910 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0137C70 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAreSiblingDevices @ 0x1C0138020 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0138210 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C01386F0 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0138870 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C0138B40 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C01390B0 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0139350 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0139560 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C0139940 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0139C40 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C0139E00 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C013A350 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C013A520 (RIMRemoveInjectionDevice.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C013B7D4 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C013C218 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMActivatePointerDeviceDeadzone @ 0x1C013C3A0 (RIMActivatePointerDeviceDeadzone.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1C013C4D0 (RIMCreatePointerDeviceDeadzone.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C013C650 (RIMDestroyPointerDeviceDeadzone.c)
 *     RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C013C7D0 (RIMUpdatePointerDeviceDeadzoneOrigin.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C013D3E0 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C013FAC8 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPanelId @ 0x1C013FF5C (RIMGetPanelId.c)
 *     RIMGetProductString @ 0x1C01404FC (RIMGetProductString.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C01411F8 (RIMReleasePointerDeviceInfo.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0142CE0 (RIMAllocateHidConfigDesc.c)
 *     RIMGetDeviceParent @ 0x1C01438E8 (RIMGetDeviceParent.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0144104 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0144678 (RIMVirtAllocateHidDesc.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C014897C (RIMIDECreateDeviceInstancePath.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C014964C (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0149AC4 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C014A3BC (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C014A94C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C014AD44 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C014B51C (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C014B768 (RIMIDEValidateMouseInputStruct.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C014C3EC (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C014CBD4 (RIMIDE_InjectGenericHidInput.c)
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C014D230 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C014D410 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMHandleTTMDeviceInput @ 0x1C014D638 (RIMHandleTTMDeviceInput.c)
 *     traceFrame @ 0x1C014EDD4 (traceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C014FA20 (RIMStartPointerDeviceFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C014FDE4 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     RIMDeviceNotify @ 0x1C0150950 (RIMDeviceNotify.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C01542AC (rimSignalReadComplete.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0154CEC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0155808 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C0155AC4 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0155D44 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C0156BF8 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C0157000 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C01574E0 (rimExtractScantime.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C0157D10 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C0157F1C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimProcessPointerDeviceContact @ 0x1C0158C0C (rimProcessPointerDeviceContact.c)
 *     rimObsAddInputObserver @ 0x1C0159554 (rimObsAddInputObserver.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0163C70 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C0164BE8 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C016ACEC (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C016B434 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C016C6C0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016EBBC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C016FF4C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C0174CAC (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C017FC6C (-ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C0180000 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 *     ?SerializeFullKeyboardStatesForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@@Z @ 0x1C0180A94 (-SerializeFullKeyboardStatesForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@@Z.c)
 *     ?SerializeKeyboardInputForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C0180BB8 (-SerializeKeyboardInputForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING.c)
 *     ?ivRootBroadcastAsyncKeyState@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@GH@Z @ 0x1C0180F00 (-ivRootBroadcastAsyncKeyState@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?ivRootDeliverFullKeyboardStates@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@@Z @ 0x1C0181084 (-ivRootDeliverFullKeyboardStates@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C0181200 (-ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PE.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01821E0 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C0183558 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C0187378 (-SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z.c)
 *     ?SerializeContainerMouseInput@CMouseSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C0187670 (-SerializeContainerMouseInput@CMouseSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUC.c)
 *     ?ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C0187A5C (-ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z @ 0x1C018BEB0 (-_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z.c)
 *     ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018C5E0 (-ivHandleKeyboardInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018C780 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018CFA0 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C018EE80 (-ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C018F12C (-ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C018F5A0 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C00380CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00380CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00380CC: mov     [rsp+arg_0], rbx
 * 00000001C00380D1: mov     [rsp+arg_8], rbp
 * 00000001C00380D6: mov     [rsp+arg_10], rsi
 * 00000001C00380DB: push    rdi
 * 00000001C00380DC: push    r14
 * 00000001C00380DE: push    r15
 * 00000001C00380E0: sub     rsp, 40h
 * 00000001C00380E4: mov     r14d, r8d
 * 00000001C00380E7: mov     sil, dl
 * 00000001C00380EA: mov     edi, r8d
 * 00000001C00380ED: movzx   ebp, r9w
 * 00000001C00380F1: shr     rdi, 10h
 * 00000001C00380F5: mov     r15, rcx
 * 00000001C00380F8: lea     ebx, [r14-1]
 * 00000001C00380FC: mov     r10d, ebx
 * 00000001C00380FF: and     ebx, 1Fh
 * 00000001C0038102: shr     r10, 5
 * 00000001C0038106: lea     rax, [rdi+rdi*4]
 * 00000001C003810A: and     r10d, 7FFh
 * 00000001C0038111: mov     edx, ebx
 * 00000001C0038113: mov     ebx, 4
 * 00000001C0038118: lea     r11, [r10+rax*4]
 * 00000001C003811C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0038123: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0038128: bt      eax, edx
 * 00000001C003812B: jb      loc_1C00D341E
 * 00000001C0038131: and     [rsp+58h+var_20], 0
 * 00000001C0038137: lea     rax, [rsp+58h+arg_28]
 * 00000001C003813F: mov     r9, [rsp+58h+arg_20]
 * 00000001C0038147: mov     r8d, r14d
 * 00000001C003814A: mov     [rsp+58h+var_28], rbx
 * 00000001C003814F: mov     rcx, r15
 * 00000001C0038152: mov     [rsp+58h+var_30], rax
 * 00000001C0038157: movzx   edx, sil
 * 00000001C003815B: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0038160: call    cs:__imp_WppAutoLogTrace
 * 00000001C0038167: nop     dword ptr [rax+rax+00h]
 * 00000001C003816C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0038171: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0038176: mov     rsi, [rsp+58h+arg_10]
 * 00000001C003817B: add     rsp, 40h
 * 00000001C003817F: pop     r15
 * 00000001C0038181: pop     r14
 * 00000001C0038183: pop     rdi
 * 00000001C0038184: retn
 * 00000001C00D341E: lea     rcx, [rdi+rdi*4]
 * 00000001C00D3422: add     rcx, rcx
 * 00000001C00D3425: cmp     [r10+rcx*8+29h], sil
 * 00000001C00D342A: jb      loc_1C0038131
 * 00000001C00D3430: and     [rsp+58h+var_28], 0
 * 00000001C00D3436: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00D343E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00D3445: mov     r8, [rsp+58h+arg_20]
 * 00000001C00D344D: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00D3452: mov     [rsp+58h+var_30], rbx
 * 00000001C00D3457: mov     [rsp+58h+var_38], rdx
 * 00000001C00D345C: mov     edx, 2Bh ; '+'
 * 00000001C00D3461: movzx   r9d, bp
 * 00000001C00D3465: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00D346B: nop
 * 00000001C00D346C: jmp     loc_1C0038131
 */
