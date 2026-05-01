/*
 * XREFs of ??$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1802ECFF0
 * Callers:
 *     ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1802ED3F0 (-CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180103D2C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecu.c)
 *     ??0CAltTabViewHost@@QEAA@XZ @ 0x1802ED1E8 (--0CAltTabViewHost@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1802ED7B0 (-InternalRelease@-$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1802EDAF4 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewHost,CAltTabViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IMultitaskingViewVisibilityServiceInternal * &,IMultitaskingViewGestureState * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
        CAltTabViewHost **a1,
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
  int v14; // ebx
  CAltTabViewHost *v15; // rdi
  struct IApplicationViewSwitcher *v16; // r9
  struct IMultitaskingViewManagerInternal *v17; // r8
  volatile int *v18; // rdx
  CAltTabViewHost *v20; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v13 = (CAltTabViewHost *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v13 )
  {
    v15 = CAltTabViewHost::CAltTabViewHost(v13);
    v16 = *a4;
    v17 = *a3;
    v20 = v15;
    v14 = CAltTabViewHost::RuntimeClassInitialize(v15, *a2, v17, v16, *a5, *a6, *a7, *a8, *a9);
    if ( v14 >= 0 )
    {
      if ( v15 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLExecuteCommandBase>::InternalAddRef(
          (__int64)v15,
          v18);
      *a1 = v15;
      v14 = 0;
    }
    Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease(&v20);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v14;
}
