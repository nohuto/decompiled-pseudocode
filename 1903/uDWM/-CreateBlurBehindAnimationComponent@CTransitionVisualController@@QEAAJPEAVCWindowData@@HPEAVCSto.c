/*
 * XREFs of ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180031F08
 * Callers:
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180031E84 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 * Callees:
 *     ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x180004084 (-SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVi.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000BA08 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180032BD4 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180032C14 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180033284 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?GetAccentBlurBehindBrush@CAccent@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x18008BC2C (-GetAccentBlurBehindBrush@CAccent@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBlurBehindAnimationComponent(
        CTransitionVisualController *this,
        __m128i *a2,
        int a3,
        struct CStoryboard *a4,
        struct CAnimationComponent **a5)
{
  int v5; // eax
  CAnimatedTransitionVisual *v8; // rsi
  __int64 v9; // r13
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  struct CCachedVisualImageProxy *v13; // r14
  struct CImageLegacyMilBrushProxy *v14; // r15
  CAccent *v15; // rcx
  int AccentBlurBehindBrush; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  __m128i v21; // xmm1
  unsigned __int64 v22; // xmm0_8
  int v23; // eax
  int v24; // edx
  void *v25; // [rsp+28h] [rbp-38h]
  CAnimatedTransitionVisual *v26; // [rsp+30h] [rbp-30h] BYREF
  struct CImageLegacyMilBrushProxy *v27; // [rsp+38h] [rbp-28h] BYREF
  struct CCachedVisualImageProxy *v28; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v30[4]; // [rsp+50h] [rbp-10h] BYREF
  int v31; // [rsp+A8h] [rbp+48h]
  __int64 v32; // [rsp+A8h] [rbp+48h]

  v5 = a2[38].m128i_i32[1] & 0xFFF;
  v26 = 0LL;
  v31 = v5;
  v8 = 0LL;
  v9 = 0LL;
  *a5 = 0LL;
  if ( !(unsigned int)GetDesktopID(1LL, &v29) )
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147467259,
      0x339u,
      v25);
    return v11;
  }
  v10 = CTransitionVisualController::_SetDesktopId(this, v29);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v10,
      0x33Du,
      v25);
    return v11;
  }
  v12 = a2[25].m128i_i64[0];
  v13 = 0LL;
  v11 = 0;
  v27 = 0LL;
  v14 = 0LL;
  v28 = 0LL;
  v30[0] = 1065353216;
  v15 = *(CAccent **)(v12 + 264);
  v30[1] = 1065353216;
  v30[2] = 1065353216;
  if ( v15 )
  {
    AccentBlurBehindBrush = CAccent::GetAccentBlurBehindBrush(v15, &v27, &v28, (struct MilPoint3F *)v30);
    v11 = AccentBlurBehindBrush;
    if ( AccentBlurBehindBrush < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AccentBlurBehindBrush, 0x665u, v25);
    v14 = v27;
    v13 = v28;
  }
  if ( (v11 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v11,
      0x33Fu,
      v25);
  }
  else
  {
    if ( !v14 || !v13 )
    {
      *a5 = 0LL;
LABEL_7:
      if ( v9 )
        CBaseObject::Release((CBaseObject *)v9);
      if ( v8 )
        CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v8 + 8));
      goto LABEL_11;
    }
    v18 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            144LL);
    if ( v18 )
      v9 = CAnimationComponent::CAnimationComponent(v18, a2[2].m128i_i64[1], v31, a3, (__int64)a4);
    if ( v9 )
    {
      v19 = CAnimatedTransitionVisual::Create(&v26);
      v11 = v19;
      if ( v19 >= 0 )
      {
        v8 = v26;
        v20 = CAnimatedTransitionVisual::SetClientAreaBrush(v26, v14, v13, (struct MilPoint3F *)v30);
        v11 = v20;
        if ( v20 >= 0 )
        {
          v21 = a2[3];
          *((_QWORD *)v8 + 118) = 0LL;
          v22 = _mm_srli_si128(v21, 8).m128i_u64[0];
          v23 = v22 - v21.m128i_i32[0];
          if ( (int)v22 - v21.m128i_i32[0] < 0 )
            v23 = 0;
          LODWORD(v32) = v23;
          v24 = HIDWORD(v22) - v21.m128i_i32[1];
          if ( HIDWORD(v22) - v21.m128i_i32[1] < 0 )
            v24 = 0;
          HIDWORD(v32) = v24;
          *((_QWORD *)v8 + 119) = v32;
          *((_DWORD *)v8 + 184) = *((_DWORD *)a4 + 18);
          *((_DWORD *)v8 + 185) = a3;
          *((_BYTE *)v8 + 972) = CStoryboard::IsRTL();
          *(_QWORD *)(v9 + 40) = v8;
          _InterlockedIncrement((volatile signed __int32 *)v8 + 4);
          *a5 = (struct CAnimationComponent *)v9;
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
          v8 = v26;
          v14 = v27;
          v13 = v28;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v20,
            0x348u,
            v25);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v19,
          0x346u,
          v25);
        v8 = v26;
      }
      goto LABEL_7;
    }
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x345u,
      v25);
  }
LABEL_11:
  if ( v14 )
    CBaseObject::Release(v14);
  if ( v13 )
    CBaseObject::Release(v13);
  return v11;
}
