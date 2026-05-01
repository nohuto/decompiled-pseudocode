/*
 * XREFs of ??$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x18034DAC8
 * Callers:
 *     ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18034DED0 (-CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1802D97E8 (-InternalRelease@-$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CAltTabViewHost@@QEAA@XZ @ 0x18034DCC0 (--0CAltTabViewHost@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x18034E594 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewHost,CAltTabViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IMultitaskingViewVisibilityServiceInternal * &,IMultitaskingViewGestureState * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
        volatile signed __int32 **a1,
        struct IMultitaskingData **a2,
        struct IMultitaskingViewManagerInternal **a3,
        struct IApplicationViewSwitcher **a4,
        struct IImmersiveAppCrusher **a5,
        struct IMultitaskingViewVisibilityServiceInternal **a6,
        struct IMultitaskingViewGestureState **a7,
        struct Windows::Internal::ComposableShell::Tabs::ITabController **a8,
        struct ITabViewManager **a9)
{
  CAltTabViewHost *v13; // rax
  int v14; // edi
  volatile signed __int32 *v15; // rbx
  struct IApplicationViewSwitcher *v16; // r9
  struct IMultitaskingViewManagerInternal *v17; // r8
  volatile signed __int32 *v19; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v13 = (CAltTabViewHost *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v13 )
  {
    v15 = (volatile signed __int32 *)CAltTabViewHost::CAltTabViewHost(v13);
    v16 = *a4;
    v17 = *a3;
    v19 = v15;
    v14 = CAltTabViewHost::RuntimeClassInitialize((CAltTabViewHost *)v15, *a2, v17, v16, *a5, *a6, *a7, *a8, *a9);
    if ( v14 >= 0 )
    {
      if ( v15 )
        _InterlockedIncrement(v15 + 33);
      *a1 = v15;
      v14 = 0;
    }
    Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease((__int64 *)&v19);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v14;
}
