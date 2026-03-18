/*
 * XREFs of ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180008830
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x1800088FC (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180071500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A0A0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C24A4 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall CDropShadow::DrawAsDrawList(float *a1, CDrawingContext *a2, int a3, int a4, __int64 a5, void *a6)
{
  float v6; // xmm3_4
  int v7; // esi
  float v8; // xmm2_4
  float v10; // xmm1_4
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // ecx
  _BYTE v19[64]; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+70h] [rbp-18h]

  v6 = a1[28];
  v7 = (int)a1;
  v8 = a1[27];
  v10 = a1[26];
  v20 = 0;
  CMILMatrix::SetTranslation((CMILMatrix *)v19, v10, v8, v6);
  v13 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v19, 1, 1);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x18Bu, 0LL);
  }
  else
  {
    v16 = CSpriteVisualContent::DrawAsDrawList(v7, (_DWORD)a2, a3, a4, a5, (__int64)a6);
    v15 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x18Eu, 0LL);
    CDrawingContext::PopTransformInternal(a2, 1);
  }
  return v15;
}
