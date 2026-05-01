/*
 * XREFs of ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BA314
 * Callers:
 *     ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x180346130 (-CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout.c)
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x1803510B8 (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x18035B254 (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 *     ?Clone@CAppLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803BA490 (-Clone@CAppLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800FE114 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@2.c)
 *     ??0CAppLayout@@QEAA@XZ @ 0x1803B9EC4 (--0CAppLayout@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803BA41C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VF.c)
 *     ?InternalRelease@?$ComPtr@VCAppLayout@@@WRL@Microsoft@@IEAAKXZ @ 0x1803BB118 (-InternalRelease@-$ComPtr@VCAppLayout@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803BBAB0 (-SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall CAppLayout_CreateInstance(
        const struct LAYOUT_ENVIRONMENT_DETAILS *a1,
        const struct _GUID *a2,
        CAppLayout **a3)
{
  CAppLayout *v5; // rax
  int CanCastTo; // ebx
  CAppLayout *v7; // rax
  volatile int *v8; // rdx
  CAppLayout *v9; // r10
  __int64 v10; // rcx
  CAppLayout *v11; // rcx
  CAppLayout *v13; // [rsp+38h] [rbp+10h] BYREF
  CAppLayout *v14; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<CAppLayout>::InternalRelease(&v13);
  v13 = 0LL;
  v5 = (CAppLayout *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = CAppLayout::CAppLayout(v5);
    v14 = v7;
    v9 = v7;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::InternalAddRef(
        (__int64)v7,
        v8);
    v13 = v9;
    Microsoft::WRL::ComPtr<CAppLayout>::InternalRelease(&v14);
    if ( a1 )
      CAppLayout::SetLayoutEnv((CAppLayout *)((char *)v13 + 40), a1);
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_dad20bf4_9130_4ecb_bcce_cab826dcafae, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v11 = v13;
      *a3 = v13;
      (*(void (__fastcall **)(CAppLayout *))(*(_QWORD *)v11 + 8LL))(v11);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IAppLayoutInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutBuilder,IAppLayout,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
                    v13,
                    v10,
                    a3);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(CAppLayout *))(*(_QWORD *)*a3 + 8LL))(*a3);
    }
  }
  else
  {
    CanCastTo = -2147024882;
  }
  Microsoft::WRL::ComPtr<CAppLayout>::InternalRelease(&v13);
  return (unsigned int)CanCastTo;
}
