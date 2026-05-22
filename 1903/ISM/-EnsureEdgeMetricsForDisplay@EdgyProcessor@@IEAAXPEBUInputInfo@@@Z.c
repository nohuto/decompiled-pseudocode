/*
 * XREFs of ?EnsureEdgeMetricsForDisplay@EdgyProcessor@@IEAAXPEBUInputInfo@@@Z @ 0x180100B18
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180100C90 (-OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialSt.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?HimetricToPixels@EdgyProcessor@@QEAAXPEAUD2D_VECTOR_2F@@@Z @ 0x180100C14 (-HimetricToPixels@EdgyProcessor@@QEAAXPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?GetHitTestSpanHimetric@EdgeGestureMetrics@@SA?AUD2D_VECTOR_2F@@XZ @ 0x180102C78 (-GetHitTestSpanHimetric@EdgeGestureMetrics@@SA-AUD2D_VECTOR_2F@@XZ.c)
 */

void __fastcall EdgyProcessor::EnsureEdgeMetricsForDisplay(struct D2D_VECTOR_2F *this, const struct InputInfo *a2)
{
  __int64 v3; // rcx
  const char *v4; // r9
  int v5; // eax
  struct D2D_VECTOR_2F v6; // [rsp+20h] [rbp-40h] BYREF
  struct D2D_VECTOR_2F HitTestSpanHimetric; // [rsp+28h] [rbp-38h]
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v10 = 0LL;
  v3 = *((unsigned int *)a2 + 1);
  v11 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !(unsigned int)GetPointerDeviceRects(v3, &v10, &v8) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      30LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
      v4);
    __debugbreak();
  }
  v5 = HIDWORD(v9) - HIDWORD(v8);
  this[7].x = (float)(v9 - v8) / (float)(v11 - v10);
  this[7].y = (float)v5 / (float)(HIDWORD(v11) - HIDWORD(v10));
  LODWORD(v6.x) = *(_QWORD *)&EdgeGestureMetrics::GetHitTestSpanHimetric();
  HitTestSpanHimetric = EdgeGestureMetrics::GetHitTestSpanHimetric();
  v6.y = HitTestSpanHimetric.y;
  EdgyProcessor::HimetricToPixels((EdgyProcessor *)this, &v6);
  this[8] = v6;
}
