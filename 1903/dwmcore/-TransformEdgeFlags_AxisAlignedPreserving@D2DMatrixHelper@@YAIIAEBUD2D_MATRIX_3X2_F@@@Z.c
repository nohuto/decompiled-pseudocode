/*
 * XREFs of ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180010FA0
 * Callers:
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x180010E0C (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801AF5D8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ApplyEdgeFlags @ 0x1801BAA78 (ApplyEdgeFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
        D2DMatrixHelper *this,
        float *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v3; // r8d
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8; // ecx
  int v9; // eax
  bool v10; // cc
  float v11; // xmm0_4
  int v12; // eax
  int v13; // eax
  int *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r10
  __int64 v18; // rdi
  _DWORD *v19; // r11
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // [rsp+0h] [rbp-40h] BYREF
  int v26; // [rsp+4h] [rbp-3Ch]
  int v27; // [rsp+8h] [rbp-38h]
  int v28; // [rsp+Ch] [rbp-34h]
  _DWORD v29[8]; // [rsp+10h] [rbp-30h] BYREF

  v3 = (int)this;
  if ( (_DWORD)this != 50529027 && (_DWORD)this )
  {
    v4 = a2[1];
    v5 = a2[2];
    v29[0] = 0x1000000;
    v29[1] = 0x2000000;
    v29[2] = 1;
    v29[3] = 2;
    v29[4] = 256;
    v29[5] = 512;
    v29[6] = 0x10000;
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm);
    v29[7] = 0x20000;
    if ( v6 >= 0.000081380211 || (v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm), v7 >= 0.000081380211) )
    {
      v21 = 3;
      v22 = 3;
      if ( v5 <= 0.0 )
        v21 = 1;
      else
        v22 = 1;
      v25 = v22;
      v23 = 0;
      v27 = v21;
      if ( v4 <= 0.0 )
        v23 = 2;
      v26 = v23;
      v24 = 2;
      if ( v4 <= 0.0 )
        v24 = 0;
      v28 = v24;
    }
    else
    {
      v8 = 3;
      v9 = 2;
      v10 = *a2 <= 0.0;
      v11 = a2[3];
      if ( *a2 > 0.0 )
        v9 = 0;
      v25 = v9;
      v12 = 2;
      if ( v10 )
        v12 = 0;
      v27 = v12;
      v13 = 1;
      if ( v11 <= 0.0 )
      {
        v13 = 3;
        v8 = 1;
      }
      v28 = v8;
      v26 = v13;
    }
    LODWORD(this) = 0;
    v14 = &v25;
    v15 = 0LL;
    v16 = 4LL;
    do
    {
      v17 = 0LL;
      v18 = 2LL;
      v19 = &v29[2 * *v14];
      do
      {
        if ( (v3 & *v19) != 0 )
          LODWORD(this) = v29[v15 + v17] | (unsigned int)this;
        ++v17;
        ++v19;
        --v18;
      }
      while ( v18 );
      ++v14;
      v15 += 2LL;
      --v16;
    }
    while ( v16 );
  }
  return (unsigned int)this;
}
