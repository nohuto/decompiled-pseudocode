/*
 * XREFs of ?CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIImmersiveSettingsCache@@PEAUITabletModeViewManager@@PEAUIShellTargetingContractManager@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUIInspectable@@PEAUIInspectable@@PEAUIImmersiveMonitorManager@@PEAUIXamlExplorerHost@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180349494
 * Callers:
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x180341894 (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewManager@@QEAA@XZ @ 0x180349090 (--0CMultitaskingViewManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803496D0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManag.c)
 *     ?InternalRelease@?$ComPtr@VCMultitaskingViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180349BCC (-InternalRelease@-$ComPtr@VCMultitaskingViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180349DFC (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 */

__int64 __fastcall CMultitaskingViewManager_CreateInstance(
        struct IMultitaskingViewServiceProvider *a1,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewVisibilityDebouncedNotificationService *a3,
        struct IApplicationViewSwitcher *a4,
        struct IVirtualDesktopManagerInternal *a5,
        struct IVirtualDesktopPinnedApps *a6,
        struct ITabletModeController *a7,
        struct IVirtualDesktopNotificationService *a8,
        struct IImmersiveAppCrusher *a9,
        struct IMultitaskingViewVisibilityServiceInternal *a10,
        struct IMultitaskingViewGestureState *a11,
        struct IImmersiveSettingsCache *a12,
        struct ITabletModeViewManager *a13,
        struct IShellTargetingContractManager *a14,
        struct ISnapServiceProvider *a15,
        struct IApplicationViewIconLoader *a16,
        struct IInspectable *a17,
        struct IInspectable *a18,
        struct IImmersiveMonitorManager *a19,
        struct IXamlExplorerHost *a20,
        struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *a21,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a22,
        struct ITabViewManager *a23,
        const struct _GUID *a24,
        void **a25)
{
  void **v25; // rsi
  struct IVirtualDesktopPinnedApps *v26; // rax
  CMultitaskingViewManager *v27; // rax
  int CanCastTo; // ebx
  struct IVirtualDesktopManagerInternal *v29; // rdi
  __int64 v30; // rdx
  _DWORD *v31; // rcx
  _DWORD *v32; // r9
  __int64 v33; // rdx
  void **v34; // rcx
  int v36[2]; // [rsp+28h] [rbp-B9h] BYREF
  struct IApplicationViewCollection *v37; // [rsp+30h] [rbp-B1h]
  struct IApplicationViewVisibilityDebouncedNotificationService *v38; // [rsp+38h] [rbp-A9h]
  struct IApplicationViewSwitcher *v39; // [rsp+40h] [rbp-A1h]
  struct IVirtualDesktopManagerInternal *v40; // [rsp+48h] [rbp-99h]
  struct IVirtualDesktopPinnedApps *v41; // [rsp+50h] [rbp-91h]
  struct ITabletModeController *v42; // [rsp+58h] [rbp-89h]
  struct IVirtualDesktopNotificationService *v43; // [rsp+60h] [rbp-81h]
  struct IImmersiveAppCrusher *v44; // [rsp+68h] [rbp-79h]
  struct IMultitaskingViewVisibilityServiceInternal *v45; // [rsp+70h] [rbp-71h]
  struct IMultitaskingViewGestureState *v46; // [rsp+78h] [rbp-69h]
  struct IImmersiveSettingsCache *v47; // [rsp+80h] [rbp-61h]
  struct ITabletModeViewManager *v48; // [rsp+88h] [rbp-59h]
  struct IShellTargetingContractManager *v49; // [rsp+90h] [rbp-51h]
  struct ISnapServiceProvider *v50; // [rsp+98h] [rbp-49h]
  struct IApplicationViewIconLoader *v51; // [rsp+A0h] [rbp-41h]
  struct IImmersiveMonitorManager *v52; // [rsp+A8h] [rbp-39h]
  struct IXamlExplorerHost *v53; // [rsp+B0h] [rbp-31h]
  struct IInspectable *v54; // [rsp+B8h] [rbp-29h]
  struct IInspectable *v55; // [rsp+C0h] [rbp-21h]
  struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *v56; // [rsp+C8h] [rbp-19h]
  struct Windows::Internal::ComposableShell::Tabs::ITabController *v57; // [rsp+D0h] [rbp-11h]
  struct ITabViewManager *v58; // [rsp+D8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+Fh]

  v25 = a25;
  a25 = 0LL;
  v40 = a5;
  v26 = a6;
  *v25 = 0LL;
  v41 = v26;
  v42 = a7;
  v43 = a8;
  v44 = a9;
  v45 = a10;
  v46 = a11;
  v47 = a12;
  v48 = a13;
  v49 = a14;
  v50 = a15;
  v51 = a16;
  v52 = a19;
  v53 = a20;
  v54 = a17;
  v55 = a18;
  v56 = a21;
  v57 = a22;
  *(_QWORD *)v36 = a1;
  v58 = a23;
  v37 = a2;
  v38 = a3;
  v39 = a4;
  Microsoft::WRL::ComPtr<CMultitaskingViewManager>::InternalRelease(&a25);
  a25 = 0LL;
  v27 = (CMultitaskingViewManager *)operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v27 )
  {
    CanCastTo = -2147024882;
LABEL_8:
    v30 = 712LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)CanCastTo);
    goto LABEL_18;
  }
  a5 = CMultitaskingViewManager::CMultitaskingViewManager(v27);
  v29 = a5;
  CanCastTo = CMultitaskingViewManager::RuntimeClassInitialize(
                a5,
                (const struct CMultitaskingViewManager::MultitaskingViewManagerInitializeArgs *)v36);
  if ( CanCastTo >= 0 )
  {
    if ( v29 )
      _InterlockedIncrement((volatile signed __int32 *)v29 + 9);
    a25 = (void **)v29;
    CanCastTo = 0;
  }
  Microsoft::WRL::ComPtr<CMultitaskingViewManager>::InternalRelease(&a5);
  if ( CanCastTo < 0 )
    goto LABEL_8;
  *v25 = 0LL;
  if ( InlineIsEqualGUID(&GUID_537b455d_1240_433b_82af_10929138b8be, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v34 = a25;
    *v25 = a25;
    (*((void (__fastcall **)(void **))*v34 + 1))(v34);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v31, v32) )
    {
      CanCastTo = 0;
      *v25 = a25;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::CanCastTo(
                    a25 + 1,
                    v33,
                    v25);
      if ( CanCastTo < 0 )
        goto LABEL_15;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v25 + 8LL))(*v25);
  }
LABEL_15:
  if ( CanCastTo < 0 )
  {
    v30 = 713LL;
    goto LABEL_17;
  }
LABEL_18:
  Microsoft::WRL::ComPtr<CMultitaskingViewManager>::InternalRelease(&a25);
  return (unsigned int)CanCastTo;
}
