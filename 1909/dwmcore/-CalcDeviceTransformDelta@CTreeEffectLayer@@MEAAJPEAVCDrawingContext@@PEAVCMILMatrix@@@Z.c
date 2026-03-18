/*
 * XREFs of ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18000D050
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x18000E0C8 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18000E0EC (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000E1A0 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180028EDC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180029740 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180036740 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180066F00 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007DA1C (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800EB6D4 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18016AE4C (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 */

__int64 __fastcall CTreeEffectLayer::CalcDeviceTransformDelta(
        CTreeEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rcx
  int ShadowBounds; // eax
  unsigned int v9; // ecx
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  unsigned int v13; // eax
  float v14; // xmm0_4
  __m128i v15; // xmm2
  int v16; // eax
  float v17; // xmm0_4
  __int128 v18; // xmm1
  int v19; // eax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  bool FlatteningToLocalSpace; // al
  char *v24; // r8
  unsigned int v25; // eax
  __m128i v26; // xmm2
  int v27; // eax
  int v28; // eax
  unsigned int v29; // ecx
  FLOAT v30; // [rsp+30h] [rbp-59h] BYREF
  float v31[3]; // [rsp+34h] [rbp-55h] BYREF
  __int128 v32; // [rsp+40h] [rbp-49h] BYREF
  __int128 v33; // [rsp+50h] [rbp-39h]
  __int128 v34; // [rsp+60h] [rbp-29h]
  __int128 v35; // [rsp+70h] [rbp-19h]
  int v36; // [rsp+80h] [rbp-9h]
  struct D2D_RECT_F v37; // [rsp+90h] [rbp+7h] BYREF

  v6 = 0;
  CDrawingContext::GetWorldTransform(a2, (CTreeEffectLayer *)((char *)this + 120));
  v7 = *((_QWORD *)this + 31);
  if ( v7 )
  {
    ShadowBounds = CLayerVisual::GetShadowBounds(v7, &v37);
    v6 = ShadowBounds;
    if ( ShadowBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, ShadowBounds, 0x299u, 0LL);
      return v6;
    }
    if ( IsEmpty(&v37) )
    {
      v37 = (struct D2D_RECT_F)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      *(_OWORD *)((char *)this + 204) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    else
    {
      FlatteningToLocalSpace = CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 31));
      v24 = (char *)this + 204;
      if ( FlatteningToLocalSpace )
        CDrawingContext::CalcLocalSpaceClippedBounds(a2, &v37, v24);
      else
        CDrawingContext::CalcWorldSpaceClippedBounds(a2, &v37, v24);
    }
  }
  if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(*((CLayerVisual **)this + 31)) )
  {
    v25 = -*((_DWORD *)this + 5);
    v34 = _xmm;
    v33 = _xmm;
    v32 = _xmm;
    v35 = _xmm;
    v26 = _mm_cvtsi32_si128(v25);
    v27 = -*((_DWORD *)this + 4);
    LOWORD(v36) = 32085;
    CMILMatrix::Translate((CMILMatrix *)&v32, (float)v27, _mm_cvtepi32_ps(v26).m128_f32[0]);
    CMILMatrix::Scale((CMILMatrix *)&v32, *((float *)this + 68), *((float *)this + 69), 1.0);
    v28 = CDrawingContext::PushTransformInternal(
            a2,
            *((const struct CVisual **)this + 31),
            (const struct CMILMatrix *)&v32,
            0,
            1);
    v6 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x2BBu, 0LL);
    }
    else
    {
      CVisual::GetEffectiveSize(*((CVisual **)this + 31), &v30, v31);
      v37.left = 0.0;
      v37.top = 0.0;
      v37.right = v30;
      v37.bottom = v31[0];
      CMILMatrix::Transform2DBoundsHelper<1>(&v32, &v37, (char *)this + 188);
      *(_OWORD *)a3 = _xmm;
      *((_WORD *)a3 + 32) = 32085;
      *((_OWORD *)a3 + 1) = _xmm;
      *((_OWORD *)a3 + 2) = _xmm;
      *((_OWORD *)a3 + 3) = _xmm;
    }
  }
  else
  {
    CVisual::GetEffectiveSize(*((CVisual **)this + 31), &v30, v31);
    v37.left = 0.0;
    v37.top = 0.0;
    v37.right = v30;
    v37.bottom = v31[0];
    CMILMatrix::Transform2DBoundsHelper<1>((char *)this + 120, &v37, (char *)this + 188);
    v10 = *((float *)this + 49) - *((float *)this + 47);
    v11 = *((float *)this + 48);
    v36 = 0;
    v12 = v10 * *((float *)this + 68);
    v13 = -*((_DWORD *)this + 5);
    v34 = _xmm;
    v35 = _xmm;
    v14 = v12 + *((float *)this + 47);
    LOWORD(v36) = 32085;
    v15 = _mm_cvtsi32_si128(v13);
    v16 = -*((_DWORD *)this + 4);
    *((float *)this + 49) = v14;
    v17 = (float)((float)(*((float *)this + 50) - v11) * *((float *)this + 69)) + v11;
    v32 = _xmm;
    *((float *)this + 50) = v17;
    v33 = _xmm;
    CMILMatrix::Translate((CMILMatrix *)&v32, (float)v16, _mm_cvtepi32_ps(v15).m128_f32[0]);
    CMILMatrix::Scale((CMILMatrix *)&v32, *((float *)this + 68), *((float *)this + 69), 1.0);
    v18 = v33;
    v19 = v36;
    *(_OWORD *)a3 = v32;
    v20 = v34;
    *((_OWORD *)a3 + 1) = v18;
    v21 = v35;
    *((_OWORD *)a3 + 2) = v20;
    *((_OWORD *)a3 + 3) = v21;
    *((_DWORD *)a3 + 16) = v19;
  }
  return v6;
}
