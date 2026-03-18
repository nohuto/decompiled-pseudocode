/*
 * XREFs of DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001E590 (DpiFdoHandleDisplayDetectControl.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0042F78 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkQueryConnectionChanges @ 0x1C0044888 (DxgkQueryConnectionChanges.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C004A5B4 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00BC560 (DpiGdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C013E690 (DpiPdoDispatchInternalIoctl.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01438D4 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0263B28 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C02663D8 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C0266664 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DxgkHandleMiracastEscape @ 0x1C026A648 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C026BD30 (-DpiBrightnessIfGet@@YAJPEAXPEAE@Z.c)
 *     ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x1C026BE60 (-DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z.c)
 *     ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C026BF70 (-DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1C026C0A0 (-DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C026C1C0 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C026C360 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z @ 0x1C026C430 (-DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C026C8E8 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoThermalActiveCooling @ 0x1C026D880 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C026DA40 (DpiFdoThermalPassiveCooling.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C027196C (DpiPdoHandleOpmIoctls.c)
 *     DpiPdoDispatchPnp @ 0x1C0274F20 (DpiPdoDispatchPnp.c)
 *     DpiPdoRemovePdoObjects @ 0x1C0277564 (DpiPdoRemovePdoObjects.c)
 *     DpiPdoSetDevicePower @ 0x1C027766C (DpiPdoSetDevicePower.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00BCCF0 (DxgkReleaseAdapterCoreSync.c)
 */

__int64 __fastcall DpiReleaseCoreSyncAccessSafe(__int64 a1, char a2)
{
  char v2; // r8
  int v3; // edx
  __int64 v4; // rbx

  v2 = a2;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL);
  if ( *(_BYTE *)(v4 + 481) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  LOBYTE(v3) = v2 == 1;
  DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3792), (unsigned int)(v3 + 1));
  ExReleaseResourceLite((PERESOURCE)(v4 + 3688));
  KeLeaveCriticalRegion();
  return 0LL;
}
