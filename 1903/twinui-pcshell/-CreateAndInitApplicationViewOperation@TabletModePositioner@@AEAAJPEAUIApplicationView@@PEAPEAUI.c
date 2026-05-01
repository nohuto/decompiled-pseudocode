/*
 * XREFs of ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803AB820
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803A9D10 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x1803AA7D8 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803AAAB0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803AE020 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B228 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180056444 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18016AEDC (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18016C3FC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18016C3FC.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D6F4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803ABC10 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 */

__int64 __fastcall TabletModePositioner::CreateAndInitApplicationViewOperation(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewOperation **a3)
{
  volatile signed __int64 *v5; // rbx
  int CanCastTo; // ebx
  __int64 v7; // rcx
  struct IApplicationViewTitlebarConfiguration *v8; // rcx
  __m128i si128; // xmm0
  struct IApplicationView *v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // r9
  _DWORD *v14; // rdx
  __int128 v16; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IApplicationViewTitlebarConfiguration *v18; // [rsp+78h] [rbp+28h] BYREF
  volatile signed __int64 *v19; // [rsp+80h] [rbp+30h] BYREF

  v18 = a2;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v19);
  v5 = v19;
  if ( !v19 )
  {
    CanCastTo = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBAD,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_17;
  }
  *((_DWORD *)v19 + 29) = 4095;
  *((_DWORD *)v5 + 30) = 23;
  *((_DWORD *)v5 + 45) = 1;
  *((_DWORD *)v5 + 50) = 0;
  *(volatile signed __int64 *)((char *)v5 + 220) = 0LL;
  *(volatile signed __int64 *)((char *)v5 + 228) = 0LL;
  *(volatile signed __int64 *)((char *)v5 + 204) = 0LL;
  *(volatile signed __int64 *)((char *)v5 + 212) = 0LL;
  *((_BYTE *)v5 + 236) = 1;
  *((_QWORD *)v5 + 30) = 0LL;
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
  v7 = *((_QWORD *)this + 56);
  if ( v7 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64, __int64, struct IApplicationViewTitlebarConfiguration **))(*(_QWORD *)v7 + 32LL))(
      v7,
      2LL,
      &v18);
    Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)v5 + 23, (__int64)v18);
    v8 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_QWORD *)&v16 = 0LL;
  *(_OWORD *)((char *)v5 + 132) = 0LL;
  *((_QWORD *)&v16 + 1) = si128.m128i_i64[0];
  *((_BYTE *)v5 + 128) = 1;
  v18 = 0LL;
  *(_OWORD *)((char *)v5 + 148) = v16;
  *(_OWORD *)((char *)v5 + 164) = si128.m128i_u64[1];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  TabletModePositioner::CreateTitlebarConfiguration(v10, &v18);
  Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)v5 + 24, (__int64)v18);
  *((_DWORD *)v5 + 31) = 1;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_cc6192be_2002_4cd1_a603_e3b6795b4000, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a3 = (struct IApplicationViewOperation *)v5;
    (*(void (__fastcall **)(volatile signed __int64 *))(*v5 + 8))(v5);
    CanCastTo = 0;
    goto LABEL_13;
  }
  if ( InlineIsEqualGUID(v12, v13) )
  {
    *a3 = (struct IApplicationViewOperation *)v5;
    CanCastTo = 0;
LABEL_11:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    goto LABEL_13;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::CanCastTo(
                (__int64)(v5 + 1),
                v14);
  if ( CanCastTo >= 0 )
    goto LABEL_11;
LABEL_13:
  if ( CanCastTo >= 0 )
    CanCastTo = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBCF,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)CanCastTo);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
LABEL_17:
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v19);
  return (unsigned int)CanCastTo;
}
