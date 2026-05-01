/*
 * XREFs of ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18002C1C0
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x18002B490 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x18002BE50 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18004AC58 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z @ 0x18011FFA0 (-SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18011B8BC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  __m128i v6; // xmm2
  __m128i v7; // xmm1
  int v9; // [rsp+20h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int16 v11; // [rsp+A4h] [rbp+Ch]
  int v12; // [rsp+B0h] [rbp+18h] BYREF
  __int16 v13; // [rsp+B4h] [rbp+1Ch]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 120LL))(*((_QWORD *)this + 19));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BC4,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v4,
      v9);
    return v5;
  }
  else
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetCachedFeatureEnabledState();
    LOBYTE(v11) = 3;
    v12 = 0;
    v13 = v11;
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data,
      9304764LL,
      &v12,
      1LL,
      3);
    v6 = *(__m128i *)((char *)this + 92);
    v7 = *(__m128i *)((char *)this + 108);
    *((_DWORD *)a2 + 4) = _mm_cvtsi128_si32(v6);
    *((_DWORD *)a2 + 6) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
    *((_DWORD *)a2 + 8) = _mm_cvtsi128_si32(v7);
    if ( *((_DWORD *)this + 8) != -1 && *((_DWORD *)this + 19) != -1 )
      *((_DWORD *)a2 + 7) = _mm_srli_si128(*(__m128i *)(this + 48LL), 8).m128i_i32[1];
    return 0LL;
  }
}
