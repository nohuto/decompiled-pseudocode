/*
 * XREFs of ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801C8B58
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180011DF8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180012590 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180070580 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801C8884 (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0PEAV2@1@Z @ 0x1801C8A50 (-CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV-$TMilRect_@MU.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C8DD0 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 */

void __fastcall CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
        CVisual *a1,
        __int64 a2,
        struct D2D_RECT_F *a3,
        struct D2D_RECT_F *a4,
        struct D2D_RECT_F *a5)
{
  float v9; // xmm6_4
  signed int MaskBounds; // eax
  __int64 v11; // rcx
  int v12; // ebx
  float left; // xmm1_4
  float top; // xmm2_4
  float right; // xmm3_4
  float v16; // xmm4_4
  struct D2D_RECT_F v17; // xmm7
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm10_4
  struct D2D_RECT_F v21; // [rsp+38h] [rbp-A1h] BYREF
  struct D2D_RECT_F v22; // [rsp+48h] [rbp-91h] BYREF
  struct D2D_RECT_F v23; // [rsp+58h] [rbp-81h] BYREF
  float v24[4]; // [rsp+68h] [rbp-71h] BYREF
  struct D2D_RECT_F v25; // [rsp+78h] [rbp-61h] BYREF
  int v26[4]; // [rsp+88h] [rbp-51h] BYREF

  v9 = *(float *)(*((_QWORD *)a1 + 70) + 96LL);
  MaskBounds = CLayerVisual::GetMaskBounds(a1);
  v12 = MaskBounds;
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, MaskBounds, 0x20Du, 0LL);
  }
  else
  {
    left = v22.left;
    top = v22.top;
    right = v22.right;
    v21 = v22;
    if ( !IsEmpty(&v21) )
    {
      v21.left = left - v9;
      v21.top = top - v9;
      v21.right = right + v9;
      v21.bottom = v16 + v9;
    }
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v22.left, (float *)v26);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v21.left, v24);
    v23 = *a3;
    CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(
      (__int64)a1,
      a2,
      &v23.left,
      v24,
      &v21.left,
      (__int64)&v25);
    v23 = v21;
    CLayerVisual::CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds(
      (__int64)a1,
      &v23,
      (__int64)v26,
      (__int64)&v21,
      &v25);
    v17 = v21;
    LODWORD(v18) = _mm_shuffle_ps((__m128)v21, (__m128)v21, 85).m128_u32[0];
    LODWORD(v19) = _mm_shuffle_ps((__m128)v21, (__m128)v21, 170).m128_u32[0];
    LODWORD(v20) = _mm_shuffle_ps((__m128)v21, (__m128)v21, 255).m128_u32[0];
    v21.top = v18;
    v21.right = v19;
    v21.bottom = v20;
    *a4 = v17;
    if ( !IsEmpty(&v21) )
    {
      v17.left = v17.left - v9;
      v18 = v18 - v9;
      v19 = v19 + v9;
      v20 = v20 + v9;
    }
    *(_QWORD *)&v21.left = *(_QWORD *)(*((_QWORD *)a1 + 70) + 104LL);
    v22.left = v17.left + v21.left;
    v22.top = v18 + v21.top;
    v22.right = v19 + v21.left;
    v22.bottom = v20 + v21.top;
    *a5 = v22;
  }
  if ( v12 < 0 )
  {
    *a4 = *a3;
    *a5 = *a3;
  }
}
