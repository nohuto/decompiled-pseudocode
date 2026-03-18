/*
 * XREFs of ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180013890
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800141C8 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x180014294 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18004E9C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18004EA28 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800512F0 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180051ED4 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z @ 0x1800520AC (-IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180052140 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180075FA8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180076050 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180078AB8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800915B4 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180091838 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18009B720 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BA950 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GenerateDrawList(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  char v8; // al
  int v9; // ecx
  char v10; // r15
  unsigned int v11; // edx
  float width; // xmm0_4
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // ebx
  struct CGeometryOnlyDrawListBrush *v16; // rbx
  int v17; // edi
  int v18; // edi
  CSurfaceDrawListBrush *v19; // rcx
  CSurfaceDrawListBrush *v20; // rax
  unsigned __int64 v21; // xmm1_8
  __int64 v22; // rcx
  int DrawList; // eax
  unsigned int v24; // ecx
  CGeometryOnlyDrawListBrush *v26; // rcx
  FLOAT v27; // xmm0_4
  FLOAT height; // xmm1_4
  CGeometryOnlyDrawListBrush *v29; // rax
  struct D2D_RECT_F v30; // xmm0
  CGeometryOnlyDrawListBrush *v31; // rcx
  bool v32; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v33[16]; // [rsp+40h] [rbp-C0h] BYREF
  CGeometryOnlyDrawListBrush *v34; // [rsp+50h] [rbp-B0h] BYREF
  struct D2D_RECT_F v35; // [rsp+58h] [rbp-A8h] BYREF
  CSurfaceDrawListBrush *v36; // [rsp+68h] [rbp-98h] BYREF
  struct CGeometryOnlyDrawListBrush *v37[2]; // [rsp+70h] [rbp-90h] BYREF
  char v38; // [rsp+80h] [rbp-80h]
  _QWORD v39[6]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v40; // [rsp+C0h] [rbp-40h]
  unsigned int v41; // [rsp+C4h] [rbp-3Ch]
  int v42; // [rsp+D0h] [rbp-30h]
  _QWORD v43[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v44; // [rsp+F0h] [rbp-10h]
  __int16 v45; // [rsp+13Ch] [rbp+3Ch]
  char v46; // [rsp+13Eh] [rbp+3Eh]
  __int128 v47; // [rsp+140h] [rbp+40h] BYREF
  char v48; // [rsp+150h] [rbp+50h]
  struct D2D_RECT_F v49; // [rsp+158h] [rbp+58h] BYREF
  struct CDrawingContext *v50; // [rsp+170h] [rbp+70h] BYREF
  int v51; // [rsp+178h] [rbp+78h]
  int v52; // [rsp+17Ch] [rbp+7Ch]
  int v53; // [rsp+180h] [rbp+80h]
  __int128 v54; // [rsp+184h] [rbp+84h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  __int64 v56; // [rsp+1A0h] [rbp+A0h]
  __int64 v57; // [rsp+1A8h] [rbp+A8h]
  __int64 v58; // [rsp+1B0h] [rbp+B0h]
  int v59; // [rsp+1B8h] [rbp+B8h]
  char v60; // [rsp+1BCh] [rbp+BCh]
  _BYTE v61[2304]; // [rsp+1C0h] [rbp+C0h] BYREF

  v42 = 0;
  v8 = CCompositionSurfaceBitmap::CalcImageTransform(this, a3, v39, &v49);
  v9 = *((_DWORD *)a2 + 62);
  v10 = v8;
  v11 = 0;
  if ( v9 == 1 )
  {
    v11 = 1;
    goto LABEL_3;
  }
  if ( v9 <= 1 )
    goto LABEL_3;
  if ( v9 <= 3 )
  {
    v11 = 2;
  }
  else
  {
    if ( v9 == 4 )
    {
LABEL_31:
      v11 = 3;
      goto LABEL_3;
    }
    if ( v9 != 5 )
    {
      if ( v9 != 6 )
        goto LABEL_3;
      goto LABEL_31;
    }
    v11 = 4;
  }
LABEL_3:
  v33[0] = InterpolationMode::FromD2D1InterpolationMode(v11);
  v33[1] = 1;
  if ( !IsEmpty(&v49) )
  {
    v51 = 0;
    v52 = 0;
    v54 = _xmm;
    v50 = a2;
    width = a3->width;
    v53 = 0;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0;
    v60 = 0;
    v34 = 0LL;
    if ( width != 0.0 && a3->height != 0.0 && CCompositionSurfaceBitmap::IsSwapChain(this) )
    {
      v37[1] = 0LL;
      v37[0] = (struct CGeometryOnlyDrawListBrush *)&v34;
      v38 = 1;
      v15 = CGeometryOnlyDrawListBrush::Create(&v37[1]);
      if ( v38 )
      {
        v26 = *(CGeometryOnlyDrawListBrush **)v37[0];
        *(_QWORD *)v37[0] = v37[1];
        if ( v26 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v26, 1u);
      }
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v26, 0LL, 0, v15, 0x3DAu, 0LL);
        goto LABEL_43;
      }
      v27 = a3->width;
      height = a3->height;
      v29 = v34;
      *(_QWORD *)&v35.left = 0LL;
      *(_QWORD *)&v35.right = __PAIR64__(LODWORD(height), LODWORD(v27));
      v30 = v35;
      *((_BYTE *)v34 + 52) = 1;
      *((_DWORD *)v29 + 12) = 50529027;
      *((struct D2D_RECT_F *)v29 + 2) = v30;
    }
    v38 = 0;
    *(_OWORD *)v37 = 0LL;
    v13 = CDrawListBitmap::FromImageSource(
            (CDrawListBitmap *)v37,
            (struct IImageSource *)(((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
            a2,
            0);
    v15 = v13;
    if ( v13 >= 0 )
    {
      v16 = v37[0];
      if ( (*(unsigned __int8 (__fastcall **)(struct CGeometryOnlyDrawListBrush *))(*(_QWORD *)v37[0] + 32LL))(v37[0])
        && *(_BYTE *)(*((_QWORD *)this + 2) + 1273LL) )
      {
        v54 = _xmm;
        v53 = 4;
      }
      else
      {
        v17 = (*(unsigned __int8 (__fastcall **)(struct CGeometryOnlyDrawListBrush *))(*(_QWORD *)v16 + 32LL))(v16) != 0
            ? 2
            : 0;
        if ( CDrawListBitmap::IsSwapChain((CDrawListBitmap *)v37, &v32) )
        {
          v17 |= 0x10u;
          if ( v32 )
            v17 |= 0x100u;
        }
        v36 = 0LL;
        *(_QWORD *)&v47 = &v36;
        *((_QWORD *)&v47 + 1) = 0LL;
        v48 = 1;
        v35 = v49;
        v18 = v17 | 0x200;
        v33[2] = 1;
        v15 = CSurfaceDrawListBrush::CreateWithContentRect(v37, v33, &v35, (char *)&v47 + 8);
        if ( v48 )
        {
          v19 = *(CSurfaceDrawListBrush **)v47;
          *(_QWORD *)v47 = *((_QWORD *)&v47 + 1);
          if ( v19 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v19, 1u);
        }
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, v15, 0x402u, 0LL);
          if ( v36 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v36, 1u);
          goto LABEL_51;
        }
        if ( v10 )
        {
          v20 = v36;
          *(_QWORD *)&v47 = v39[0];
          *((_QWORD *)&v47 + 1) = v39[2];
          v21 = _mm_unpacklo_ps((__m128)v40, (__m128)v41).m128_u64[0];
          *(_OWORD *)((char *)v36 + 8) = v47;
          *((_QWORD *)v20 + 3) = v21;
        }
        *(_QWORD *)&v35.left = v36;
        v36 = 0LL;
        CBrushDrawListGenerator::AttachInput(&v50, 0LL, &v35);
        if ( *(_QWORD *)&v35.left )
          std::default_delete<CShape>::operator()(v22, *(__int64 (__fastcall ****)(_QWORD, __int64))&v35.left);
        v53 = v18;
        if ( v36 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v36, 1u);
      }
      v43[0] = v34;
      v43[1] = 0LL;
      v44 = 0;
      v45 = 1;
      v46 = 0;
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   (CBrushDrawListGenerator *)&v50,
                   (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v43,
                   (struct CDrawListEntryBuilder *)v61);
      v15 = DrawList;
      if ( DrawList >= 0 )
      {
        CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v61);
        CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v37[1]);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v37);
        if ( v34 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v34, 1u);
        CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v50);
        return 0;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, DrawList, 0x419u, 0LL);
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
LABEL_51:
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v37[1]);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v37);
      v31 = v34;
      if ( !v34 )
        goto LABEL_45;
      goto LABEL_44;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x3DFu, 0LL);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v37[1]);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v37);
LABEL_43:
    v31 = v34;
    if ( !v34 )
    {
LABEL_45:
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v50);
      return (unsigned int)v15;
    }
LABEL_44:
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v31, 1u);
    goto LABEL_45;
  }
  return 0;
}
