/*
 * XREFs of ?_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180222C04
 * Callers:
 *     ?EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18021EF50 (-EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18021F070 (-ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802251F8 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800153D8 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008FEE8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4R.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18018A27C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18018CA84 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18022296C (-_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigu.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18022330C (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_EnsureHolographicViewConfiguration(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rbx
  HolographicPositioner *v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v16[2]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-48h] BYREF
  __m256i v18; // [rsp+48h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  int v20; // [rsp+B0h] [rbp+30h] BYREF
  struct IApplicationViewTitlebarConfiguration *v21; // [rsp+B8h] [rbp+38h] BYREF

  v16[1] = -2LL;
  HolographicPositioner::_FindViewHostItem(this, v16, a2);
  v3 = v16[0];
  if ( v16[0] )
  {
    memset_0(v17, 0, 0x30uLL);
    v18.m256i_i64[0] = 0LL;
    *(__m128i *)&v18.m256i_u64[1] = _mm_load_si128((const __m128i *)&_xmm);
    v18.m256i_i32[6] = 0;
    v20 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 112LL))(v3, &v20);
    v8 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x719,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_13;
    }
    v18.m256i_i32[0] = v20 == 1;
    wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::ReportUsageToService(v6, v5, v7);
    v18.m256i_i32[2] = 1;
    v18.m256i_i32[4] = 1;
    v18.m256i_i32[7] = 1;
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v15);
    v9 = v15;
    if ( !v15 )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x729,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)0x8007000ELL);
LABEL_10:
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v15);
      goto LABEL_13;
    }
    *(_OWORD *)(v15 + 132) = 0LL;
    *(__m256i *)(v9 + 148) = v18;
    *(_BYTE *)(v9 + 128) = 1;
    *(_QWORD *)(v9 + 116) = 4095LL;
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v11 = HolographicPositioner::_CreateTitleBarConfiguration(v10, &v21);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x731,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)(v9 + 192), (__int64)v21);
    *(_DWORD *)(v9 + 124) = 0;
    *(_QWORD *)(v9 + 220) = 0LL;
    *(_QWORD *)(v9 + 228) = 0LL;
    *(_QWORD *)(v9 + 204) = 0LL;
    *(_QWORD *)(v9 + 212) = 0LL;
    *(_BYTE *)(v9 + 236) = 1;
    *(_QWORD *)(v9 + 240) = 0LL;
    *(_DWORD *)(v9 + 80) = 2;
    *(_DWORD *)(v9 + 180) = 8;
    v12 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v9);
    v8 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x741,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v15);
  }
  v8 = 0;
LABEL_13:
  v13 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v8;
}
