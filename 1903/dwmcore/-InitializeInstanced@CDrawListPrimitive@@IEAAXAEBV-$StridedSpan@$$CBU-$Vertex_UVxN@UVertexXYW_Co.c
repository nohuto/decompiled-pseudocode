/*
 * XREFs of ?InitializeInstanced@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_N@Z @ 0x1801BC1AC
 * Callers:
 *     ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x1801BC0C0 (-CreateInstanced@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@.c)
 * Callees:
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     ClampScaleFactor @ 0x1801BC070 (ClampScaleFactor.c)
 */

__int64 __fastcall CDrawListPrimitive::InitializeInstanced(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        float *a6)
{
  unsigned int v6; // edi
  unsigned __int64 v9; // rax
  _QWORD *v10; // r9
  const void *v11; // rdx
  size_t v12; // r8
  void *v13; // rcx
  unsigned int v14; // edx
  __int64 result; // rax
  _QWORD *v16; // r11
  __int64 v17; // r9
  int v18; // r8d
  int v19; // r10d
  _QWORD *v20; // rsi
  int v21; // eax
  __int64 v22; // rcx
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  __int64 v26; // rdi
  int v27; // ecx
  __int64 v28; // r10
  __int64 v29; // rax

  *(_WORD *)(a1 + 97) = 512;
  v6 = 0;
  *(_BYTE *)(a1 + 96) = 0;
  v9 = ClampScaleFactor(a6);
  v11 = (const void *)v10[1];
  v12 = 2LL * *v10;
  v13 = *(void **)(a1 + 56);
  *(_QWORD *)(a1 + 88) = v9;
  memcpy_0(v13, v11, v12);
  memcpy_0(*(void **)(a1 + 64), *(const void **)(a5 + 8), 48LL * *(_QWORD *)a5);
  v14 = *(_DWORD *)(a2 + 12);
  result = *(unsigned int *)(a1 + 16);
  v16 = *(_QWORD **)(a1 + 48);
  v17 = *(_QWORD *)(a1 + 32);
  v18 = 8 * result + 16;
  *(_OWORD *)(a1 + 72) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  if ( v14 )
  {
    v19 = 0;
    v20 = v16;
    do
    {
      v21 = v6 * *(_DWORD *)(a2 + 8);
      ++v6;
      v22 = *(_QWORD *)a2 + v21;
      result = v19;
      v19 += v18;
      *v20++ = *(_QWORD *)v22;
      *(_OWORD *)(result + v17) = *(_OWORD *)v22;
      *(_OWORD *)(result + v17 + 16) = *(_OWORD *)(v22 + 16);
      v23 = *(float *)(a1 + 76);
      *(float *)(a1 + 72) = fminf(*(float *)(a1 + 72), *(float *)v22);
      v24 = *(float *)(a1 + 80);
      *(float *)(a1 + 76) = fminf(v23, *(float *)(v22 + 4));
      v25 = *(float *)(a1 + 84);
      *(float *)(a1 + 80) = fmaxf(v24, *(float *)v22);
      *(float *)(a1 + 84) = fmaxf(v25, *(float *)(v22 + 4));
    }
    while ( v6 < v14 );
  }
  if ( v14 < *(_DWORD *)(a1 + 8) )
  {
    v26 = v14 - 1;
    v27 = v14 * v18;
    v28 = (int)(v18 * (v14 - 1));
    do
    {
      v29 = v14++;
      v16[v29] = v16[v26];
      result = v27;
      v27 += v18;
      *(_OWORD *)(result + v17) = *(_OWORD *)(v28 + v17);
      *(_OWORD *)(result + v17 + 16) = *(_OWORD *)(v28 + v17 + 16);
    }
    while ( v14 < *(_DWORD *)(a1 + 8) );
  }
  return result;
}
