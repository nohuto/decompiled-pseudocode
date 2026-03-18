/*
 * XREFs of ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180010364
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18000F0B0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18000F5F0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A4868 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 */

__int64 __fastcall CLayerVisual::GetShadowBounds(CVisual *a1, struct D2D_RECT_F *a2)
{
  struct D2D_RECT_F v2; // xmm0
  bool v5; // zf
  int MaskBounds; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  float v11; // xmm2_4
  float v12[4]; // [rsp+30h] [rbp-30h]
  struct D2D_RECT_F v13; // [rsp+40h] [rbp-20h] BYREF

  v2 = (struct D2D_RECT_F)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *a2 = (struct D2D_RECT_F)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v5 = *((_QWORD *)a1 + 70) == 0LL;
  v13 = v2;
  if ( v5 )
    return 0LL;
  MaskBounds = CLayerVisual::GetMaskBounds(a1);
  v9 = MaskBounds;
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, MaskBounds, 0x1EBu);
  }
  else
  {
    v10 = *((_QWORD *)a1 + 70);
    v11 = *(float *)(v10 + 88);
    *(_QWORD *)v12 = *(_QWORD *)(v10 + 96);
    if ( !IsEmpty(&v13) )
    {
      v13.left = (float)(v13.left - v11) + v12[0];
      v13.top = (float)(v13.top - v11) + v12[1];
      v13.right = (float)(v13.right + v11) + v12[0];
      v13.bottom = (float)(v13.bottom + v11) + v12[1];
      *a2 = v13;
    }
  }
  return v9;
}
