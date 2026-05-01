/*
 * XREFs of ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800318E0
 * Callers:
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180012194 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180030BB0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x180031590 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z @ 0x1801495F0 (-SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008D6CC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4R.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  __m128i v6; // xmm2
  __m128i v7; // xmm1
  int v9; // [rsp+20h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 120LL))(*((_QWORD *)this + 19));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BF4,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v4,
      v9);
    return v5;
  }
  else
  {
    wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::ReportUsageToService();
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
