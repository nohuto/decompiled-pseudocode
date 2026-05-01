/*
 * XREFs of ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803C5268
 * Callers:
 *     ?CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x1803B6CF0 (-CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUn.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1803B7A70 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0WindowArrangementView@@QEAA@XZ @ 0x1803C0820 (--0WindowArrangementView@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIWindowArrangementView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@UIDragVisualHost@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803C1124 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1803C1124.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1803C26B0 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall WindowArrangementView_CreateInstance(const struct _GUID *a1, WindowArrangementView **a2)
{
  WindowArrangementView *v3; // rax
  WindowArrangementView *v4; // rax
  _DWORD *v5; // rcx
  int CanCastTo; // ebx
  WindowArrangementView *v7; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowArrangementView *v11; // [rsp+30h] [rbp+8h] BYREF
  WindowArrangementView *v12; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v11);
  v11 = 0LL;
  v3 = (WindowArrangementView *)operator new(0x280uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
  {
    CanCastTo = -2147024882;
    v8 = 1662LL;
    goto LABEL_11;
  }
  v4 = WindowArrangementView::WindowArrangementView(v3);
  v12 = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)v4 + 17);
  v11 = v4;
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v12);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_7b2bc499_f4b4_47d9_8d1b_ae0588f9d474, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v7 = v11;
    *a2 = v11;
    (*(void (__fastcall **)(WindowArrangementView *))(*(_QWORD *)v7 + 8LL))(v7);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IWindowArrangementView,ITabletModeInputCallback,IApplicationViewChangeListener,IDragVisualHost,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
                  (__int64)v11,
                  v5,
                  a2);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(WindowArrangementView *))(*(_QWORD *)*a2 + 8LL))(*a2);
  }
  if ( CanCastTo < 0 )
  {
    v8 = 1663LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)CanCastTo);
  }
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v11);
  return (unsigned int)CanCastTo;
}
