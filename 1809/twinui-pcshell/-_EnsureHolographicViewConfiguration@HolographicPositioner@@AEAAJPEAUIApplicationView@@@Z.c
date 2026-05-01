/*
 * XREFs of ?_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B6634
 * Callers:
 *     ?EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1801B2AE0 (-EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1801B2BF0 (-ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B88B4 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18011F42C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4R.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18013F77C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1801B630C (-_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigu.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801B69EC (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
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
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15[2]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v16[16]; // [rsp+38h] [rbp-48h] BYREF
  __m256i v17; // [rsp+48h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  int v19; // [rsp+A0h] [rbp+20h] BYREF
  struct IApplicationViewTitlebarConfiguration *v20; // [rsp+A8h] [rbp+28h] BYREF

  v15[1] = -2LL;
  HolographicPositioner::_FindViewHostItem(this, v15, a2);
  v3 = v15[0];
  if ( !v15[0] )
    goto LABEL_12;
  memset_0(v16, 0, 0x30uLL);
  v17.m256i_i64[0] = 0LL;
  *(__m128i *)&v17.m256i_u64[1] = _mm_load_si128((const __m128i *)&_xmm);
  v17.m256i_i32[6] = 0;
  v19 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 112LL))(v3, &v19);
  v8 = v4;
  if ( v4 >= 0 )
  {
    v17.m256i_i32[0] = v19 == 1;
    wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::ReportUsageToService(v6, v5, v7);
    v17.m256i_i32[2] = 1;
    v17.m256i_i32[4] = 1;
    v17.m256i_i32[7] = 1;
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v14);
    v9 = v14;
    if ( !v14 )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x682,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)0x8007000ELL);
LABEL_10:
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v14);
      goto LABEL_13;
    }
    *(_OWORD *)(v14 + 128) = 0LL;
    *(__m256i *)(v9 + 144) = v17;
    *(_BYTE *)(v9 + 124) = 1;
    *(_DWORD *)(v9 + 116) = 255;
    *(_DWORD *)(v9 + 120) = 0;
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v11 = HolographicPositioner::_CreateTitleBarConfiguration(v10, &v20);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1674LL,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v9 + 192), (__int64)v20);
    *(_QWORD *)(v9 + 220) = 0LL;
    *(_QWORD *)(v9 + 228) = 0LL;
    *(_QWORD *)(v9 + 204) = 0LL;
    *(_QWORD *)(v9 + 212) = 0LL;
    *(_BYTE *)(v9 + 236) = 1;
    *(_QWORD *)(v9 + 240) = 0LL;
    *(_DWORD *)(v9 + 80) = 2;
    *(_DWORD *)(v9 + 176) = 8;
    v12 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v9);
    v8 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x699,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v14);
LABEL_12:
    v8 = 0;
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x672,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  return v8;
}
