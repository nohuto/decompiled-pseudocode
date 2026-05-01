/*
 * XREFs of ??$MakeAndInitialize@VCSnapAssistViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x18036F340
 * Callers:
 *     ?CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18036F828 (-CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInter.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801F38B4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultit.c)
 *     ??0CSnapAssistViewHost@@QEAA@XZ @ 0x18036F4F0 (--0CSnapAssistViewHost@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCSnapAssistViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x18036FBB0 (-InternalRelease@-$ComPtr@VCSnapAssistViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x18036FD8C (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSnapAssistViewHost,CSnapAssistViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IMultitaskingViewVisibilityServiceInternal * &,IImmersiveAppCrusher * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
        CSnapAssistViewHost **a1,
        struct IMultitaskingData **a2,
        struct IMultitaskingViewManagerInternal **a3,
        struct IMultitaskingViewVisibilityServiceInternal **a4,
        struct IImmersiveAppCrusher **a5,
        struct Windows::Internal::ComposableShell::Tabs::ITabController **a6,
        struct ITabViewManager **a7)
{
  CSnapAssistViewHost *v11; // rax
  int v12; // ebx
  CSnapAssistViewHost *v13; // rdi
  struct IMultitaskingViewVisibilityServiceInternal *v14; // r9
  struct IMultitaskingViewManagerInternal *v15; // r8
  volatile int *v16; // rdx
  CSnapAssistViewHost *v18; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CSnapAssistViewHost *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = CSnapAssistViewHost::CSnapAssistViewHost(v11);
    v14 = *a4;
    v15 = *a3;
    v18 = v13;
    v12 = CSnapAssistViewHost::RuntimeClassInitialize(v13, *a2, v15, v14, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::InternalAddRef(
          (__int64)v13,
          v16);
      *a1 = v13;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<CSnapAssistViewHost>::InternalRelease(&v18);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
