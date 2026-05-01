/*
 * XREFs of ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18041CCB4
 * Callers:
 *     ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x1803ABA4C (-CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout.c)
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x1803B6F78 (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x1803C1014 (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 *     ?Clone@CAppLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18041CE30 (-Clone@CAppLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CAppLayout@@QEAA@XZ @ 0x18041C860 (--0CAppLayout@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18041CDB4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VF.c)
 *     ?InternalRelease@?$ComPtr@VCAppLayout@@@WRL@Microsoft@@IEAAKXZ @ 0x18041DB98 (-InternalRelease@-$ComPtr@VCAppLayout@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18041E560 (-SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall CAppLayout_CreateInstance(
        const struct LAYOUT_ENVIRONMENT_DETAILS *a1,
        const struct _GUID *a2,
        CAppLayout **a3)
{
  CAppLayout *v5; // rax
  int CanCastTo; // ebx
  CAppLayout *v7; // rax
  __int64 v8; // rcx
  CAppLayout *v9; // rcx
  CAppLayout *v11; // [rsp+38h] [rbp+10h] BYREF
  CAppLayout *v12; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<CAppLayout>::InternalRelease(&v11);
  v11 = 0LL;
  v5 = (CAppLayout *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = CAppLayout::CAppLayout(v5);
    v12 = v7;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)v7 + 13);
    v11 = v7;
    Microsoft::WRL::ComPtr<CAppLayout>::InternalRelease(&v12);
    if ( a1 )
      CAppLayout::SetLayoutEnv((CAppLayout *)((char *)v11 + 40), a1);
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_dad20bf4_9130_4ecb_bcce_cab826dcafae, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v9 = v11;
      *a3 = v11;
      (*(void (__fastcall **)(CAppLayout *))(*(_QWORD *)v9 + 8LL))(v9);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IAppLayoutInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutBuilder,IAppLayout,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
                    v11,
                    v8,
                    a3);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(CAppLayout *))(*(_QWORD *)*a3 + 8LL))(*a3);
    }
  }
  else
  {
    CanCastTo = -2147024882;
  }
  Microsoft::WRL::ComPtr<CAppLayout>::InternalRelease(&v11);
  return (unsigned int)CanCastTo;
}
