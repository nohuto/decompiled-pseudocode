/*
 * XREFs of ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000DF10
 * Callers:
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x18000DD60 (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180181CB8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ApplyEdgeFlags @ 0x180185F68 (ApplyEdgeFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
        D2DMatrixHelper *this,
        float *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  float v3; // xmm4_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  bool v6; // cc
  int v7; // eax
  float v8; // xmm0_4
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int *v12; // r9
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // r10
  __int64 v17; // rdi
  _DWORD *v18; // r11
  float v20; // xmm0_4
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+0h] [rbp-40h] BYREF
  int v25; // [rsp+4h] [rbp-3Ch]
  int v26; // [rsp+8h] [rbp-38h]
  int v27; // [rsp+Ch] [rbp-34h]
  _DWORD v28[8]; // [rsp+10h] [rbp-30h] BYREF

  if ( (_DWORD)this == 50529027 || !(_DWORD)this )
  {
    return (unsigned int)this;
  }
  else
  {
    v3 = a2[1];
    v28[0] = 0x1000000;
    v28[1] = 0x2000000;
    v28[2] = 1;
    v28[3] = 2;
    v28[4] = 256;
    v28[5] = 512;
    v28[6] = 0x10000;
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3) & _xmm);
    v28[7] = 0x20000;
    if ( v4 >= 0.000081380211 || (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2[2]) & _xmm), v5 >= 0.000081380211) )
    {
      v20 = a2[2];
      v21 = 3;
      if ( v20 > 0.0 )
        v21 = 1;
      v24 = v21;
      v22 = 1;
      if ( v20 > 0.0 )
        v22 = 3;
      v26 = v22;
      v23 = 2;
      if ( v3 > 0.0 )
        v23 = 0;
      v25 = v23;
      v11 = 0;
      if ( v3 > 0.0 )
        v11 = 2;
    }
    else
    {
      v6 = *a2 <= 0.0;
      v7 = 2;
      v8 = a2[3];
      if ( *a2 > 0.0 )
        v7 = 0;
      v24 = v7;
      v9 = 0;
      if ( !v6 )
        v9 = 2;
      v26 = v9;
      v10 = 3;
      if ( v8 > 0.0 )
        v10 = 1;
      v25 = v10;
      v11 = 1;
      if ( v8 > 0.0 )
        v11 = 3;
    }
    v27 = v11;
    v12 = &v24;
    v13 = 0;
    v14 = 0LL;
    v15 = 4LL;
    do
    {
      v16 = 0LL;
      v17 = 2LL;
      v18 = &v28[2 * *v12];
      do
      {
        if ( ((unsigned int)this & *v18) != 0 )
          v13 |= v28[v14 + v16];
        ++v16;
        ++v18;
        --v17;
      }
      while ( v17 );
      ++v12;
      v14 += 2LL;
      --v15;
    }
    while ( v15 );
  }
  return v13;
}
