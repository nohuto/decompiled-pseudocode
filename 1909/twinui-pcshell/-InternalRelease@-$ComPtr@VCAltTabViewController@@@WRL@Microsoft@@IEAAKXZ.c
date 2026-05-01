/*
 * XREFs of ?InternalRelease@?$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x180378190
 * Callers:
 *     ??$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x180377CA8 (--$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMul.c)
 *     ?CAltTabViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180377FF8 (-CAltTabViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingVie.c)
 *     ??$MakeAndInitialize@VCPPIAllUpViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabletModeViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabletModeViewManager@@@Z @ 0x18037F14C (--$MakeAndInitialize@VCPPIAllUpViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIM.c)
 *     ?CPPIAllUpViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18037F288 (-CPPIAllUpViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingV.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewControllerBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180378360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMu_ea_180378360.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewControllerBase>::Release(v1);
  }
  return result;
}
