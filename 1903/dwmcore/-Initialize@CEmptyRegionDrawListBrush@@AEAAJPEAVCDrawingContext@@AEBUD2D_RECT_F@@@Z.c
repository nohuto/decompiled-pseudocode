/*
 * XREFs of ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180259FD4
 * Callers:
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x180259D78 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18003D0C0 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180050470 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180051E20 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7DAC (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BA950 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801B084C (-SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18022A3C8 (-TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180258370 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::Initialize(
        CEmptyRegionDrawListBrush *this,
        struct CDrawingContext *a2,
        struct D2D_RECT_F *a3)
{
  __int64 v3; // rax
  const struct FastRegion::Internal::CRgnData **v4; // rsi
  unsigned int v8; // edi
  __int64 v9; // xmm1_8
  struct D2D_RECT_F *v10; // r9
  __m128i *v11; // rax
  __int64 v12; // r11
  unsigned __int64 v13; // xmm0_8
  unsigned __int64 v14; // rax
  const struct FastRegion::Internal::CRgnData *v15; // rdx
  char v16; // al
  __int64 v17; // rdx
  const struct FastRegion::Internal::CRgnData **ContentRegion; // rax
  signed int v19; // eax
  __int64 v20; // rcx
  __m128i *v21; // rax
  __int64 v22; // r9
  unsigned __int64 v23; // xmm0_8
  unsigned __int64 v24; // rax
  signed int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  signed int appended; // eax
  __int64 v29; // rcx
  CSurfaceDrawListBrush *v30; // rcx
  __int64 (__fastcall ***v31)(_QWORD, __int64); // rdx
  __int64 v32; // rax
  __int16 v34; // [rsp+30h] [rbp-89h] BYREF
  char v35; // [rsp+32h] [rbp-87h]
  __int128 v36; // [rsp+40h] [rbp-79h] BYREF
  char v37; // [rsp+50h] [rbp-69h]
  _BYTE v38[40]; // [rsp+58h] [rbp-61h] BYREF
  _DWORD *v39; // [rsp+80h] [rbp-39h] BYREF
  _DWORD v40[3]; // [rsp+88h] [rbp-31h] BYREF
  _DWORD v41[2]; // [rsp+94h] [rbp-25h] BYREF
  _DWORD v42[7]; // [rsp+9Ch] [rbp-1Dh] BYREF
  _BYTE v43[23]; // [rsp+B9h] [rbp+0h] BYREF

  v3 = *((_QWORD *)this + 9);
  v4 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 88);
  v8 = 0;
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v3 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v3 + 24);
  v9 = *(_QWORD *)(v3 + 24);
  *(_OWORD *)&v38[16] = *(_OWORD *)(v3 + 8);
  *(_QWORD *)&v38[32] = v9;
  D2D1InvertMatrix((D2D1_MATRIX_3X2_F *)&v38[16]);
  D2DMatrixHelper::TransformRectConservative(
    (D2DMatrixHelper *)a3,
    (const struct D2D_RECT_F *)&v38[16],
    (const struct D2D_MATRIX_3X2_F *)v38,
    v10);
  v11 = (__m128i *)CMilRectLFromMilRectF((int *)&v36, (__int64)v38);
  v12 = v11->m128i_i64[0];
  v13 = _mm_srli_si128(*v11, 8).m128i_u64[0];
  v14 = HIDWORD(v11->m128i_i64[0]);
  if ( (int)v12 >= (int)v13 || (int)v14 >= SHIDWORD(v13) )
  {
    *(_DWORD *)*v4 = 0;
  }
  else
  {
    v15 = *v4;
    *(_DWORD *)v15 = 2;
    *((_DWORD *)v15 + 1) = v12;
    *((_DWORD *)v15 + 2) = v13;
    *((_DWORD *)v15 + 3) = v14;
    *((_DWORD *)v15 + 4) = 16;
    *((_DWORD *)v15 + 7) = v12;
    *((_DWORD *)v15 + 8) = v13;
    *((_DWORD *)v15 + 5) = HIDWORD(v13);
    *((_DWORD *)v15 + 6) = 16;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9), 4LL);
  v17 = *((_QWORD *)this + 9);
  if ( v16 )
  {
    ContentRegion = (const struct FastRegion::Internal::CRgnData **)CPrimitiveGroupDrawListGenerator::GetContentRegion(*(CPrimitiveGroupDrawListGenerator **)(v17 + 72));
    if ( ContentRegion )
    {
      v19 = FastRegion::CRegion::Subtract(v4, ContentRegion);
      v8 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x47u, 0LL);
        return v8;
      }
    }
  }
  else
  {
    if ( *(_BYTE *)(v17 + 52) )
    {
      v40[0] = 0;
      v39 = v40;
      v21 = (__m128i *)CMilRectLFromMilRectF((int *)&v36, v17 + 32);
      v22 = v21->m128i_i64[0];
      v23 = _mm_srli_si128(*v21, 8).m128i_u64[0];
      v24 = HIDWORD(v21->m128i_i64[0]);
      if ( (int)v22 < (int)v23 && (int)v24 < SHIDWORD(v23) )
      {
        v41[0] = v24;
        v40[0] = 2;
        v40[1] = v22;
        v40[2] = v23;
        v41[1] = (unsigned int)v43 - 21 - (unsigned int)v41;
        v42[2] = v22;
        v42[3] = v23;
        v42[1] = (unsigned int)v43 - 21 - (unsigned int)v42 + 8;
        v42[0] = HIDWORD(v23);
      }
      v25 = FastRegion::CRegion::Subtract(v4, (const struct FastRegion::Internal::CRgnData **)&v39);
      v8 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x51u, 0LL);
        FastRegion::CRegion::FreeMemory((void **)&v39);
        return v8;
      }
      FastRegion::CRegion::FreeMemory((void **)&v39);
    }
    else
    {
      *(_DWORD *)*v4 = 0;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(
           *((_QWORD *)this + 9),
           5LL) )
    {
      v27 = *((_QWORD *)this + 9);
      if ( (-(__int64)(*(_BYTE *)(v27 + 569) != 0) & (v27 + 552)) != 0 )
      {
        *(_OWORD *)v38 = *(_OWORD *)CMilRectLFromMilRectF(
                                      (int *)&v36,
                                      (v27 + 552) & -(__int64)(*(_BYTE *)(v27 + 569) != 0));
        appended = CRegion::AppendRects<tagRECT>((FastRegion::CRegion *)v4, (__int64)v38, 1u);
        v8 = appended;
        if ( appended < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, appended, 0x60u, 0LL);
          return v8;
        }
      }
    }
  }
  if ( *(_DWORD *)*v4 )
  {
    v37 = 0;
    v36 = 0LL;
    CDrawListBitmap::SetTransparent((struct IImageSource **)&v36, a2);
    *(_QWORD *)v38 = 0LL;
    *(_QWORD *)&v38[16] = v38;
    v34 = SamplerMode::k_ClampClampLinear;
    v35 = 1;
    *(_QWORD *)&v38[24] = 0LL;
    v38[32] = 1;
    v8 = CSurfaceDrawListBrush::CreateWithTextureTransform(
           (struct CSurfaceDrawListBrush *)&v36,
           &v34,
           Matrix3x3::Zero,
           &v38[24]);
    if ( v38[32] )
    {
      v30 = **(CSurfaceDrawListBrush ***)&v38[16];
      **(_QWORD **)&v38[16] = *(_QWORD *)&v38[24];
      if ( v30 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v30, 1);
    }
    if ( (v8 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v30, 0LL, 0, v8, 0x70u, 0LL);
    }
    else
    {
      v31 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 10);
      v32 = *(_QWORD *)v38;
      *(_QWORD *)v38 = 0LL;
      *((_QWORD *)this + 10) = v32;
      if ( !v31 )
      {
LABEL_32:
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v36 + 1);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v36);
        return v8;
      }
      std::default_delete<CShape>::operator()((__int64)v30, v31);
    }
    if ( *(_QWORD *)v38 )
      CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)v38, 1);
    goto LABEL_32;
  }
  return v8;
}
