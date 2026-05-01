/*
 * XREFs of ?AppResizeView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E5078
 * Callers:
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x1803D6BF0 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@UICompositeExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180091000 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperi.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x180362AFC (-InternalRelease@-$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0AppResizeView@@QEAA@XZ @ 0x1803E4E0C (--0AppResizeView@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIAppResizeView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803E518C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1803E518C.c)
 */

__int64 __fastcall AppResizeView_CreateInstance(const struct _GUID *a1, void **a2)
{
  AppResizeView *v3; // rax
  volatile int *v4; // rax
  volatile int *v5; // rdx
  volatile int *v6; // r10
  __int64 v7; // rcx
  int CanCastTo; // ebx
  volatile int *v9; // rcx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v13; // [rsp+30h] [rbp+8h] BYREF
  volatile int *v14; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v13);
  v13 = 0LL;
  v3 = (AppResizeView *)operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
  {
    CanCastTo = -2147024882;
    v10 = 653LL;
    goto LABEL_11;
  }
  v4 = (volatile int *)AppResizeView::AppResizeView(v3);
  v14 = v4;
  v6 = v4;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::AddRef(
      (__int64)v4,
      v5);
  v13 = v6;
  Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v14);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_be98f7f1_c8ba_4e0f_baa2_e07d8df9b391, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v9 = v13;
    *a2 = (void *)v13;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v9 + 8LL))(v9);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IAppResizeView,ITabletModeInputCallback,IApplicationViewChangeListener>::CanCastTo(
                  v13,
                  v7,
                  a2);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  }
  if ( CanCastTo < 0 )
  {
    v10 = 654LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)CanCastTo);
  }
  Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v13);
  return (unsigned int)CanCastTo;
}
