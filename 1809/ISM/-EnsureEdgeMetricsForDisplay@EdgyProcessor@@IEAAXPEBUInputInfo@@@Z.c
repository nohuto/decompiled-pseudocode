/*
 * XREFs of ?EnsureEdgeMetricsForDisplay@EdgyProcessor@@IEAAXPEBUInputInfo@@@Z @ 0x1800CA570
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800CA970 (-OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialSt.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall EdgyProcessor::EnsureEdgeMetricsForDisplay(EdgyProcessor *this, const struct InputInfo *a2)
{
  __int64 v3; // rcx
  const char *v4; // r9
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v11 = 0LL;
  v3 = *((unsigned int *)a2 + 1);
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( !(unsigned int)GetPointerDeviceRects(v3, &v11, &v9) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
      v4);
    __debugbreak();
  }
  v5 = (float)(v10 - v9) / (float)(v12 - v11);
  v6 = (float)(HIDWORD(v12) - HIDWORD(v11));
  v7 = (float)(HIDWORD(v10) - HIDWORD(v9));
  *((float *)this + 14) = v5;
  v8 = v7 / v6;
  *((float *)this + 15) = v8;
  if ( v5 == 0.0 || v8 == 0.0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
      v4);
    JUMPOUT(0x1800CA66CLL);
  }
  *((float *)this + 16) = v5 * 550.0;
  *((float *)this + 17) = v8 * 550.0;
}
