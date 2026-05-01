/*
 * XREFs of ?CSwitchItemElementFactory_CreateInstance@@YAJAEBUSwitchItemElementFactoryCreateParams@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x180357814
 * Callers:
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x18034E594 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180350980 (-Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x180351A94 (-RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMana.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCSwitchItemElementFactory@@V1@AEBW4CloseButtonVisibility@@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVCSwitchItemElementFactory@@AEBW4CloseButtonVisibility@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x180357138 (--$MakeAndInitialize@VCSwitchItemElementFactory@@V1@AEBW4CloseButtonVisibility@@AEAPEAUIApplicat.c)
 */

__int64 __fastcall CSwitchItemElementFactory_CreateInstance(
        const struct SwitchItemElementFactoryCreateParams *a1,
        struct IApplicationViewIconLoader *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationViewIconLoader *v11; // [rsp+38h] [rbp+10h] BYREF
  CSwitchItemElementFactory *v12; // [rsp+40h] [rbp+18h] BYREF

  v11 = a2;
  *a4 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CSwitchItemElementFactory,CSwitchItemElementFactory,enum CloseButtonVisibility const &,IApplicationViewIconLoader * &>(
         &v12,
         (int *)a1,
         (__int64 *)&v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 133LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelementfactory.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_6;
  }
  v6 = (**(__int64 (__fastcall ***)(CSwitchItemElementFactory *, GUID *, void **))v12)(
         v12,
         &GUID_baf4e19e_c425_476e_9da5_0be997a477cf,
         a4);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 134LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v7;
}
