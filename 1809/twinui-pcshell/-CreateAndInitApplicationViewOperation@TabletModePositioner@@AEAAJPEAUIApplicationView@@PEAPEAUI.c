/*
 * XREFs of ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180345F50
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180344260 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x180344F50 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180345220 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180348510 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180066A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18013F77C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180140A74 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180140A74.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803462F0 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 */

__int64 __fastcall TabletModePositioner::CreateAndInitApplicationViewOperation(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewOperation **a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  int CanCastTo; // ebx
  __m128i si128; // xmm0
  __int128 v10; // xmm1
  struct IApplicationView *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v14; // r9
  _DWORD *v15; // rdx
  _BYTE v17[16]; // [rsp+20h] [rbp-30h] BYREF
  __m256i v18; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  TabletModePositioner *v20; // [rsp+60h] [rbp+10h] BYREF
  struct IApplicationViewTitlebarConfiguration *v21; // [rsp+68h] [rbp+18h] BYREF

  v21 = a2;
  v20 = this;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v20);
  v7 = (__int64)v20;
  if ( !v20 )
  {
    CanCastTo = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB79,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_14;
  }
  *((_DWORD *)v20 + 29) = 255;
  *(_DWORD *)(v7 + 120) = 23;
  *(_DWORD *)(v7 + 176) = 1;
  *(_DWORD *)(v7 + 200) = 0;
  *(_QWORD *)(v7 + 220) = 0LL;
  *(_QWORD *)(v7 + 228) = 0LL;
  *(_QWORD *)(v7 + 204) = 0LL;
  *(_QWORD *)(v7 + 212) = 0LL;
  *(_BYTE *)(v7 + 236) = 1;
  *(_QWORD *)(v7 + 240) = 0LL;
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService(v5, v4, v6);
  memset_0(v17, 0, 0x30uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v18.m256i_i64[0] = 0LL;
  v18.m256i_i32[6] = 0;
  v21 = 0LL;
  *(_OWORD *)(v7 + 128) = 0LL;
  *(_BYTE *)(v7 + 124) = 1;
  *(__m128i *)&v18.m256i_u64[1] = si128;
  v10 = *(_OWORD *)&v18.m256i_u64[2];
  *(_OWORD *)(v7 + 144) = *(_OWORD *)v18.m256i_i8;
  *(_OWORD *)(v7 + 160) = v10;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  TabletModePositioner::CreateTitlebarConfiguration(v11, &v21);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v7 + 192), (__int64)v21);
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_cc6192be_2002_4cd1_a603_e3b6795b4000, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v12, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a3 = (struct IApplicationViewOperation *)v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    CanCastTo = 0;
    goto LABEL_10;
  }
  if ( InlineIsEqualGUID(v13, v14) )
  {
    *a3 = (struct IApplicationViewOperation *)v7;
    CanCastTo = 0;
LABEL_8:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    goto LABEL_10;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::CanCastTo(
                v7 + 8,
                v15);
  if ( CanCastTo >= 0 )
    goto LABEL_8;
LABEL_10:
  if ( CanCastTo >= 0 )
    CanCastTo = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB98,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)CanCastTo);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
LABEL_14:
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v20);
  return (unsigned int)CanCastTo;
}
