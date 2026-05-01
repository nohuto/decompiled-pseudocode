/*
 * XREFs of _lambda_3620ca84e17db7610b457f2d5c27bd2d_::operator() @ 0x180313B20
 * Callers:
 *     ??$LambdaCustomPaintProc@V_lambda_3620ca84e17db7610b457f2d5c27bd2d_@@PEAUID2D1DeviceContext@@@@YAXPEAUID2D1DeviceContext@@AEBUtagSIZE@@_J@Z @ 0x180313900 (--$LambdaCustomPaintProc@V_lambda_3620ca84e17db7610b457f2d5c27bd2d_@@PEAUID2D1DeviceContext@@@@Y.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ConvertColor@D2DUtil@@YA?AU_D3DCOLORVALUE@@KM@Z @ 0x180301DEC (-ConvertColor@D2DUtil@@YA-AU_D3DCOLORVALUE@@KM@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180302050 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x18030B570 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ?DrawInsetRect@MultitaskingViewUtils@@YAXPEAUID2D1DeviceContext@@AEAUD2D_RECT_F@@PEAUID2D1SolidColorBrush@@H@Z @ 0x1803105C8 (-DrawInsetRect@MultitaskingViewUtils@@YAXPEAUID2D1DeviceContext@@AEAUD2D_RECT_F@@PEAUID2D1SolidC.c)
 *     ??$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphButtonStateMetrics@@AEAU1@00@Z @ 0x180313A04 (--$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphB.c)
 */

__int64 __fastcall lambda_3620ca84e17db7610b457f2d5c27bd2d_::operator()(
        __int64 *a1,
        MultitaskingViewUtils *a2,
        __int64 a3,
        float a4)
{
  __int64 v6; // rax
  int v7; // eax
  char v8; // al
  __int64 v9; // rcx
  __int64 StateBased; // rax
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  int v13; // eax
  float v14; // xmm0_4
  unsigned int Color; // eax
  float v16; // xmm0_4
  unsigned int v17; // eax
  unsigned int v18; // eax
  struct D2D_RECT_F *v20; // [rsp+58h] [rbp-29h] BYREF
  __int128 v21; // [rsp+60h] [rbp-21h] BYREF
  __int64 v22; // [rsp+70h] [rbp-11h] BYREF
  int v23; // [rsp+78h] [rbp-9h]
  struct _D3DCOLORVALUE v24; // [rsp+80h] [rbp-1h] BYREF
  __int128 v25; // [rsp+90h] [rbp+Fh] BYREF
  __m128i v26; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v26.m128i_i64[0] = 0LL;
  v20 = 0LL;
  *(float *)&v26.m128i_i32[2] = (float)(int)a3;
  *(float *)&v26.m128i_i32[3] = (float)SHIDWORD(a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  v6 = *(_QWORD *)a2;
  v25 = _xmm;
  v7 = (*(__int64 (__fastcall **)(MultitaskingViewUtils *, __int128 *, _QWORD, struct D2D_RECT_F **))(v6 + 64))(
         a2,
         &v25,
         0LL,
         &v20);
  if ( v7 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*a1 + 216) + 40LL))(*a1 + 216);
    v9 = *a1;
    if ( v8 )
    {
      StateBased = CMultitaskingViewButtonElement::_GetStateBasedValue<GlyphButtonStateMetrics>(
                     v9,
                     v9 + 252,
                     v9 + 280,
                     v9 + 308);
      v11 = *(_OWORD *)StateBased;
      v12 = *(_QWORD *)(StateBased + 16);
      v13 = *(_DWORD *)(StateBased + 24);
    }
    else
    {
      v11 = *(_OWORD *)(v9 + 336);
      v13 = *(_DWORD *)(v9 + 360);
      v12 = *(_QWORD *)(v9 + 352);
    }
    v23 = v13;
    v22 = v12;
    v21 = v11;
    v14 = HighContrastAwareOpacity<float>::operator float((float *)&v21 + 2);
    Color = CImmersiveColor::GetColor(DWORD1(v21));
    v25 = *(_OWORD *)&D2DUtil::ConvertColor(&v24, (struct _D3DCOLORVALUE *)Color, v14, a4)->r;
    (*(void (__fastcall **)(struct D2D_RECT_F *, __int128 *))(*(_QWORD *)&v20->left + 64LL))(v20, &v25);
    (*(void (__fastcall **)(MultitaskingViewUtils *, __m128i *, struct D2D_RECT_F *))(*(_QWORD *)a2 + 136LL))(
      a2,
      &v26,
      v20);
    v16 = HighContrastAwareOpacity<float>::operator float((float *)&v22 + 1);
    v17 = CImmersiveColor::GetColor(v22);
    v25 = *(_OWORD *)&D2DUtil::ConvertColor(&v24, (struct _D3DCOLORVALUE *)v17, v16, a4)->r;
    (*(void (__fastcall **)(struct D2D_RECT_F *, __int128 *))(*(_QWORD *)&v20->left + 64LL))(v20, &v25);
    (*(void (__fastcall **)(MultitaskingViewUtils *, __int64, __int64, _QWORD, __m128i *, struct D2D_RECT_F *, _DWORD, _DWORD))(*(_QWORD *)a2 + 216LL))(
      a2,
      *a1 + 232,
      1LL,
      *(_QWORD *)(*a1 + 368),
      &v26,
      v20,
      0,
      0);
    v18 = CImmersiveColor::GetColor(v21);
    if ( *(_DWORD *)(*a1 + 244) && HIBYTE(v18) )
    {
      v25 = *(_OWORD *)&D2DUtil::ConvertColor(&v24, (struct _D3DCOLORVALUE *)v18, (float)HIBYTE(v18) / 255.0, a4)->r;
      (*(void (__fastcall **)(struct D2D_RECT_F *, __int128 *))(*(_QWORD *)&v20->left + 64LL))(v20, &v25);
      MultitaskingViewUtils::DrawInsetRect(a2, &v26, v20, (struct ID2D1SolidColorBrush *)*(unsigned int *)(*a1 + 244));
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      163LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\glyphbuttonelement.cpp",
      (const char *)(unsigned int)v7);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
}
