/*
 * XREFs of ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x18000F4B4
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000EE68 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x18001028C (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x1800102E0 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18008E53C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DB270 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x18019451C (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

void __fastcall CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
        CTreeEffectLayer *this,
        float a2,
        float a3,
        float a4,
        float a5,
        const struct D2D_POINT_2F *a6,
        struct CDrawingContext *a7,
        struct CMILMatrix *a8,
        struct D2D_SIZE_F *a9)
{
  struct D2D_SIZE_F *v10; // rax
  float v11; // xmm1_4
  CDropShadow *v12; // rcx
  const struct CMILMatrix *v13; // rdx
  CMILMatrix *v14; // rcx
  _OWORD v15[4]; // [rsp+28h] [rbp-61h] BYREF
  __int16 v16; // [rsp+68h] [rbp-21h]

  *(_OWORD *)a8 = _xmm;
  *((_WORD *)a8 + 32) = 32085;
  *((_OWORD *)a8 + 1) = _xmm;
  *((_OWORD *)a8 + 2) = _xmm;
  *((_OWORD *)a8 + 3) = _xmm;
  CMILMatrix::Scale(a8, 1.0 / a4, 1.0 / a5, 1.0);
  if ( CLayerVisual::GetAutomaticBoundsExpansion(*((CLayerVisual **)this + 31)) )
  {
    if ( CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 31)) )
    {
      v12 = *(CDropShadow **)(*((_QWORD *)this + 31) + 560LL);
      if ( !v12 || CDropShadow::GetMaskForLayerVisualNoRef(v12) )
      {
        CMILMatrix::Translate(a8, (float)*((int *)this + 4), (float)*((int *)this + 5));
        v13 = (CTreeEffectLayer *)((char *)this + 120);
      }
      else
      {
        v15[0] = _xmm;
        v15[1] = _xmm;
        v15[2] = _xmm;
        v15[3] = _xmm;
        v16 = 32085;
        CMatrixStack::Top((struct CDrawingContext *)((char *)a7 + 480), (struct CMILMatrix *)v15);
        v13 = (const struct CMILMatrix *)v15;
        v14 = a8;
      }
      CMILMatrix::Multiply(v14, v13);
    }
    else
    {
      CMILMatrix::Translate(a8, *((float *)this + 55) - a6->x, *((float *)this + 56) - a6->y);
    }
    v10 = a9;
    a9->width = *((float *)this + 68) * *((float *)this + 57);
    v11 = *((float *)this + 69) * *((float *)this + 58);
  }
  else
  {
    CMILMatrix::Translate(a8, a2, a3);
    v10 = a9;
    a9->width = *((float *)this + 49) - *((float *)this + 47);
    v11 = *((float *)this + 50) - *((float *)this + 48);
  }
  v10->height = v11;
}
