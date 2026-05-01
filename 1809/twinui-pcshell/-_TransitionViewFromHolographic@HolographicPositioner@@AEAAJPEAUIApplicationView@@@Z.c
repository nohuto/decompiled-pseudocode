/*
 * XREFs of ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B8718
 * Callers:
 *     ?ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1801B25C0 (-ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18011F42C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4R.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18013F77C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801B69EC (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     _LogEventWithViewHostItemData @ 0x1801B791C (_LogEventWithViewHostItemData.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1801B85F4 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::_TransitionViewFromHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __m256i v15; // [rsp+38h] [rbp-38h] OVERLAPPED
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v17; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+38h] BYREF

  HolographicPositioner::_FindViewHostItem((__int64)this, &v18);
  if ( !v18 || !*((_QWORD *)this + 28) )
    goto LABEL_11;
  LogEventWithViewHostItemData(
    v18,
    (void (__fastcall *)(PCWSTR *, char *))HolographicPositionerTelemetry::TransitionViewFromHolographic<unsigned short const *,unsigned int &>);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 28) + 56LL))(*((_QWORD *)this + 28), v18);
  v8 = v4;
  if ( v4 < 0 )
  {
    v9 = 1615LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_15;
  }
  wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::ReportUsageToService(v6, v5, v7);
  v15.m256i_i64[0] = 0LL;
  *(__m128i *)((char *)&v15.m256i_u64[1] + 4) = _mm_load_si128((const __m128i *)&_xmm);
  v15.m256i_i32[2] = 0;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v17);
  v10 = v17;
  if ( v17 )
  {
    *(_OWORD *)(v17 + 128) = 0LL;
    *(__m256i *)(v10 + 144) = v15;
    *(_BYTE *)(v10 + 124) = 1;
    v13 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 320LL))(a2);
    v8 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v12 = 1627LL;
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v17);
LABEL_11:
    v4 = HolographicPositioner::_SendViewTransitionNotification((__int64)this, (__int64)a2, 1);
    v8 = v4;
    if ( v4 >= 0 )
    {
      v8 = 0;
      goto LABEL_15;
    }
    v9 = 1631LL;
    goto LABEL_13;
  }
  v8 = -2147024882;
  v11 = 2147942414LL;
  v12 = 1625LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)v11);
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v17);
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return v8;
}
