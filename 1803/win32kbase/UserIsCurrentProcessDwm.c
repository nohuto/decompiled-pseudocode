/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C003C070
 * Callers:
 *     NtQueryCompositionInputSink @ 0x1C0001D70 (NtQueryCompositionInputSink.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00023C0 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtUpdateInputSinkTransforms @ 0x1C00028E0 (NtUpdateInputSinkTransforms.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0005C30 (NtDuplicateCompositionInputSink.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C00109C0 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0012A30 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C001C5F0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C003BB74 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C0041AD0 (DrvEnumDisplayDevices.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0042CE4 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0048150 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     GreSfmOpenTokenEvent @ 0x1C004D030 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C004D250 (GreSfmGetNotificationTokens.c)
 *     NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C0063DD0 (NtGdiDdDDIOpenAdapterFromDeviceName.c)
 *     NtGdiDdDDIOpenAdapterFromLuid @ 0x1C006C070 (NtGdiDdDDIOpenAdapterFromLuid.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006D650 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00C9D30 (NtGdiDdDDICreateOutputDupl.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C0142D70 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C0142F00 (NtDCompositionCreateDwmChannel.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C0143150 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C0143CB0 (NtDCompositionUpdatePointerCapture.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C01443CC (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtCompositionInputThread @ 0x1C015FEB0 (NtCompositionInputThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsCurrentProcessDwm()
{
  return PsGetCurrentProcess() == (_QWORD)g_pepDwm;
}
