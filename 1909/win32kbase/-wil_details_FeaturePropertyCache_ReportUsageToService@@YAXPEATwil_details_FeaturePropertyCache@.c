/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004AB90
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0033FE4 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0038F60 (DrvEnumDisplaySettings.c)
 *     DrvBuildDevmodeList @ 0x1C0045480 (DrvBuildDevmodeList.c)
 *     DrvSetDisplayConfig @ 0x1C0048030 (DrvSetDisplayConfig.c)
 *     IsPTPIVEnabled @ 0x1C004A2BC (IsPTPIVEnabled.c)
 *     UpdateAsyncKeyState @ 0x1C004AAC0 (UpdateAsyncKeyState.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C005B550 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0062340 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00732C0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00A5F10 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00A7CC0 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ShouldEnableInputVirtualization @ 0x1C00A9ED0 (ShouldEnableInputVirtualization.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00BC484 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvSetMonitorBrightness @ 0x1C00BC954 (DrvSetMonitorBrightness.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C012817C (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z @ 0x1C0159D24 (-Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C015FF5C (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?VirtualizeFullKeyboardStates@CKeyboardSensor@@QEAAXK@Z @ 0x1C017EB08 (-VirtualizeFullKeyboardStates@CKeyboardSensor@@QEAAXK@Z.c)
 *     IsKeyboardIVEnabled @ 0x1C018BF6C (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C018BFC8 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C018C03C (IsTouchIVEnabled.c)
 *     ?SetCursorAsyncPos@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMoveEvent@2@AEBVCInputDest@@@Z @ 0x1C0190FFC (-SetCursorAsyncPos@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMoveEvent@2@AEBVCInputDe.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C0031AFC (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        _DWORD *a1,
        unsigned int a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4,
        int a5)
{
  unsigned int v8; // r8d

  if ( a5 )
  {
    switch ( a5 )
    {
      case 1:
        v8 = a4 == 0 ? 4 : 0;
        break;
      case 2:
        v8 = a4 != 0 ? 1 : 5;
        break;
      case 3:
        v8 = a4 != 0 ? 2 : 6;
        break;
      case 4:
        v8 = a4 != 0 ? 3 : 7;
        break;
      case 5:
        v8 = a4 != 0 ? 8 : 10;
        break;
      case 6:
        v8 = a4 != 0 ? 9 : 11;
        break;
      default:
        if ( (unsigned __int8)(a5 - 100) > 0x31u )
          v8 = 255;
        else
          v8 = (unsigned __int8)(a5 - 100) + (a4 != 0 ? 100 : 150);
        break;
    }
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, v8) )
    {
      if ( g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, a4, (const enum wil_ReportingKind *)&a5, 0LL, 0, 1uLL);
    }
  }
}
