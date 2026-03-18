/*
 * XREFs of ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x180014DB0
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180014BE0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HJ@@@@Z @ 0x18008D560 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18008D9AC (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180162430 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180163220 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z @ 0x1801640EC (-DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180013414 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x18006C0D8 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800B16F8 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::ImageSourceToDrawListImageSource(
        CDrawingContext *this,
        struct IImageSource *a2,
        const struct CMILMatrix *a3,
        struct IImageSource **a4)
{
  struct IImageSource *v5; // r14
  int v9; // edi
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  struct IImageSource *v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v20[16]; // [rsp+48h] [rbp-18h] BYREF

  v17 = 0LL;
  v19 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v17);
  if ( (**(int (__fastcall ***)(struct IImageSource *, GUID *, __int64 *))a2)(
         a2,
         &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
         &v17) >= 0 )
  {
    LOBYTE(v14) = CDrawingContext::IsNormalDesktopRender(this);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v15 + 176))(v16, *((_QWORD *)this + 52), 0LL, v14);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v19);
  v9 = (*(__int64 (__fastcall **)(struct IImageSource *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v19);
  if ( v9 >= 0 )
  {
    Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(&v18, a2);
    v5 = v18;
    if ( v18 )
    {
      v10 = 0LL;
      if ( *((_BYTE *)this + 6048) )
      {
        if ( *((_BYTE *)this + 6049) )
          v10 = *((_QWORD *)this + 417);
        else
          v10 = *(_QWORD *)(*((_QWORD *)this + 757) + 24LL);
      }
      v11 = (*(__int64 (__fastcall **)(struct IImageSource *, _QWORD, __int64, _BYTE *))(*(_QWORD *)a2 + 120LL))(
              a2,
              0LL,
              (v10 + 132) & -(__int64)(v10 != 0),
              v20);
      v9 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x233Eu);
        goto LABEL_11;
      }
      CDrawingContext::RecordBitmapContentInfo(this, a3);
    }
  }
  v18 = 0LL;
  *a4 = v5;
LABEL_11:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v17);
  return (unsigned int)v9;
}
