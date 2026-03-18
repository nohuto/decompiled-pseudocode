/*
 * XREFs of ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18016B5BC
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000D240 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x18017C290 (-RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18003F594 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800427AC (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x180042858 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180042950 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x180069C68 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x18006A1DC (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(
        CDrawingContext *this,
        struct IImageSource *a2,
        _OWORD *a3,
        const struct MilRectF *a4,
        unsigned int a5,
        char a6)
{
  __int64 v10; // rcx
  int v11; // r14d
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  signed int v15; // eax
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx
  struct IImageSource *v20[2]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v21[80]; // [rsp+50h] [rbp-49h] BYREF

  if ( CDrawingContext::IsBounding(this) )
  {
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v21, a4);
    v17 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v21);
    v14 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xBA1u, 0LL);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v21);
  }
  else
  {
    v11 = *(_DWORD *)(v10 + 276);
    v20[0] = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v20);
    v12 = CDrawingContext::ImageSourceToDrawListImageSource(this, a2, 0LL, v20);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xB8Fu, 0LL);
    }
    else if ( v20[0] )
    {
      v15 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
              (__int64)this,
              (__int64)v20[0],
              a3,
              (__int128 *)a4,
              a5,
              v11,
              a6 & 1);
      v14 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xB9Au, 0LL);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v20);
  }
  return v14;
}
