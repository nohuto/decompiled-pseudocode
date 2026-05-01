/*
 * XREFs of ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x180224FF0
 * Callers:
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180222768 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180223818 (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008FEE8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4R.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18018A27C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18018CA84 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _LogEventWithViewHostItemData__ @ 0x18021CBE8 (_LogEventWithViewHostItemData__.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18021DC58 (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18022330C (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x180224EC0 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_TransitionViewFromHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Internal::Shell::Holographic::IViewHostItem *a3)
{
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v3; // rdi
  char *ViewHostItem; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  __m256i v19; // [rsp+38h] [rbp-38h] OVERLAPPED
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v21; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+38h] BYREF

  v3 = a3;
  v21 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  if ( v3 )
    goto LABEL_23;
  ViewHostItem = (char *)HolographicPositioner::_FindViewHostItem((__int64)this, &v22);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=((__int64 *)&v21, ViewHostItem);
  v7 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v3 = v21;
  if ( v21 )
  {
LABEL_23:
    if ( *((_QWORD *)this + 29) )
    {
      LogEventWithViewHostItemData__(
        (__int64)v3,
        (void (__fastcall *)(PCWSTR *, char *))HolographicPositionerTelemetry::TransitionViewFromHolographic<unsigned short const *,unsigned int &>);
      v8 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Holographic::IViewHostItem *))(**((_QWORD **)this + 29) + 56LL))(
             *((_QWORD *)this + 29),
             v3);
      v12 = v8;
      if ( v8 < 0 )
      {
        v13 = 1782LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v8);
        goto LABEL_18;
      }
      wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::ReportUsageToService(v10, v9, v11);
      v19.m256i_i64[0] = 0LL;
      *(__m128i *)((char *)&v19.m256i_u64[1] + 4) = _mm_load_si128((const __m128i *)&_xmm);
      v19.m256i_i32[2] = 0;
      Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v22);
      v14 = v22;
      if ( !v22 )
      {
        v12 = -2147024882;
        v15 = 2147942414LL;
        v16 = 1792LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)v15);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v22);
        goto LABEL_18;
      }
      *(_OWORD *)(v22 + 132) = 0LL;
      *(__m256i *)(v14 + 148) = v19;
      *(_BYTE *)(v14 + 128) = 1;
      v17 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 320LL))(a2);
      v12 = v17;
      if ( v17 < 0 )
      {
        v15 = (unsigned int)v17;
        v16 = 1794LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v22);
    }
    v8 = HolographicPositioner::_SendViewTransitionNotification((__int64)this, (__int64)a2, 1);
    v12 = v8;
    if ( v8 < 0 )
    {
      v13 = 1798LL;
      goto LABEL_16;
    }
  }
  v12 = 0;
LABEL_18:
  if ( v3 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IViewHostItem *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v12;
}
