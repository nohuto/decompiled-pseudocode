/*
 * XREFs of ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18005C5B4
 * Callers:
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18000B548 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x18000C120 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x18005C00C (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_18005C00C.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180182BCC (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801C851C (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCSurfaceBrush@@@WR.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801CA404 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x18005C6C4 (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
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
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  __int64 v17; // xmm1_8
  __int64 v18; // r10
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
    v8 = *v5;
    v9 = v5[1];
    v10 = v5[2] - *v5;
    v11 = v5[3] - v9;
    if ( v10 == 0.0 && v11 == 0.0 )
    {
      return 0;
    }
    else
    {
      v12 = *v4;
      v13 = v4[2] - *v4;
      v20[1] = 0;
      v20[2] = 0;
      *(float *)&v20[4] = v12;
      v14 = v13 / v10;
      v15 = v4[1];
      *(float *)v20 = v14;
      v16 = v4[3];
      *(float *)&v20[5] = v15;
      v24 = LODWORD(v8) ^ _xmm;
      v25 = LODWORD(v9) ^ _xmm;
      *(float *)&v20[3] = (float)(v16 - v15) / v11;
      v23 = _xmm;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v21,
        (const struct D2D1::Matrix3x2F *)&v23,
        (const struct D2D1::Matrix3x2F *)v20);
      v17 = v22;
      *(_OWORD *)v18 = v21;
      *(_QWORD *)(v18 + 16) = v17;
    }
  }
  return v7;
}
