/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C0037DC0
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0001140 (NtUpdateInputSinkTransforms.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0001650 (NtDuplicateCompositionInputSink.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00068F0 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00095E0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C001497C (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0037490 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00379D0 (NtQueryCompositionInputQueueAndTransform.c)
 *     GreSfmGetNotificationTokens @ 0x1C0038A10 (GreSfmGetNotificationTokens.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C003AFF4 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C003B540 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0048344 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1C004D570 (-DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C004E770 (DrvEnumDisplayDevices.c)
 *     NtQueryCompositionInputSink @ 0x1C007E160 (NtQueryCompositionInputSink.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C008CA00 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C008E410 (NtDCompositionSetMaterialProperty.c)
 *     GreSfmOpenTokenEvent @ 0x1C009A840 (GreSfmOpenTokenEvent.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C00A2440 (NtDCompositionCreateDwmChannel.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C01A20E0 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C01A2420 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C01A2DF0 (NtDCompositionUpdatePointerCapture.c)
 *     NtCompositionInputThread @ 0x1C01C7CA0 (NtCompositionInputThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1, __int64 a2)
{
  return PsGetCurrentProcess(a1, a2) == (_QWORD)g_pepDwm;
}
