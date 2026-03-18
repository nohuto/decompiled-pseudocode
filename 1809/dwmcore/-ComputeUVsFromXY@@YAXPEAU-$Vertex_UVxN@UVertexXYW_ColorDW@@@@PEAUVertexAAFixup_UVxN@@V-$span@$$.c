/*
 * XREFs of ?ComputeUVsFromXY@@YAXPEAU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@PEAUVertexAAFixup_UVxN@@V?$span@$$CBUTextureStageInfo@@$0?0@gsl@@@Z @ 0x180010988
 * Callers:
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800B9100 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 * Callees:
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x180010AB8 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUD2D_POINT_2F@@U2@@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

struct D2D_POINT_2F __fastcall ComputeUVsFromXY(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r11
  __int64 i; // rdi
  struct D2D_POINT_2F result; // rax
  Matrix3x3 *v8; // rcx
  struct D2D_POINT_2F v9; // xmm1_8
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  struct D2D_POINT_2F v14; // [rsp+60h] [rbp+30h] BYREF
  struct D2D_POINT_2F v15; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0LL;
  for ( i = a1; (unsigned int)v3 < *(_DWORD *)a3; v3 = (unsigned int)(v3 + 1) )
  {
    if ( (unsigned int)v3 >= *a3 )
    {
      gsl::details::terminate((gsl::details *)a1);
      JUMPOUT(0x180010AB0LL);
    }
    a1 = a3[1] + 56LL * (unsigned int)v3;
    if ( *(_BYTE *)(a1 + 53) )
    {
      Matrix3x3::TransformHomogeneousPoint((Matrix3x3 *)a1, (struct D2D_POINT_2F)&v14);
      result = Matrix3x3::TransformHomogeneousPoint(v8, (struct D2D_POINT_2F)&v15);
      if ( *(_BYTE *)(a1 + 52) )
      {
        v10 = *(float *)(a1 + 44);
        if ( v14.x > v10 )
          v11 = *(float *)(a1 + 44);
        else
          v11 = fmaxf(v14.x, *(float *)(a1 + 36));
        v14.x = v11;
        v12 = *(float *)(a1 + 48);
        if ( v14.y > v12 )
          v13 = *(float *)(a1 + 48);
        else
          v13 = fmaxf(v14.y, *(float *)(a1 + 40));
        v14.y = v13;
        if ( v15.x <= v10 )
          v10 = fmaxf(v15.x, *(float *)(a1 + 36));
        v15.x = v10;
        if ( v15.y <= v12 )
          v12 = fmaxf(v15.y, *(float *)(a1 + 40));
        v15.y = v12;
      }
      v9 = v15;
      *(struct D2D_POINT_2F *)(i + 8 * v3 + 16) = v14;
      *(struct D2D_POINT_2F *)(a2 + 8 * v3 + 16) = v9;
    }
    else
    {
      result = 0LL;
      *(_QWORD *)(i + 8 * v3 + 16) = 0LL;
      *(_QWORD *)(a2 + 8 * v3 + 16) = 0LL;
    }
  }
  return result;
}
