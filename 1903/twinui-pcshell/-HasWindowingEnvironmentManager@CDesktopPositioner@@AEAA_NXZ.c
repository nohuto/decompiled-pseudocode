/*
 * XREFs of ?HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ @ 0x1801136B4
 * Callers:
 *     ?PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18001EC60 (-PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801190B0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803A1220 (-ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@.c)
 *     ?DisplaySettingsChange@CDesktopPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803A18B0 (-DisplaySettingsChange@CDesktopPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPL.c)
 *     ?PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ @ 0x1803A2B30 (-PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803A4250 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008D08C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4Rep.c)
 */

char __fastcall CDesktopPositioner::HasWindowingEnvironmentManager(CDesktopPositioner *this, __int64 a2, __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsageToService((__int64)this, a2, a3);
  return 1;
}
