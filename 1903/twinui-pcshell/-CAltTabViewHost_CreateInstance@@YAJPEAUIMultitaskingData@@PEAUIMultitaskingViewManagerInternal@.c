/*
 * XREFs of ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18034DED0
 * Callers:
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18034A75C (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1802D97E8 (-InternalRelease@-$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCAltTabViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIMultitaskingViewGestureState@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x18034DAC8 (--$MakeAndInitialize@VCAltTabViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewMana.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@@Details@23@UIAltTabViewHostInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18034DFE4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_18034DFE4.c)
 */

__int64 __fastcall CAltTabViewHost_CreateInstance(
        struct IMultitaskingData *a1,
        struct IMultitaskingViewManagerInternal *a2,
        struct IApplicationViewSwitcher *a3,
        struct IImmersiveAppCrusher *a4,
        struct IMultitaskingViewVisibilityServiceInternal *a5,
        struct IMultitaskingViewGestureState *a6,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a7,
        struct ITabViewManager *a8,
        const struct _GUID *a9,
        void **a10)
{
  void **v10; // rdi
  int v11; // eax
  int CanCastTo; // ebx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  void **v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IMultitaskingData *v19; // [rsp+70h] [rbp+20h] BYREF
  struct IMultitaskingViewManagerInternal *v20; // [rsp+78h] [rbp+28h] BYREF
  struct IApplicationViewSwitcher *v21; // [rsp+80h] [rbp+30h] BYREF
  struct IImmersiveAppCrusher *v22; // [rsp+88h] [rbp+38h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  v10 = a10;
  a10 = 0LL;
  *v10 = 0LL;
  Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease((__int64 *)&a10);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<CAltTabViewHost,CAltTabViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IMultitaskingViewVisibilityServiceInternal * &,IMultitaskingViewGestureState * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
          (volatile signed __int32 **)&a10,
          &v19,
          &v20,
          &v21,
          &v22,
          &a5,
          &a6,
          &a7,
          &a8);
  CanCastTo = v11;
  if ( v11 < 0 )
  {
    v13 = (unsigned int)v11;
    v14 = 321LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)v13);
    goto LABEL_10;
  }
  *v10 = 0LL;
  if ( InlineIsEqualGUID(&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v16 = a10;
    *v10 = a10;
    (*((void (__fastcall **)(void **))*v16 + 1))(v16);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IAltTabViewHost>>,IAltTabViewHostInternal>::CanCastTo(
                  a10,
                  v15,
                  v10);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v10 + 8LL))(*v10);
  }
  if ( CanCastTo < 0 )
  {
    v13 = (unsigned int)CanCastTo;
    v14 = 323LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease((__int64 *)&a10);
  return (unsigned int)CanCastTo;
}
