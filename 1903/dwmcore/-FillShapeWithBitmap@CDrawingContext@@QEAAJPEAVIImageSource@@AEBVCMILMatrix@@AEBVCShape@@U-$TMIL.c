/*
 * XREFs of ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800168FC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FF814 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVMILMatrix3x2@@MW4Enum@MilCompositingMode@@_N@Z @ 0x180050BE0 (-FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVM.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x1800513E0 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18007A99C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x1800B5684 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1800CA5C8 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmap(
        CDrawingContext *this,
        struct IImageSource *a2,
        struct CMILMatrix *a3,
        struct CShape *a4,
        char a5)
{
  unsigned int v9; // ebx
  CDrawingContext *v10; // rcx
  bool v11; // r8
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // xmm1_4
  int v15; // xmm2_4
  int v16; // xmm3_4
  int v17; // xmm4_4
  int v18; // xmm5_4
  unsigned int v19; // ebx
  void *v20; // rax
  unsigned int v21; // ecx
  void *v22; // rdi
  int v23; // eax
  unsigned int v24; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  struct IImageSource *v28; // [rsp+40h] [rbp-21h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-19h] BYREF
  _DWORD v30[7]; // [rsp+4Ch] [rbp-15h] BYREF
  _BYTE v31[72]; // [rsp+68h] [rbp+7h] BYREF

  v9 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CShape *))(*(_QWORD *)a4 + 16LL))(a4) )
  {
    if ( CDrawingContext::IsBounding(this) )
    {
      v26 = CDrawingContext::FillShapeForBounds(v10, a4, v11);
      v9 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xBE3u, 0LL);
    }
    else
    {
      v28 = 0LL;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v28);
      v12 = CDrawingContext::ImageSourceToDrawListImageSource(this, a2, a3, &v28);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xBC3u, 0LL);
      }
      else if ( v28 )
      {
        v14 = *((_DWORD *)a3 + 1);
        v15 = *((_DWORD *)a3 + 4);
        v16 = *((_DWORD *)a3 + 5);
        v17 = *((_DWORD *)a3 + 12);
        v18 = *((_DWORD *)a3 + 13);
        v30[0] = *(_DWORD *)a3;
        v30[1] = v14;
        v30[2] = v15;
        v30[3] = v16;
        v30[4] = v17;
        v30[5] = v18;
        MILMatrix3x2::SetInverse((MILMatrix3x2 *)v31, (const struct MILMatrix3x2 *)v30);
        if ( (*(unsigned __int8 (__fastcall **)(struct CShape *, unsigned int *))(*(_QWORD *)a4 + 40LL))(a4, &v29) )
        {
          v19 = v29;
          v20 = DefaultHeap::Alloc(saturated_mul(v29, 0x10uLL));
          v22 = v20;
          if ( v20 )
            `vector constructor iterator'(
              v20,
              0x10uLL,
              v19,
              (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
          else
            v22 = 0LL;
          if ( v22 )
          {
            (*(void (__fastcall **)(struct CShape *, void *, _QWORD))(*(_QWORD *)a4 + 48LL))(a4, v22, v29);
            v23 = CDrawingContext::FillRectanglesWithBitmapAsDrawList(
                    this,
                    v22,
                    v29,
                    v28,
                    v31,
                    (_DWORD)FLOAT_1_0,
                    *((_DWORD *)this + 64),
                    a5 & 1);
            v9 = v23;
            if ( v23 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xBD9u, 0LL);
            operator delete(v22);
          }
          else
          {
            v9 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024882, 0xBCEu, 0LL);
          }
        }
      }
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v28);
    }
  }
  return v9;
}
