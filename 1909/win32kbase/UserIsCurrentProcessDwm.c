/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C0036D50
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0001140 (NtUpdateInputSinkTransforms.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0001650 (NtDuplicateCompositionInputSink.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C000D800 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0012318 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0036420 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C0036960 (NtQueryCompositionInputQueueAndTransform.c)
 *     GreSfmGetNotificationTokens @ 0x1C00379A0 (GreSfmGetNotificationTokens.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00394CC (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvEnumDisplayDevices @ 0x1C003B980 (DrvEnumDisplayDevices.c)
 *     ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1C003E220 (-DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C003F7D0 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C004439C (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C006CA98 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C006D510 (NtDCompositionCreateDwmChannel.c)
 *     NtQueryCompositionInputSink @ 0x1C007A960 (NtQueryCompositionInputSink.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C00887A0 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C0089F60 (NtDCompositionSetMaterialProperty.c)
 *     GreSfmOpenTokenEvent @ 0x1C0099400 (GreSfmOpenTokenEvent.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C019FE30 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C01A0170 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C01A0B30 (NtDCompositionUpdatePointerCapture.c)
 *     NtCompositionInputThread @ 0x1C01C5D00 (NtCompositionInputThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1, __int64 a2)
{
  return PsGetCurrentProcess(a1, a2) == (_QWORD)g_pepDwm;
}
