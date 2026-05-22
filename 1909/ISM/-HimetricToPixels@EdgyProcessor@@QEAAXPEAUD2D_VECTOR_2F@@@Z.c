/*
 * XREFs of ?HimetricToPixels@EdgyProcessor@@QEAAXPEAUD2D_VECTOR_2F@@@Z @ 0x1801009E4
 * Callers:
 *     ?EnsureEdgeMetricsForDisplay@EdgyProcessor@@IEAAXPEBUInputInfo@@@Z @ 0x1801008E8 (-EnsureEdgeMetricsForDisplay@EdgyProcessor@@IEAAXPEBUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall EdgyProcessor::HimetricToPixels(
        EdgyProcessor *this,
        struct D2D_VECTOR_2F *a2,
        __int64 a3,
        const char *a4)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  FLOAT v6; // xmm0_4
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((float *)this + 14);
  if ( v4 == 0.0 || (v5 = *((float *)this + 15), v5 == 0.0) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      45LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
      a4);
    __debugbreak();
  }
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      46LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
      a4);
    __debugbreak();
  }
  v6 = v5 * a2->y;
  a2->x = v4 * a2->x;
  a2->y = v6;
}
