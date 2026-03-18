/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44
 * Callers:
 *     ?Feature_ModernStandbyDFx__private_IsEnabledPreCheck@@YAHXZ @ 0x1C0032E00 (-Feature_ModernStandbyDFx__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck@@YAHXZ @ 0x1C0041DEC (-Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?Feature_ReportWddm2_6ToDriver_Intel__private_IsEnabledPreCheck@@YAHXZ @ 0x1C004B4A4 (-Feature_ReportWddm2_6ToDriver_Intel__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?Feature_ReportWddm2_6ToDriver_Nvidia__private_IsEnabledPreCheck@@YAHXZ @ 0x1C004B4D8 (-Feature_ReportWddm2_6ToDriver_Nvidia__private_IsEnabledPreCheck@@YAHXZ.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00E7750 (DxgkGetMonitorInternalInfo.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0101F50 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01243EC (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C0128998 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     DpiFdoHandleSystemPower @ 0x1C01541B8 (DpiFdoHandleSystemPower.c)
 *     DpiPdoAddPdo @ 0x1C0157A0C (DpiPdoAddPdo.c)
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01613F0 (DpiFdoInitializeGpuVirtualization.c)
 *     DxgkIsGpuParavirtualizationSupported @ 0x1C0161518 (DxgkIsGpuParavirtualizationSupported.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0161580 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01616EC (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiAddDevice @ 0x1C01617D0 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C016362C (DpiFdoInitializeFdo.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016FB9C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_InitMipiDsi2Caps@DXGMONITOR@@AEAAJXZ @ 0x1C0174AA0 (-_InitMipiDsi2Caps@DXGMONITOR@@AEAAJXZ.c)
 *     DpiInitializeEx @ 0x1C017A894 (DpiInitializeEx.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C02017A0 (DxgkAdjustFullscreenGamma.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C020DCF0 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C023A678 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C0290D60 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEBU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z @ 0x1C02971AC (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEBU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C0297A00 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 *     DpIsFeatureEnabled @ 0x1C029C2C0 (DpIsFeatureEnabled.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02A7C88 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02A814C (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_QueryMipiDsi2Caps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C02D0AD4 (-_QueryMipiDsi2Caps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z.c)
 *     ?_SetActiveColorProfileName@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C02D0B30 (-_SetActiveColorProfileName@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     ?_SubmitDsi2Transmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02D0C04 (-_SubmitDsi2Transmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z.c)
 *     DriverEntry @ 0x1C02D5158 (DriverEntry.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C000CFA4 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4,
        int a5)
{
  unsigned int v7; // edi

  a5 = 3;
  v7 = a2;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, a4 != 0 ? 2 : 6) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(v7, a3, 0LL, a4, (const enum wil_ReportingKind *)&a5, 0LL, 0, 1uLL);
  }
}
