/*
 * XREFs of ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180113AF0
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180116F38 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180128468 (-s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z @ 0x18012A3D8 (-RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z.c)
 *     ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x180159470 (-RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewCh.c)
 *     ?RuntimeClassInitialize@XamlAllUpViewHost@@QEAAJXZ @ 0x1802CD98C (-RuntimeClassInitialize@XamlAllUpViewHost@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJXZ @ 0x1802D9F0C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJXZ @ 0x1802DD18C (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x1803402A0 (-RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180349DFC (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x18034E594 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1803505B4 (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 *     ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x180351A94 (-RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMana.c)
 *     ?RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ @ 0x180387344 (-RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ.c)
 *     ??0CDesktopPositioner@@QEAA@XZ @ 0x1803A0418 (--0CDesktopPositioner@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VDesktopOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDesktopOperation@@@Z @ 0x1803A6AC4 (--$MakeAndInitialize@VDesktopOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDesktopOperation.c)
 *     ??$MakeAndInitialize@VAppSwitchOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppSwitchOperation@@@Z @ 0x1803BB624 (--$MakeAndInitialize@VAppSwitchOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppSwitchOpera.c)
 *     ??$MakeAndInitialize@VWindowArrangementOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWindowArrangementOperation@@@Z @ 0x1803BCA44 (--$MakeAndInitialize@VWindowArrangementOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWindow.c)
 *     ??$MakeAndInitialize@VAppResizeOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeOperation@@@Z @ 0x1803BD528 (--$MakeAndInitialize@VAppResizeOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeOpera.c)
 *     ??$MakeAndInitialize@VBackOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVBackOperation@@@Z @ 0x1803BDEE4 (--$MakeAndInitialize@VBackOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVBackOperation@@@Z.c)
 *     ??$MakeAndInitialize@VTabletModePositionerOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabletModePositionerOperation@@@Z @ 0x1803BE3B8 (--$MakeAndInitialize@VTabletModePositionerOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTab.c)
 *     ??$MakeAndInitialize@VPPILayoutOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPPILayoutOperation@@@Z @ 0x1803BF8C0 (--$MakeAndInitialize@VPPILayoutOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPPILayoutOpera.c)
 * Callees:
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x1800740CC (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1801176FC (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

__int64 __fastcall CObjectWithThreadUseDetection::InitApartmentId(CObjectWithThreadUseDetection *this)
{
  char v2; // al
  unsigned int v3; // edx

  v2 = _ShouldCheckApartments(*((_DWORD *)this + 11));
  v3 = 0;
  if ( v2 )
    return (unsigned int)SHCoGetApartmentId((unsigned int *)this + 10);
  return v3;
}
