/*
 * XREFs of ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180036C70
 * Callers:
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18000E448 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x180036DC0 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_180036DC0.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EE5A0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EF1A0 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801AF5F4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801EE6F8 (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCSurfaceBrush@@@WR.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801F0274 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x180036D80 (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

char __fastcall D2DMatrixHelper::ComputeRectangleTransform(
        const struct D2D_RECT_F *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_RECT_F *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  float *v4; // rdx
  float *v5; // rcx
  __int64 v6; // r8
  char v7; // r9
  float v9; // xmm2_4
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  __int64 v18; // xmm1_8
  __int64 v19; // r10
  _DWORD v20[6]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v21; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h]
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+60h] [rbp-10h]
  int v25; // [rsp+64h] [rbp-Ch]

  if ( AreEqual(this, a2) )
  {
    *(_OWORD *)v6 = _xmm;
    *(_QWORD *)(v6 + 16) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  else
  {
    v9 = *v5;
    v10 = v5[1];
    v11 = v5[2] - *v5;
    v12 = v5[3] - v10;
    if ( v11 == 0.0 && v12 == 0.0 )
    {
      return 0;
    }
    else
    {
      v20[1] = 0;
      v20[2] = 0;
      v23 = _xmm;
      v13 = v4[2];
      v24 = LODWORD(v9) ^ _xmm;
      v14 = *v4;
      v25 = LODWORD(v10) ^ _xmm;
      *(float *)&v20[4] = v14;
      v15 = (float)(v13 - v14) / v11;
      v16 = v4[1];
      *(float *)v20 = v15;
      v17 = v4[3];
      *(float *)&v20[5] = v16;
      *(float *)&v20[3] = (float)(v17 - v16) / v12;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v21,
        (const struct D2D1::Matrix3x2F *)&v23,
        (const struct D2D1::Matrix3x2F *)v20);
      v18 = v22;
      *(_OWORD *)v19 = v21;
      *(_QWORD *)(v19 + 16) = v18;
    }
  }
  return v7;
}
