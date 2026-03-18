/*
 * XREFs of memmove @ 0x1C00AF880
 * Callers:
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C00026CC (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0002B40 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0003570 (NtUserDisplayConfigSetDeviceInfo.c)
 *     ?AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0003B38 (-AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C0003D40 (NtGdiSetPrivateDeviceGammaRamp.c)
 *     ?EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009AC0 (-EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatc.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000E28C (-EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000E484 (-EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000E6F4 (-EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0012C50 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0013DC0 (NtUserDisplayConfigGetDeviceInfo.c)
 *     DrvEnumDisplaySettings @ 0x1C00144F0 (DrvEnumDisplaySettings.c)
 *     DrvEnumDisplayDevices @ 0x1C00158D0 (DrvEnumDisplayDevices.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0018070 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0019B38 (-Grow@-$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?Grow@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0019BE8 (-Grow@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetK.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C001A5E0 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     AllocAce @ 0x1C001CDE0 (AllocAce.c)
 *     NtGdiGetRegionData @ 0x1C001D2B0 (NtGdiGetRegionData.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C001F9D0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C001FAB0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 *     CreateProp @ 0x1C002EAB8 (CreateProp.c)
 *     SetHandleFlag @ 0x1C0033A50 (SetHandleFlag.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00344D0 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C0036744 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0037B10 (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0040A94 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C004149C (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C004547C (-ResetSystemColors@@YAXXZ.c)
 *     InitScancodeMap @ 0x1C0045640 (InitScancodeMap.c)
 *     FastGetProfileValue @ 0x1C0046540 (FastGetProfileValue.c)
 *     RtlLoadStringOrError @ 0x1C0046CF0 (RtlLoadStringOrError.c)
 *     NtUserSetSysColors @ 0x1C0048D20 (NtUserSetSysColors.c)
 *     NtUserQueryDisplayConfig @ 0x1C004A2B0 (NtUserQueryDisplayConfig.c)
 *     xxxUserChangeDisplaySettings @ 0x1C004B2B0 (xxxUserChangeDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C0052A70 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x1C00534C0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0053824 (DrvGetDisplayDriverParameters.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0055E78 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvGetDisplayDriverNames @ 0x1C0056A30 (DrvGetDisplayDriverNames.c)
 *     ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C00571DC (-InsertModecapList@@YAKPEAUtagModeCap@@0K@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C005C298 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C005C33C (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C005C3F8 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     NtGdiOpenDCW @ 0x1C005E1A0 (NtGdiOpenDCW.c)
 *     NtGdiExtCreateRegion @ 0x1C005E3B0 (NtGdiExtCreateRegion.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C005E740 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C005EA70 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C005F390 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0061BC0 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0062480 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     NtUserToUnicodeEx @ 0x1C0065010 (NtUserToUnicodeEx.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C0065F98 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00668FC (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0069854 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0069B54 (-growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C006D16C (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     ?EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C006E438 (-EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C006E820 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00743C0 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0076500 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 *     ?SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0076880 (-SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0076BD8 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0078C74 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C0079214 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1C007C4CC (-AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C007C5C0 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C007D050 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C007D1C8 (-AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     NtDCompositionGetDeletedResources @ 0x1C007D2B0 (NtDCompositionGetDeletedResources.c)
 *     ?SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C007E1EC (-SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?ReturnResourceLifetimeTag@CNotifiedDeletionResource@DirectComposition@@UEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1C007E600 (-ReturnResourceLifetimeTag@CNotifiedDeletionResource@DirectComposition@@UEAAXPEAVCDeletedNotific.c)
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C007F48C (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 *     ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z @ 0x1C007FAD8 (-MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z.c)
 *     UserReAllocPool @ 0x1C007FC70 (UserReAllocPool.c)
 *     ?GetTags@CDeletedNotificationList@DirectComposition@@QEAAXKPEA_KPEAK@Z @ 0x1C00802C4 (-GetTags@CDeletedNotificationList@DirectComposition@@QEAAXKPEA_KPEAK@Z.c)
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C0082E30 (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C00854D8 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 *     ?ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0085E80 (-ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplication.c)
 *     UserReAllocPoolWithQuota @ 0x1C0089E00 (UserReAllocPoolWithQuota.c)
 *     InitSystemThread @ 0x1C00904B0 (InitSystemThread.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C0091900 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z @ 0x1C00921F0 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C0092920 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z @ 0x1C0093110 (-DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C009B450 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     NtGdiPolyPolyDraw @ 0x1C009F8E0 (NtGdiPolyPolyDraw.c)
 *     ?bClone@EPATHOBJ@@QEAAHAEAV1@@Z @ 0x1C00A0010 (-bClone@EPATHOBJ@@QEAAHAEAV1@@Z.c)
 *     NtGdiGetCertificateByHandle @ 0x1C00A0740 (NtGdiGetCertificateByHandle.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1C00A0FCC (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x1C00A1220 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1C00AD8C0 (NtDCompositionSendDwmLpcMessage.c)
 *     RaiseException @ 0x1C00AF250 (RaiseException.c)
 *     UserPostNKAPCBuffer @ 0x1C00E0190 (UserPostNKAPCBuffer.c)
 *     ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C00E1164 (-xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z.c)
 *     FastGetProfileKeysW @ 0x1C00E4E10 (FastGetProfileKeysW.c)
 *     HMCleanupGrantedHandle @ 0x1C00EB8B4 (HMCleanupGrantedHandle.c)
 *     NtConfigureInputSpace @ 0x1C00ECB10 (NtConfigureInputSpace.c)
 *     NtMITSynthesizeTouchInput @ 0x1C00EDC10 (NtMITSynthesizeTouchInput.c)
 *     NtSetShellCursorState @ 0x1C00EE310 (NtSetShellCursorState.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00EE9A0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C00EF890 (NtUserGetRawPointerDeviceData.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C00EFC90 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00F0000 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C00F03E0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00F0740 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00F0910 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00F0AD0 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00F17E0 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C00F1BE0 (NtUserSetManipulationInputTarget.c)
 *     NtUserSystemParametersInfo @ 0x1C00F20E0 (NtUserSystemParametersInfo.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C00F6FE0 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00F7354 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00F7D64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x1C00F9CEC (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00FA330 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C00FA700 (NtGdiGetCertificate.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C00FCA0C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 *     NtHWCursorUpdatePointer @ 0x1C00FECE0 (NtHWCursorUpdatePointer.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0101D60 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0102028 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0105C70 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0108D5C (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C0109608 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 *     rimCopyInstancePathFromRimDev @ 0x1C010BC70 (rimCopyInstancePathFromRimDev.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C010DC20 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMInjectInput @ 0x1C010EAC0 (RIMInjectInput.c)
 *     RIMGetProductString @ 0x1C0117DDC (RIMGetProductString.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0118A5C (RIMReleasePointerDeviceInfo.c)
 *     RIMVirtCreateHidDesc @ 0x1C011C038 (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C011D6F4 (RIMIDECreateHIDDesc.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C0120390 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C0120C20 (RIMIDE_InitializePointerDeviceInjection.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C0120DB4 (RIMIDE_InjectGenericHidInput.c)
 *     RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C01231B4 (RIMFixUpAutoRepeatCompleteFrameUpDowns.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01238D0 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C0123B30 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     rimStoreRawDataBlock @ 0x1C01241B0 (rimStoreRawDataBlock.c)
 *     rimProcessInput @ 0x1C0127258 (rimProcessInput.c)
 *     RIMVirtProcessHidRawInput @ 0x1C0128AE0 (RIMVirtProcessHidRawInput.c)
 *     rimObsCopyMessage @ 0x1C012CB70 (rimObsCopyMessage.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C0133FE8 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C01341A8 (-BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C013662C (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     SendShellClipChanged @ 0x1C01515A0 (SendShellClipChanged.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C0155E20 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C015E854 (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C0169BDC (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C016A280 (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C016A420 (-AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016A4C8 (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016A640 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C016A95C (-SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016AC9C (-EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C016B058 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C016B230 (-SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 *     ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C016C010 (-SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C016D204 (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F244 (-EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C016FF30 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C0175650 (-EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z.c)
 *     ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0175930 (-SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?EmitUpdateFontNameCommand@CTextBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0179694 (-EmitUpdateFontNameCommand@CTextBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateTextCommand@CTextBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0179784 (-EmitUpdateTextCommand@CTextBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0179CA0 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 *     CreateNewEventEntry @ 0x1C0185790 (CreateNewEventEntry.c)
 *     WppTraceCallback @ 0x1C0201000 (WppTraceCallback.c)
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
