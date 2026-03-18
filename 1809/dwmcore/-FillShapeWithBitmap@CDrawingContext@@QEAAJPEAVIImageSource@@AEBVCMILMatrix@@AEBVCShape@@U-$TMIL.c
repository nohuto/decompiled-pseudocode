/*
 * XREFs of ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180014BE0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BDEDC (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x180014DB0 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1800676B4 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18008DAB4 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18008DCB4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVMILMatrix3x2@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800B1FB4 (-FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVM.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmap(
        CDrawingContext *this,
        struct IImageSource *a2,
        struct CMILMatrix *a3,
        struct CShape *a4,
        char a5)
{
  unsigned int v9; // edi
  CDrawingContext *v10; // rcx
  bool v11; // r8
  int v12; // eax
  unsigned int v13; // ecx
  struct IImageSource *v14; // rbx
  int v15; // xmm1_4
  int v16; // xmm2_4
  int v17; // xmm3_4
  int v18; // xmm4_4
  int v19; // xmm5_4
  unsigned int v20; // edi
  SIZE_T v21; // rax
  void *v22; // rax
  unsigned int v23; // ecx
  void *v24; // rsi
  int v25; // eax
  unsigned int v26; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  struct IImageSource *v31; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v32[6]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v33[24]; // [rsp+68h] [rbp-18h] BYREF

  v9 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CShape *))(*(_QWORD *)a4 + 16LL))(a4) )
  {
    if ( CDrawingContext::IsBounding(this) )
    {
      v28 = CDrawingContext::FillShapeForBounds(v10, a4, v11);
      v9 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xBA5u);
    }
    else
    {
      v31 = 0LL;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v31);
      v12 = CDrawingContext::ImageSourceToDrawListImageSource(this, a2, a3, &v31);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xB85u);
      }
      else
      {
        v14 = v31;
        if ( v31 )
        {
          v15 = *((_DWORD *)a3 + 1);
          v16 = *((_DWORD *)a3 + 4);
          v17 = *((_DWORD *)a3 + 5);
          v18 = *((_DWORD *)a3 + 12);
          v19 = *((_DWORD *)a3 + 13);
          v32[0] = *(_DWORD *)a3;
          v32[1] = v15;
          v32[2] = v16;
          v32[3] = v17;
          v32[4] = v18;
          v32[5] = v19;
          MILMatrix3x2::SetInverse((MILMatrix3x2 *)v33, (const struct MILMatrix3x2 *)v32);
          if ( (*(unsigned __int8 (__fastcall **)(struct CShape *, unsigned __int64 *))(*(_QWORD *)a4 + 40LL))(a4, &v30) )
          {
            v20 = v30;
            v21 = 16LL * (unsigned int)v30;
            if ( !is_mul_ok((unsigned int)v30, 0x10uLL) )
              v21 = -1LL;
            if ( !v21 )
              v21 = 1LL;
            v22 = HeapAlloc(WPF::g_processHeap, 0, v21);
            v24 = v22;
            if ( v22 )
              `vector constructor iterator'(
                v22,
                0x10uLL,
                v20,
                (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
            else
              v24 = 0LL;
            if ( v24 )
            {
              (*(void (__fastcall **)(struct CShape *, void *, _QWORD))(*(_QWORD *)a4 + 48LL))(
                a4,
                v24,
                (unsigned int)v30);
              v25 = CDrawingContext::FillRectanglesWithBitmapAsDrawList(
                      this,
                      v24,
                      (unsigned int)v30,
                      v14,
                      v33,
                      LODWORD(FLOAT_1_0),
                      *((_DWORD *)this + 64),
                      a5 & 1);
              v9 = v25;
              if ( v25 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xB9Bu);
              WPF::ProcessHeapImpl::Free(v24);
            }
            else
            {
              v9 = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2147024882, 0xB90u);
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v31);
    }
  }
  return v9;
}
