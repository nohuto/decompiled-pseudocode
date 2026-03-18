/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0032A20
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001E68 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ??0CHidInput@@IEAA@XZ @ 0x1C0006160 (--0CHidInput@@IEAA@XZ.c)
 *     ?InitRecorderLog@DelayZonePalmRejection@@AEAAXPEAG@Z @ 0x1C00069A0 (-InitRecorderLog@DelayZonePalmRejection@@AEAAXPEAG@Z.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C0006A44 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C003284C (RIMUnregisterCurrentProcessForInput.c)
 *     RIMAllocateHidDesc @ 0x1C004DE5C (RIMAllocateHidDesc.c)
 *     rimDoRimDevChange @ 0x1C004E4B0 (rimDoRimDevChange.c)
 *     RIMDeviceIoControl @ 0x1C004E580 (RIMDeviceIoControl.c)
 *     RIMResetPointerDevices @ 0x1C004E8B0 (RIMResetPointerDevices.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C004EA00 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMCreateHidDesc @ 0x1C004F0B8 (RIMCreateHidDesc.c)
 *     RIMReadInput @ 0x1C004FC10 (RIMReadInput.c)
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0050200 (RIMDirectStartStopDeviceRead.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C00505A0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMRemoveInputOfType @ 0x1C00525A0 (RIMRemoveInputOfType.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C007AAD0 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C007AF50 (RIMRegisterForInputWithCallbacks.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C0083E10 (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     RIMUnregisterForInput @ 0x1C0087040 (RIMUnregisterForInput.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C008ABF0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C0091F18 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C009248C (RIMHandleTTMDeviceRemoval.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00924DC (RIMHandleTTMDeviceArrival.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C00939D4 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     RIMOnPowerNotification @ 0x1C00A41C0 (RIMOnPowerNotification.c)
 *     RIMDoOnPowerNotification @ 0x1C00A4674 (RIMDoOnPowerNotification.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00A57B0 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00A57F0 (RIMDirectStartDeviceClassNotifications.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00A5F00 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C010BCDC (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C010C710 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C010CB70 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C010CCC0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C010CFE0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAreSiblingDevices @ 0x1C010D350 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C010D510 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C010D990 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C010DAE0 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C010DD80 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C010E2C0 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C010E500 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C010E6C0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C010EAC0 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C010ED80 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C010EF10 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C010F3C0 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C010F560 (RIMRemoveInjectionDevice.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0110860 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01111B0 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMActivatePointerDeviceDeadzone @ 0x1C0111300 (RIMActivatePointerDeviceDeadzone.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1C0111400 (RIMCreatePointerDeviceDeadzone.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C0111560 (RIMDestroyPointerDeviceDeadzone.c)
 *     RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C01116B0 (RIMUpdatePointerDeviceDeadzoneOrigin.c)
 *     RIMComputePTPCurtainRegions @ 0x1C01128C0 (RIMComputePTPCurtainRegions.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0114C5C (RIMAddSimulatedPointerDeviceData.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C011728C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPanelId @ 0x1C011777C (RIMGetPanelId.c)
 *     RIMGetProductString @ 0x1C0117DDC (RIMGetProductString.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0118A5C (RIMReleasePointerDeviceInfo.c)
 *     RIMAllocateHidConfigDesc @ 0x1C011A4F0 (RIMAllocateHidConfigDesc.c)
 *     RIMGetDeviceParent @ 0x1C011B0FC (RIMGetDeviceParent.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C011B7F4 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMVirtAllocateHidDesc @ 0x1C011BD08 (RIMVirtAllocateHidDesc.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C011D640 (RIMIDECreateDeviceInstancePath.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C011E1AC (RIMIDECreatePseudoHIDDevice.c)
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C0120F90 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0121120 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMHandleTTMDeviceInput @ 0x1C012138C (RIMHandleTTMDeviceInput.c)
 *     traceFrame @ 0x1C0122AD8 (traceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0123534 (RIMStartPointerDeviceFrame.c)
 *     RIMDeviceNotify @ 0x1C0124330 (RIMDeviceNotify.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0127738 (rimSignalReadComplete.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0128108 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0128D14 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C0128FE8 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0129224 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C0129F9C (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C012A314 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C012A79C (rimExtractScantime.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C012AF44 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C012B09C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimProcessPointerDeviceContact @ 0x1C012BC0C (rimProcessPointerDeviceContact.c)
 *     rimObsAddInputObserver @ 0x1C012C614 (rimObsAddInputObserver.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C0136898 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z @ 0x1C013BEFC (-GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C013CB1C (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C013DBB8 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C0140200 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C014146C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C014A120 (-Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z.c)
 *     ?ivCallback@CHidInput@@MEAAJPEAX@Z @ 0x1C014D340 (-ivCallback@CHidInput@@MEAAJPEAX@Z.c)
 *     ?ivRootDeliverRawInput@CHidInput@@MEAAJPEAX@Z @ 0x1C014D9C0 (-ivRootDeliverRawInput@CHidInput@@MEAAJPEAX@Z.c)
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C014DC80 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C014F360 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C014FED0 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01505D8 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     UserProcessMITInput @ 0x1C01530AC (UserProcessMITInput.c)
 *     ?ivRootPnp@CBaseInput@@IEAAJPEAUDEVICEINFO@@K@Z @ 0x1C01564F0 (-ivRootPnp@CBaseInput@@IEAAJPEAUDEVICEINFO@@K@Z.c)
 *     ?ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01567CC (-ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivChildLoop@CBaseInput@@IEAAJXZ @ 0x1C0156A3C (-ivChildLoop@CBaseInput@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va);
}
