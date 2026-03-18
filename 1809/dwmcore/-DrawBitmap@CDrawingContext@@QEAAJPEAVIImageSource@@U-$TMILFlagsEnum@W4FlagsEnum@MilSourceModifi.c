/*
 * XREFs of ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18008D9AC
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x18008D940 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x180014DB0 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x18008DA68 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18008DAB4 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18008DCB4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x1800B18C8 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800C1EF4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, struct IImageSource *a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  bool v9; // r8
  int v10; // eax
  unsigned int v11; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  char v17; // [rsp+30h] [rbp-49h]
  struct IImageSource *v18; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v19[24]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v20[80]; // [rsp+60h] [rbp-19h] BYREF

  v6 = (*(__int64 (__fastcall **)(struct IImageSource *, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)a2 + 120LL))(
         a2,
         0LL,
         0LL,
         v19);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x550u);
  }
  else if ( CDrawingContext::IsBounding(this) )
  {
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v20, (const struct MilRectF *)v19);
    v10 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v20, v9);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x567u);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v20);
  }
  else
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
    v13 = CDrawingContext::ImageSourceToDrawListImageSource(this, a2, 0LL, &v18);
    v8 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x555u);
    }
    else if ( v18 )
    {
      v17 = a3 & 1;
      v15 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
              this,
              v18,
              v19,
              v19,
              *((_DWORD *)this + 1572),
              *((_DWORD *)this + 64),
              v17);
      v8 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x560u);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
  }
  return v8;
}
