/*
 * XREFs of ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x18001DECC
 * Callers:
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18008DBD0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 * Callees:
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x1800C21E4 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 */

_QWORD *__fastcall SplitVertex(__int64 a1, __int64 a2, unsigned int a3, float *a4, _QWORD *a5, _QWORD *a6, _QWORD *a7)
{
  __int64 v9; // r14
  float v10; // xmm6_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // xmm0_8
  _QWORD *v19; // rcx
  _QWORD *result; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  _DWORD v23[8]; // [rsp+38h] [rbp-21h] BYREF
  __int128 v24; // [rsp+58h] [rbp-1h]
  __int128 v25; // [rsp+68h] [rbp+Fh]
  int v26; // [rsp+78h] [rbp+1Fh]

  v9 = a3;
  *a5 = *(_QWORD *)a1;
  v10 = *a4;
  v11 = a4[1];
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*a4 - 1.0)) & _xmm);
  if ( v12 >= 0.0000011920929
    || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v11 - 1.0)) & _xmm), v13 >= 0.0000011920929) )
  {
    v14 = a6;
    v23[1] = 0;
    v23[2] = 0;
    v23[3] = 0;
    v23[4] = 0;
    v23[6] = 0;
    v23[7] = 0;
    v26 = 0;
    *(float *)v23 = v10;
    *(float *)&v23[5] = v11;
    v24 = _xmm;
    v25 = _xmm;
    Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(a1, a2, a3, (unsigned int)v23, (__int64)a6, (__int64)&a5);
    v18 = a5;
  }
  else
  {
    v14 = a6;
    *a6 = *(_QWORD *)a1;
    if ( a3 )
    {
      v15 = v14 + 2;
      v16 = a1 - (_QWORD)v14;
      v17 = a3;
      do
      {
        *v15 = *(_QWORD *)((char *)v15 + v16);
        ++v15;
        --v17;
      }
      while ( v17 );
    }
    v18 = *(_QWORD **)a2;
  }
  v19 = a7;
  *a7 = v18;
  *((_DWORD *)v14 + 2) = *(_DWORD *)(a1 + 8);
  *((_DWORD *)v14 + 3) = *(_DWORD *)(a1 + 12);
  *((_DWORD *)v19 + 2) = *(_DWORD *)(a2 + 8);
  result = (_QWORD *)*(unsigned int *)(a2 + 12);
  *((_DWORD *)v19 + 3) = (_DWORD)result;
  if ( (_DWORD)v9 )
  {
    result = v19 + 2;
    v21 = a2 - (_QWORD)v19;
    v22 = v9;
    do
    {
      *result = *(_QWORD *)((char *)result + v21);
      ++result;
      --v22;
    }
    while ( v22 );
  }
  return result;
}
