/*
 * XREFs of ?CalculateBounds@CProjectedShadow@@AEBAJPEAVCDrawingContext@@MPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C8660
 * Callers:
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801C851C (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCSurfaceBrush@@@WR.c)
 *     ?GetOffsetForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2DVector2@@@Z @ 0x1801CAC30 (-GetOffsetForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2DVector2@@@Z.c)
 *     ?GetShadowWithoutBlurSizeForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2D_SIZE_F@@@Z @ 0x1801CB1C4 (-GetShadowWithoutBlurSizeForCrossFade@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAUD2D_SIZE_F.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AD7D4 (-GetCasterBounds@CProjectedShadowCaster@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?ProjectOntoAndLocalize@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@PEAVCMILMatrix@@@Z @ 0x1801CC0A4 (-ProjectOntoAndLocalize@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositi.c)
 */

__int64 __fastcall CProjectedShadow::CalculateBounds(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        float a3,
        float *a4)
{
  __int64 v6; // rcx
  struct CVisual *v8; // rdi
  struct CVisual *v9; // rbx
  __int64 v10; // rax
  struct CCompositionLight *v11; // r10
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  _BYTE v16[64]; // [rsp+38h] [rbp-59h] BYREF
  int v17; // [rsp+78h] [rbp-19h]
  float v18; // [rsp+88h] [rbp-9h] BYREF
  float v19; // [rsp+8Ch] [rbp-5h]
  float v20; // [rsp+90h] [rbp-1h]
  float v21; // [rsp+94h] [rbp+3h]

  v6 = *((_QWORD *)this + 9);
  v8 = *(struct CVisual **)(v6 + 56);
  v9 = *(struct CVisual **)(*((_QWORD *)this + 10) + 56LL);
  CProjectedShadowCaster::GetCasterBounds(v6, (__int64)&v18);
  v10 = *((_QWORD *)this + 11);
  v17 = 0;
  v11 = *(struct CCompositionLight **)(v10 + 88);
  v18 = v18 - a3;
  v19 = v19 - a3;
  v20 = v20 + a3;
  v21 = v21 + a3;
  v12 = CProjectedShadow::ProjectOntoAndLocalize(this, a2, v8, v9, v11, (struct CMILMatrix *)v16);
  v14 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x21Du);
  else
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v16, (__int64)&v18, a4);
  return v14;
}
