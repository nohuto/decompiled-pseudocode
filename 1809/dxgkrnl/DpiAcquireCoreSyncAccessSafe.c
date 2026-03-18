/*
 * XREFs of DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001E590 (DpiFdoHandleDisplayDetectControl.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C0042E3C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
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
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00BCFB8 (DxgkAcquireAdapterCoreSync.c)
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
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 32);
  v7 = *(_QWORD *)(v6 + 64);
  if ( *(_BYTE *)(v7 + 481) )
    DpiCheckForOutstandingD3Requests(*(_QWORD *)(v6 + 64));
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3688), 1u);
  if ( *(_DWORD *)(v7 + 236) == 6 || *(_DWORD *)(v7 + 240) == 6 || (v9 = *(unsigned int *)(v7 + 3888), (_DWORD)v9 == 3) )
  {
    v12 = -1073741810LL;
    v5 = -1073741810;
    v13 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(v7 + 24);
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v2 + 16) == 1953656900 )
  {
    if ( *(_DWORD *)(v2 + 20) != 5 && *(_DWORD *)(v2 + 20) != 2 )
    {
      if ( *(_DWORD *)(v2 + 20) == 6 )
      {
LABEL_10:
        LOBYTE(v3) = a2 == 1;
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v7 + 3792), (unsigned int)(v3 + 1));
        return v5;
      }
      goto LABEL_21;
    }
    if ( (*(_BYTE *)(v7 + 481) && *(_DWORD *)(v7 + 280) <= 1u && !*(_BYTE *)(v7 + 482)
       || (_DWORD)v9 != 1 && *(_DWORD *)(v7 + 284) == 1)
      && *(_QWORD *)(v7 + 3792) )
    {
      goto LABEL_10;
    }
    v12 = -1073741661LL;
    v5 = -1073741661;
    v13 = WdLogNewEntry5_WdWarning(v9, 1953656900LL, v10);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(v7 + 24);
LABEL_23:
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdWarning(v13);
    goto LABEL_24;
  }
LABEL_21:
  v5 = -1073741637;
  v14 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v14 + 24) = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v14 + 32) = -1073741637LL;
  WdLogEvent5_WdError(v14);
LABEL_24:
  if ( *(_BYTE *)(v7 + 481) )
    DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
  ExReleaseResourceLite((PERESOURCE)(v7 + 3688));
  KeLeaveCriticalRegion();
  return v5;
}
