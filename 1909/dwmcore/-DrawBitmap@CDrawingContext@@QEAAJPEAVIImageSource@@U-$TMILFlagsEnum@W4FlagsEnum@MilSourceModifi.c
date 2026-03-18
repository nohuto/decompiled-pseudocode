/*
 * XREFs of ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800426F0
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x1800429F0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
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
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x54Du, 0LL);
  }
  else if ( CDrawingContext::IsBounding(this) )
  {
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v20, (const struct MilRectF *)v19);
    v10 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v20, v9);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x564u, 0LL);
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
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x552u, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x55Du, 0LL);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
  }
  return v8;
}
