/*
 * XREFs of DpiAcquireCoreSyncAccessSafe @ 0x1C00D192C
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001E240 (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x1C001E468 (DxgkQueryConnectionChanges.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C004A3D8 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00519E4 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoDispatchIoctl @ 0x1C00D05B0 (DpiPdoDispatchIoctl.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00E7630 (DpiGdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C0148F60 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C0154F5C (DpiPdoHandleOpmIoctls.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01577C0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoSetDevicePower @ 0x1C0157F20 (DpiPdoSetDevicePower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01591A4 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoStartAdapter @ 0x1C01631F8 (DpiFdoStartAdapter.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C029F410 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C02A2098 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C02A2334 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DxgkHandleMiracastEscape @ 0x1C02A5E58 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z @ 0x1C02A6680 (-DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z.c)
 *     ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C02A6780 (-DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x1C02A6880 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     ?DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z @ 0x1C02A6980 (-DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z.c)
 *     ?DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C02A6A80 (-DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C02A7860 (-DpiBrightnessIfGet@@YAJPEAXPEAE@Z.c)
 *     ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x1C02A7990 (-DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z.c)
 *     ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C02A7AA0 (-DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1C02A7BD0 (-DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C02A7CF0 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C02A7EA0 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z @ 0x1C02A7F70 (-DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C02A8308 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02A855C (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoThermalActiveCooling @ 0x1C02AA830 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C02AA9D0 (DpiFdoThermalPassiveCooling.c)
 *     DpiPdoRemovePdoObjects @ 0x1C02B01E8 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D90C (DpiCheckForOutstandingD3Requests.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00D1A5C (DxgkAcquireAdapterCoreSync.c)
 */

__int64 __fastcall DpiAcquireCoreSyncAccessSafe(__int64 a1, char a2)
{
  __int64 v2; // rsi
  int v3; // edi
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 32);
  v7 = *(_QWORD *)(v6 + 64);
  if ( *(_BYTE *)(v7 + 482) )
    DpiCheckForOutstandingD3Requests(*(_QWORD *)(v6 + 64));
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3792), 1u);
  if ( *(_DWORD *)(v7 + 236) == 6 || *(_DWORD *)(v7 + 240) == 6 || (v9 = *(unsigned int *)(v7 + 3992), (_DWORD)v9 == 3) )
  {
    v14 = -1073741810LL;
    v5 = -1073741810;
    v15 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v15 + 24) = *(_QWORD *)(v7 + 24);
    goto LABEL_27;
  }
  v11 = 1953656900LL;
  if ( *(_DWORD *)(v2 + 16) == 1953656900 )
  {
    if ( *(_DWORD *)(v2 + 20) != 5 && *(_DWORD *)(v2 + 20) != 2 )
    {
      if ( *(_DWORD *)(v2 + 20) == 6 )
      {
LABEL_10:
        LOBYTE(v3) = a2 == 1;
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v7 + 3896), (unsigned int)(v3 + 1));
        return v5;
      }
      goto LABEL_25;
    }
    v13 = *(_BYTE *)(v7 + 482);
    if ( (v13 && *(_DWORD *)(v7 + 280) <= 1u && !*(_BYTE *)(v7 + 483) || (_DWORD)v9 != 1 && *(_DWORD *)(v7 + 284) == 1)
      && *(_QWORD *)(v7 + 3896)
      && (!v13
       || *(_DWORD *)(v7 + 280) > 1u
       || *(_BYTE *)(v7 + 483)
       || !*((_BYTE *)DXGGLOBAL::GetGlobal(v9, 1953656900LL) + 303848)) )
    {
      goto LABEL_10;
    }
    v14 = -1073741661LL;
    v5 = -1073741661;
    v15 = WdLogNewEntry5_WdWarning(v9, v11, v10);
    *(_QWORD *)(v15 + 24) = *(_QWORD *)(v7 + 24);
LABEL_27:
    *(_QWORD *)(v15 + 32) = v14;
    WdLogEvent5_WdWarning(v15);
    goto LABEL_28;
  }
LABEL_25:
  v5 = -1073741637;
  v16 = WdLogNewEntry5_WdError(v9, 1953656900LL, v10);
  *(_QWORD *)(v16 + 24) = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v16 + 32) = -1073741637LL;
  WdLogEvent5_WdError(v16);
LABEL_28:
  if ( *(_BYTE *)(v7 + 482) )
    DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
  ExReleaseResourceLite((PERESOURCE)(v7 + 3792));
  KeLeaveCriticalRegion();
  return v5;
}
