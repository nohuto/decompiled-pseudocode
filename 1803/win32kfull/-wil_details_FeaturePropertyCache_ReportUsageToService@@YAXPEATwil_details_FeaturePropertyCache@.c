/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C005F920
 * Callers:
 *     ?UpdateProcessPriorityWhenComponentAdded@@YAXPEAUtagWND@@0@Z @ 0x1C0007D80 (-UpdateProcessPriorityWhenComponentAdded@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C005F010 (xxxSetForegroundThreadWithWindowHint.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z @ 0x1C005F668 (-UpdateProcessPriorityWhenEnableStateIsChanging@@YAXPEAUtagWND@@H@Z.c)
 *     InitProcessSystemDpi @ 0x1C005F700 (InitProcessSystemDpi.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0073BD0 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C00E48A0 (--0InkProcessor@@AEAA@XZ.c)
 *     xxxDoHotKeyStuff @ 0x1C00E9CA0 (xxxDoHotKeyStuff.c)
 *     InitRotationManager @ 0x1C01124F0 (InitRotationManager.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z @ 0x1C01D6440 (-UpdateProcessPriorityWhenComponentRemoved@@YAXPEAUtagWND@@0@Z.c)
 *     DCompSessionInitialize @ 0x1C037FD00 (DCompSessionInitialize.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C005F988 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
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
