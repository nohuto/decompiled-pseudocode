/*
 * XREFs of ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x18000DD60
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000DF10 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000E07C (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18000E0C8 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(
        gsl::details *a1,
        const struct D2D_MATRIX_3X2_F *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  _DWORD *v3; // r12
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 *v9; // r15
  __int64 v10; // rsi
  unsigned int v11; // eax
  int v12; // r9d
  int v13; // ecx
  float v14; // xmm2_4
  float v15; // xmm2_4
  unsigned int v16; // eax
  float v17; // xmm2_4
  float v18; // xmm2_4
  unsigned int v19; // eax
  struct D2D_MATRIX_3X2_F v20; // [rsp+20h] [rbp-48h] BYREF
  float *p_m11; // [rsp+78h] [rbp+10h]

  p_m11 = &a2->m11;
  v3 = (_DWORD *)&a3->m11;
  result = *(_QWORD *)a1;
  LOBYTE(a3) = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = *(_QWORD *)a1;
  v8 = 0LL;
  v9 = (__int64 *)a1;
  while ( v6 != v7 )
  {
    if ( v6 == result )
      goto LABEL_23;
    v10 = *(_QWORD *)(v8 + v9[1]);
    if ( v10
      && *(_BYTE *)(v10 + 52) != (_BYTE)a3
      && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)(v10 + 8), a2) )
    {
      v11 = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
              (D2DMatrixHelper *)*(unsigned int *)(v10 + 48),
              v10 + 8,
              a3);
      if ( v11 == v5 )
      {
        LOBYTE(a3) = 0;
      }
      else
      {
        D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
          (D2DMatrixHelper *)(v10 + 32),
          (const struct D2D_RECT_F *)(v10 + 8),
          &v20,
          (struct D2D_RECT_F *)v11);
        a2 = (const struct D2D_MATRIX_3X2_F *)p_m11;
        v13 = 50331648;
        LOBYTE(a3) = 0;
        v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*p_m11 - v20.m11)) & _xmm);
        if ( v14 > 0.0000011920929 )
          v13 = 0;
        v16 = v13 | 0x300;
        v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(p_m11[2] - v20.m21)) & _xmm);
        if ( v15 > 0.0000011920929 )
          v16 = v13;
        a1 = (gsl::details *)(v16 | 3);
        v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(p_m11[1] - v20.m12)) & _xmm);
        if ( v17 > 0.0000011920929 )
          a1 = (gsl::details *)v16;
        v19 = (unsigned int)a1 | 0x30000;
        v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(p_m11[3] - v20.m22)) & _xmm);
        if ( v18 > 0.0000011920929 )
          v19 = (unsigned int)a1;
        if ( v19 )
        {
          result = v12 & v19;
          v5 |= result;
          if ( v5 == 50529027 )
            break;
        }
      }
    }
    if ( v8 < 0 || (result = *v9, v6 == *v9) )
    {
LABEL_23:
      gsl::details::terminate(a1);
      JUMPOUT(0x18000DF06LL);
    }
    ++v6;
    v8 += 8LL;
  }
  *v3 = v5;
  return result;
}
