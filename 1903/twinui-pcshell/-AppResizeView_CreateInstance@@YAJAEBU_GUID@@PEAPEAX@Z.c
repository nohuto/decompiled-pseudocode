/*
 * XREFs of ?AppResizeView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803C5AB8
 * Callers:
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x1803B76E0 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x1803433BC (-InternalRelease@-$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0AppResizeView@@QEAA@XZ @ 0x1803C584C (--0AppResizeView@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIAppResizeView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803C5BC4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1803C5BC4.c)
 */

__int64 __fastcall AppResizeView_CreateInstance(const struct _GUID *a1, void **a2)
{
  AppResizeView *v3; // rax
  volatile signed __int32 *v4; // rax
  __int64 v5; // rcx
  int CanCastTo; // ebx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v11; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v12; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v11);
  v11 = 0LL;
  v3 = (AppResizeView *)operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
  {
    CanCastTo = -2147024882;
    v8 = 653LL;
    goto LABEL_11;
  }
  v4 = (volatile signed __int32 *)AppResizeView::AppResizeView(v3);
  v12 = v4;
  if ( v4 )
    _InterlockedIncrement(v4 + 13);
  v11 = v4;
  Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v12);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_be98f7f1_c8ba_4e0f_baa2_e07d8df9b391, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v7 = v11;
    *a2 = (void *)v11;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IAppResizeView,ITabletModeInputCallback,IApplicationViewChangeListener>::CanCastTo(
                  v11,
                  v5,
                  a2);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  }
  if ( CanCastTo < 0 )
  {
    v8 = 654LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)CanCastTo);
  }
  Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v11);
  return (unsigned int)CanCastTo;
}
