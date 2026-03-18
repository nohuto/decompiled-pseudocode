/*
 * XREFs of ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x180151444
 * Callers:
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180151148 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x1801513A8 (-DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingCon.c)
 *     ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180164080 (-DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::DisplayText(
        CDisplayDebugFrameCounter *this,
        unsigned int a2,
        unsigned int a3,
        struct CDrawingContext *a4,
        __int64 a5,
        int a6,
        float *a7)
{
  struct _D3DCOLORVALUE v11; // xmm10
  float v12; // xmm3_4
  float v13; // xmm9_4
  struct D2D_RECT_F v14; // xmm1
  bool v15; // zf
  int Factory; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  _QWORD *v19; // r15
  int v20; // eax
  __int64 v21; // rcx
  D3DVALUE g; // xmm7_4
  D3DVALUE a; // xmm8_4
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  struct _D3DCOLORVALUE v29; // [rsp+58h] [rbp-A1h] BYREF
  struct D2D_RECT_F v30; // [rsp+68h] [rbp-91h] BYREF
  struct D2D_RECT_F v31; // [rsp+78h] [rbp-81h] BYREF
  struct D2D_RECT_F v32; // [rsp+88h] [rbp-71h] BYREF

  *(struct _D3DCOLORVALUE *)&v11.r = (struct _D3DCOLORVALUE)_xmm;
  *(struct _D3DCOLORVALUE *)&v29.r = (struct _D3DCOLORVALUE)_xmm;
  if ( a6 == 1 )
    v12 = (float)((float)(*(float *)(a5 + 12) * 0.25) * 3.0) - (float)(120.0 * 0.5);
  else
    v12 = *(float *)(a5 + 8) - 120.0;
  v30.top = 0.0;
  v13 = v29.r + v12;
  v30.bottom = 24.0;
  v30.left = v12 + 20.0;
  v30.right = (float)(v12 + 20.0) + 40.0;
  v14 = v30;
  v30.top = 0.0;
  v15 = *((_BYTE *)this + 16) == 0;
  v30.left = (float)(v12 + 40.0) + 40.0;
  v30.bottom = 24.0;
  v31 = v14;
  v30.right = v30.left + 40.0;
  v32 = v30;
  if ( v15 )
  {
    Factory = DWriteCreateFactory(0LL, &GUID_b859ee5a_d838_4b5b_a2e8_1adc7d93db48, (char *)this + 24);
    v18 = Factory;
    if ( Factory < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, Factory, 0x9Cu);
      return v18;
    }
    v19 = (_QWORD *)((char *)this + 32);
    v20 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64, _DWORD, int, _DWORD, wchar_t *, char *))(**((_QWORD **)this + 3) + 120LL))(
            *((_QWORD *)this + 3),
            L"Lucida Console",
            0LL,
            400LL,
            0,
            5,
            LODWORD(FLOAT_20_0),
            word_180276388,
            (char *)this + 32);
    v18 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xABu);
      return v18;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v19 + 24LL))(*v19, 2LL);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v19 + 32LL))(*v19, 2LL);
    *((_BYTE *)this + 16) = 1;
  }
  g = v29.g;
  a = v29.a;
  v30.top = v29.g;
  v30.bottom = v29.a;
  *(struct _D3DCOLORVALUE *)&v29.r = (struct _D3DCOLORVALUE)_xmm;
  v30.left = v13;
  v30.right = v12 + 120.0;
  CDrawingContext::DrawSolidRectangleInternal(a4, &v30, &v29);
  if ( a2 <= 0x1E )
    *(struct _D3DCOLORVALUE *)&v11.r = (struct _D3DCOLORVALUE)_xmm;
  *(struct _D3DCOLORVALUE *)&v29.r = *(struct _D3DCOLORVALUE *)&v11.r;
  v24 = CDisplayDebugFrameCounter::DisplayNumber((struct IDWriteTextFormat **)this, a2, &v29, &v31, a4);
  v18 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xC3u);
  }
  else
  {
    *(struct _D3DCOLORVALUE *)&v29.r = (struct _D3DCOLORVALUE)_xmm;
    v26 = CDisplayDebugFrameCounter::DisplayNumber((struct IDWriteTextFormat **)this, a3, &v29, &v32, a4);
    v18 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xC6u);
    }
    else
    {
      *a7 = v13;
      a7[1] = g;
      a7[2] = v12 + 120.0;
      a7[3] = a;
    }
  }
  return v18;
}
