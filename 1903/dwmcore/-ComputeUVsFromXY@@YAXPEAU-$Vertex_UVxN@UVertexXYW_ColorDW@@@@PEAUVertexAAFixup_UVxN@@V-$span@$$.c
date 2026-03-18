/*
 * XREFs of ?ComputeUVsFromXY@@YAXPEAU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@PEAUVertexAAFixup_UVxN@@V?$span@$$CBUTextureStageInfo@@$0?0@gsl@@@Z @ 0x180015390
 * Callers:
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x18002BE80 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 * Callees:
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x1800154D4 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUD2D_POINT_2F@@U2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

struct D2D_POINT_2F __fastcall ComputeUVsFromXY(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r11
  __int64 i; // rdi
  Matrix3x3 *v7; // rcx
  struct D2D_POINT_2F result; // rax
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  struct D2D_POINT_2F v13; // xmm1_8
  struct D2D_POINT_2F v14; // [rsp+60h] [rbp+30h] BYREF
  struct D2D_POINT_2F v15; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0LL;
  for ( i = a1; (unsigned int)v3 < *(_DWORD *)a3; v3 = (unsigned int)(v3 + 1) )
  {
    if ( (unsigned __int64)(unsigned int)v3 >= *a3 )
    {
      `gsl::details::get_terminate_handler'::`2'::handler((gsl::details *)a1);
      __debugbreak();
    }
    a1 = a3[1] + 56LL * (unsigned int)v3;
    if ( *(_BYTE *)(a1 + 53) )
    {
      Matrix3x3::TransformHomogeneousPoint((Matrix3x3 *)a1, (struct D2D_POINT_2F)&v14);
      result = Matrix3x3::TransformHomogeneousPoint(v7, (struct D2D_POINT_2F)&v15);
      if ( *(_BYTE *)(a1 + 52) )
      {
        v9 = *(float *)(a1 + 44);
        if ( v14.x > v9 )
          v10 = *(float *)(a1 + 44);
        else
          v10 = fmaxf(v14.x, *(float *)(a1 + 36));
        v14.x = v10;
        v11 = *(float *)(a1 + 48);
        if ( v14.y > v11 )
          v12 = *(float *)(a1 + 48);
        else
          v12 = fmaxf(v14.y, *(float *)(a1 + 40));
        v14.y = v12;
        if ( v15.x <= v9 )
          v9 = fmaxf(v15.x, *(float *)(a1 + 36));
        v15.x = v9;
        if ( v15.y <= v11 )
          v11 = fmaxf(v15.y, *(float *)(a1 + 40));
        v15.y = v11;
      }
      v13 = v15;
      *(struct D2D_POINT_2F *)(i + 8 * v3 + 16) = v14;
      *(struct D2D_POINT_2F *)(a2 + 8 * v3 + 16) = v13;
    }
    else
    {
      *(_DWORD *)(i + 8 * v3 + 16) = 0;
      *(_DWORD *)(i + 8 * v3 + 20) = 0;
      *(_DWORD *)(a2 + 8 * v3 + 16) = 0;
      *(_DWORD *)(a2 + 8 * v3 + 20) = 0;
    }
  }
  return result;
}
