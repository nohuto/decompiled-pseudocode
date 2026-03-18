/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C00339B0
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0002150 (NtUpdateInputSinkTransforms.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0002330 (NtDuplicateCompositionInputSink.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0014A58 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvEnumDisplayDevices @ 0x1C00158D0 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJG@Z @ 0x1C001BD10 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0033474 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C0033BC0 (NtQueryCompositionInputQueueAndTransform.c)
 *     GreSfmGetNotificationTokens @ 0x1C00343D0 (GreSfmGetNotificationTokens.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00345C0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C0034AA4 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     NtQueryCompositionInputSink @ 0x1C0036E70 (NtQueryCompositionInputSink.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00568A8 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00583C0 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C0059940 (NtDCompositionCreateDwmChannel.c)
 *     NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C0073F50 (NtGdiDdDDIOpenAdapterFromDeviceName.c)
 *     NtGdiDdDDIOpenAdapterFromLuid @ 0x1C00864C0 (NtGdiDdDDIOpenAdapterFromLuid.c)
 *     GreSfmOpenTokenEvent @ 0x1C0089700 (GreSfmOpenTokenEvent.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C008B4D0 (NtDCompositionSetMaterialProperty.c)
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00FD980 (NtGdiDdDDICreateOutputDupl.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C00FE0F0 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C01660C0 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C01663E0 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C0166C40 (NtDCompositionUpdatePointerCapture.c)
 *     NtCompositionInputThread @ 0x1C0183860 (NtCompositionInputThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1)
{
  return PsGetCurrentProcess(a1) == (_QWORD)g_pepDwm;
}
