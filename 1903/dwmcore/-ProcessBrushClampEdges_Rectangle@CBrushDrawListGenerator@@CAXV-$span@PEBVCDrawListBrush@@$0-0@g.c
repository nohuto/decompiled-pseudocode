/*
 * XREFs of ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x180010E0C
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800690F0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180010FA0 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001113C (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180011188 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 */

char __fastcall CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(
        __int64 *a1,
        const struct D2D_MATRIX_3X2_F *a2,
        _DWORD *a3)
{
  __int64 *v3; // rbx
  int v4; // edi
  __int64 v6; // rax
  float *p_m11; // r12
  __int64 *i; // r14
  __int64 v9; // rsi
  const struct D2D_MATRIX_3X2_F *v10; // r8
  int v11; // r9d
  float v12; // xmm2_4
  bool v13; // cf
  float v14; // xmm2_4
  int v15; // edx
  float v16; // xmm2_4
  float v17; // xmm2_4
  unsigned int v18; // ecx
  struct D2D_MATRIX_3X2_F v20; // [rsp+20h] [rbp-38h] BYREF

  v3 = (__int64 *)a1[1];
  v4 = 0;
  v6 = *a1;
  p_m11 = &a2->m11;
  for ( i = &v3[*a1]; v3 != i; ++v3 )
  {
    v9 = *v3;
    if ( *v3 )
    {
      if ( *(_BYTE *)(v9 + 52) )
      {
        LOBYTE(v6) = D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)(v9 + 8), a2);
        if ( (_BYTE)v6 )
        {
          LODWORD(v6) = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
                          (D2DMatrixHelper *)*(unsigned int *)(v9 + 48),
                          v9 + 8,
                          v10);
          if ( (_DWORD)v6 != v4 )
          {
            D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
              (D2DMatrixHelper *)(v9 + 32),
              (const struct D2D_RECT_F *)(v9 + 8),
              &v20,
              (struct D2D_RECT_F *)(unsigned int)v6);
            v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*p_m11 - v20.m11)) & _xmm);
            v13 = v12 > 0.0000011920929;
            v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(p_m11[2] - v20.m21)) & _xmm);
            v15 = (!v13 ? 0x3000000 : 0) | 0x300;
            if ( v14 > 0.0000011920929 )
              v15 = !v13 ? 0x3000000 : 0;
            v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(p_m11[1] - v20.m12)) & _xmm);
            v13 = v16 > 0.0000011920929;
            v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(p_m11[3] - v20.m22)) & _xmm);
            v18 = v15 | 3;
            if ( v13 )
              v18 = v15;
            LOBYTE(v6) = v17 <= 0.0000011920929;
            a2 = (const struct D2D_MATRIX_3X2_F *)(v18 | 0x30000);
            if ( v17 > 0.0000011920929 )
              a2 = (const struct D2D_MATRIX_3X2_F *)v18;
            if ( (_DWORD)a2 )
            {
              a2 = (const struct D2D_MATRIX_3X2_F *)(v11 & (unsigned int)a2);
              v4 |= (unsigned int)a2;
              if ( v4 == 50529027 )
                break;
            }
          }
        }
      }
    }
  }
  *a3 = v4;
  return v6;
}
