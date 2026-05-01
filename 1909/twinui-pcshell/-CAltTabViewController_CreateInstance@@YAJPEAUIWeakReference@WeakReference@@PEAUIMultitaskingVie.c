/*
 * XREFs of ?CAltTabViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180377FF8
 * Callers:
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x18036DD64 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x180377CA8 (--$MakeAndInitialize@VCAltTabViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMul.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFrameInteractionEvents@@UISwitchItemController@@UIDismissAnimationController@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180378120 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFrameInteractionEvent.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x180378190 (-InternalRelease@-$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CAltTabViewController_CreateInstance(
        struct IWeakReference *a1,
        struct IMultitaskingViewManagerInternal *a2,
        struct IApplicationViewSwitcher *a3,
        struct IImmersiveAppCrusher *a4,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a5,
        struct ITabViewManager *a6,
        const struct _GUID *a7,
        void **a8)
{
  void **v8; // rdi
  int v9; // eax
  int CanCastTo; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  _DWORD *v14; // r9
  __int64 v15; // rdx
  void **v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IWeakReference *v19; // [rsp+60h] [rbp+20h] BYREF
  struct IMultitaskingViewManagerInternal *v20; // [rsp+68h] [rbp+28h] BYREF
  struct IApplicationViewSwitcher *v21; // [rsp+70h] [rbp+30h] BYREF
  struct IImmersiveAppCrusher *v22; // [rsp+78h] [rbp+38h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  v8 = a8;
  a8 = 0LL;
  *v8 = 0LL;
  Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease(&a8);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewController,CAltTabViewController,WeakReference::IWeakReference * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
         (CAltTabViewController **)&a8,
         &v19,
         &v20,
         &v21,
         &v22,
         &a5,
         &a6);
  CanCastTo = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 97LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewcontroller.cpp",
      (const char *)v11);
    goto LABEL_14;
  }
  *v8 = 0LL;
  if ( InlineIsEqualGUID(&GUID_66ac636f_a9ef_413d_b08e_f926afaa37f9, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v16 = a8;
    *v8 = a8;
    (*((void (__fastcall **)(void **))*v16 + 1))(v16);
    CanCastTo = 0;
    goto LABEL_14;
  }
  if ( InlineIsEqualGUID(v13, v14) )
  {
    CanCastTo = 0;
    *v8 = a8;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>::CanCastTo(
                  a8 + 1,
                  v15,
                  v8);
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
  }
  if ( CanCastTo < 0 )
  {
    v11 = (unsigned int)CanCastTo;
    v12 = 98LL;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(void *))(*(_QWORD *)*v8 + 8LL))(*v8);
LABEL_14:
  Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease(&a8);
  return (unsigned int)CanCastTo;
}
