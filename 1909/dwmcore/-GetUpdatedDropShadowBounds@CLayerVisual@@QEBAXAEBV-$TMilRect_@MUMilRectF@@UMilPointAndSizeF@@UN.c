/*
 * XREFs of ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801C7728
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000CE08 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801C8AF4 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

void __fastcall CLayerVisual::GetUpdatedDropShadowBounds(__int64 a1, struct D2D_RECT_F *a2, float *a3)
{
  CDropShadow *v6; // rcx
  __int64 v7; // rax
  float v8; // xmm2_4
  float v9[4]; // [rsp+20h] [rbp-20h]
  struct D2D_RECT_F v10; // [rsp+30h] [rbp-10h] BYREF

  *(struct D2D_RECT_F *)a3 = *a2;
  v6 = *(CDropShadow **)(a1 + 560);
  if ( v6 && !CDropShadow::GetMaskForLayerVisualNoRef(v6) )
  {
    v7 = *(_QWORD *)(a1 + 560);
    v10 = *a2;
    v8 = *(float *)(v7 + 96);
    *(_QWORD *)v9 = *(_QWORD *)(v7 + 104);
    if ( !IsEmpty(&v10) )
    {
      v10.left = (float)(v10.left - v8) + v9[0];
      v10.top = (float)(v10.top - v8) + v9[1];
      v10.right = (float)(v10.right + v8) + v9[0];
      v10.bottom = (float)(v10.bottom + v8) + v9[1];
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, &v10.left);
    }
  }
}
