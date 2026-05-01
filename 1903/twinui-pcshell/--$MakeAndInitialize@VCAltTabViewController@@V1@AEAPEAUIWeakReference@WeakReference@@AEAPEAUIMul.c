/*
 * XREFs of ??$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x180358498
 * Callers:
 *     ?CAltTabViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1803587D8 (-CAltTabViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingVie.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CAltTabViewController@@QEAA@XZ @ 0x180358618 (--0CAltTabViewController@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x180358970 (-InternalRelease@-$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x180358B90 (-RuntimeClassInitialize@CAltTabViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMulti.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewController,CAltTabViewController,WeakReference::IWeakReference * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
        volatile signed __int32 **a1,
        struct IWeakReference **a2,
        struct IMultitaskingViewManagerInternal **a3,
        struct IApplicationViewSwitcher **a4,
        struct IImmersiveAppCrusher **a5,
        struct Windows::Internal::ComposableShell::Tabs::ITabController **a6,
        struct ITabViewManager **a7)
{
  CAltTabViewController *v11; // rax
  int v12; // edi
  volatile signed __int32 *v13; // rbx
  struct IApplicationViewSwitcher *v14; // r9
  struct IMultitaskingViewManagerInternal *v15; // r8
  volatile signed __int32 *v17; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CAltTabViewController *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = (volatile signed __int32 *)CAltTabViewController::CAltTabViewController(v11);
    v14 = *a4;
    v15 = *a3;
    v17 = v13;
    v12 = CAltTabViewController::RuntimeClassInitialize((CAltTabViewController *)v13, *a2, v15, v14, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v13 )
        _InterlockedIncrement(v13 + 31);
      *a1 = v13;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease(&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
