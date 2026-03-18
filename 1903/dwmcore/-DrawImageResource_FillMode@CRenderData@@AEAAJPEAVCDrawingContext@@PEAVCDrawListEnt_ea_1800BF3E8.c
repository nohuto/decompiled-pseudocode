/*
 * XREFs of ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x1800BF3E8
 * Callers:
 *     ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BE9A0 (-DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800BECF0 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800BED68 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180051ED4 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180052140 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180075FA8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180078AB8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18009B720 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BA950 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800BF720 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawImageResource_FillMode(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        char a4,
        struct CImageSource *a5,
        const struct D2D_RECT_F *a6,
        struct D2D_RECT_F *a7,
        FLOAT a8,
        const struct D2D_RECT_F *a9)
{
  signed int v11; // ebx
  __int64 v12; // rdi
  int v13; // edi
  struct D2D_MATRIX_3X2_F *v14; // r9
  signed int v15; // eax
  __int64 v16; // rcx
  struct D2D_RECT_F *v17; // rax
  CSurfaceDrawListBrush *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // xmm1_8
  __int64 v21; // rcx
  signed int DrawList; // eax
  __int64 v23; // rcx
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int16 v28; // [rsp+40h] [rbp-C0h] BYREF
  char v29; // [rsp+42h] [rbp-BEh]
  struct D2D_RECT_F v30; // [rsp+50h] [rbp-B0h] BYREF
  struct D2D_RECT_F *v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  char v33; // [rsp+70h] [rbp-90h]
  __int128 v34; // [rsp+78h] [rbp-88h] BYREF
  char v35; // [rsp+88h] [rbp-78h]
  struct CDrawListEntryBuilder *v36; // [rsp+90h] [rbp-70h]
  struct D2D_RECT_F v37; // [rsp+98h] [rbp-68h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int128 v39; // [rsp+B0h] [rbp-50h] BYREF
  int v40; // [rsp+C0h] [rbp-40h]
  bool v41; // [rsp+10Ch] [rbp+Ch]
  __int16 v42; // [rsp+10Dh] [rbp+Dh]
  struct D2D_RECT_F v43; // [rsp+110h] [rbp+10h] BYREF
  struct CDrawingContext *v44; // [rsp+120h] [rbp+20h] BYREF
  int v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+12Ch] [rbp+2Ch]
  int v47; // [rsp+130h] [rbp+30h]
  __int128 v48; // [rsp+134h] [rbp+34h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  __int64 v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  __int64 v52; // [rsp+160h] [rbp+60h]
  int v53; // [rsp+168h] [rbp+68h]
  char v54; // [rsp+16Ch] [rbp+6Ch]

  v34 = 0LL;
  v44 = a2;
  v11 = 0;
  v45 = 0;
  v46 = 0;
  v36 = a3;
  v48 = _xmm;
  v35 = 0;
  v47 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0;
  v54 = 0;
  v39 = 0LL;
  v40 = 0;
  v42 = 0;
  if ( (int)CDrawListBitmap::FromImageSource(
              (struct IImageSource **)&v34,
              (struct IImageSource *)(((unsigned __int64)a5 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)a5 >> 64)),
              a2,
              0) >= 0 )
  {
    v12 = v34;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v34 + 32LL))(v34)
      && *(_BYTE *)(*((_QWORD *)this + 2) + 1273LL) )
    {
      v48 = _xmm;
      v47 = 4;
    }
    else
    {
      v43.bottom = a8;
      *(_QWORD *)&v43.left = 0x3F8000003F800000LL;
      v43.right = 1.0;
      v48 = (__int128)v43;
      v13 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) != 0 ? 2 : 0;
      if ( (*(unsigned __int8 (__fastcall **)(char *, __int64))(*((_QWORD *)a5 + 2) + 48LL))((char *)a5 + 16, 15LL)
        && *((_QWORD *)a5 + 29) == *((_QWORD *)a2 + 757) )
      {
        v13 |= 0x100u;
      }
      v47 = v13;
      v41 = a4 == 0;
      if ( a6 )
      {
        v43 = *a6;
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, struct D2D_RECT_F *))(*((_QWORD *)a5 + 1) + 120LL))(
                (char *)a5 + 8,
                0LL,
                0LL,
                &v43);
        v11 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x449u, 0LL);
          goto LABEL_24;
        }
        v30 = v43;
      }
      v17 = &v43;
      if ( a7 )
        v17 = a7;
      v30 = *v17;
      if ( D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v43, &v30, &v37, v14) )
      {
        *(_QWORD *)&v30.left = 0LL;
        v31 = &v30;
        v28 = SamplerMode::k_ClampClampLinear;
        v29 = 1;
        v32 = 0LL;
        v33 = 1;
        v11 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)&v34, &v28, &v43.left, &v32);
        if ( v33 )
        {
          v18 = *(CSurfaceDrawListBrush **)&v31->left;
          *(_QWORD *)&v31->left = v32;
          if ( v18 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v18, 1);
        }
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v18, 0LL, 0, v11, 0x45Bu, 0LL);
        }
        else
        {
          v19 = *(_QWORD *)&v30.left;
          v20 = v38;
          *(struct D2D_RECT_F *)(*(_QWORD *)&v30.left + 8LL) = v37;
          *(_QWORD *)(v19 + 24) = v20;
          if ( a9 )
          {
            v25 = *(_QWORD *)&v30.left;
            *(_BYTE *)(*(_QWORD *)&v30.left + 52LL) = 1;
            v26 = (__int128)*a9;
            *(_DWORD *)(v25 + 48) = 0;
            *(_OWORD *)(v25 + 32) = v26;
          }
          *(_QWORD *)&v43.left = *(_QWORD *)&v30.left;
          *(_QWORD *)&v30.left = 0LL;
          CBrushDrawListGenerator::AttachInput((__int64)&v44, 0, &v43);
          if ( *(_QWORD *)&v43.left )
            std::default_delete<CShape>::operator()(v21, *(__int64 (__fastcall ****)(_QWORD, __int64))&v43.left);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)&v44,
                       (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v39,
                       v36);
          v11 = DrawList;
          if ( DrawList < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, DrawList, 0x465u, 0LL);
        }
        if ( *(_QWORD *)&v30.left )
          CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)&v30.left, 1);
      }
    }
  }
LABEL_24:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v44);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v34 + 1);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v34);
  return (unsigned int)v11;
}
