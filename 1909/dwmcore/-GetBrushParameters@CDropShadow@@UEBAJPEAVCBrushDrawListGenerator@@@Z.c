/*
 * XREFs of ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18000E310
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18000E448 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x1800100F0 (-GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003C398 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18003D0E0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18003E798 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDropShadow::GetBrushParameters(CDropShadow *this, struct CBrushDrawListGenerator *a2)
{
  struct CDrawingContext *v4; // rsi
  struct CVisual *CurrentVisual; // rax
  float *EffectiveShadowIntermediates; // rax
  float v7; // xmm2_4
  float v8; // xmm2_4
  int v9; // xmm1_4
  __int128 v10; // xmm0
  float v11; // xmm3_4
  unsigned int v12; // ecx
  int ShadowOpacityBrush; // edi
  struct CDrawListBrush *v14; // rdx
  struct CDrawListBrush *v16[2]; // [rsp+30h] [rbp-20h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  struct CDrawListBrush *v18; // [rsp+60h] [rbp+10h] BYREF

  CBrushDrawListGenerator::Reset(a2);
  v4 = *(struct CDrawingContext **)a2;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(*(_QWORD *)a2 + 8LL));
  EffectiveShadowIntermediates = (float *)CDropShadow::GetEffectiveShadowIntermediates(this, CurrentVisual);
  v7 = EffectiveShadowIntermediates[12] * *((float *)this + 25);
  if ( v7 >= 1.0 )
  {
    v10 = *((_OWORD *)this + 5);
  }
  else
  {
    v8 = v7 * *((float *)this + 23);
    v9 = *((_DWORD *)this + 21);
    LODWORD(v16[0]) = *((_DWORD *)this + 20);
    LODWORD(v16[1]) = *((_DWORD *)this + 22);
    *((float *)&v16[1] + 1) = v8;
    HIDWORD(v16[0]) = v9;
    v10 = *(_OWORD *)v16;
  }
  *(_OWORD *)((char *)a2 + 20) = v10;
  *((_BYTE *)a2 + 76) = 0;
  v11 = *((float *)this + 24);
  v18 = 0LL;
  v16[1] = 0LL;
  v17 = 1;
  ShadowOpacityBrush = CDropShadow::ShadowIntermediates::CreateShadowOpacityBrush(
                         (CDropShadow::ShadowIntermediates *)EffectiveShadowIntermediates,
                         v4,
                         (const struct D2D_SIZE_F *)a2 + 1,
                         v11,
                         &v16[1]);
  if ( v17 )
  {
    v12 = (unsigned int)v16[1];
    v14 = v18;
    v18 = v16[1];
    if ( v14 )
      std::default_delete<CShape>::operator()();
  }
  if ( ShadowOpacityBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ShadowOpacityBrush, 0x13Bu, 0LL);
  }
  else
  {
    if ( !v18 )
      goto LABEL_11;
    CBrushDrawListGenerator::AttachInput(a2, 1LL, &v18);
  }
  if ( v18 )
    std::default_delete<CShape>::operator()();
LABEL_11:
  if ( ShadowOpacityBrush < 0 )
    CBrushDrawListGenerator::Reset(a2);
  return (unsigned int)ShadowOpacityBrush;
}
