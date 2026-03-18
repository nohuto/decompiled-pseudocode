/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180188318
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18003BBF0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     VertexTransfer::SimdBlend_2_ @ 0x18000929C (VertexTransfer--SimdBlend_2_.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU3@@Z @ 0x1801898D8 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEB.c)
 */

_UNKNOWN **__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2)
{
  _UNKNOWN **result; // rax
  unsigned int v3; // r15d
  unsigned int v4; // r12d
  unsigned int v5; // r13d
  __m128 v7; // xmm0
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm2
  __m128 v11; // xmm7
  unsigned int v12; // r12d
  double v13; // xmm7_8
  int v14; // edi
  __int64 v15; // rbx
  double *v16; // rbp
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // rax
  int v21; // r9d
  int v22; // [rsp+20h] [rbp-98h]
  int v23; // [rsp+20h] [rbp-98h]
  __m128 v24[3]; // [rsp+40h] [rbp-78h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = *(_DWORD *)(a1 + 20);
  v7 = (__m128)a2[4];
  v8 = (__m128)a2[5];
  v24[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v9 = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, v7), _mm_unpacklo_ps(v8, v8));
  v10 = (__m128)a2[13];
  v24[1] = v9;
  v11 = (__m128)*(unsigned int *)(a1 + 44);
  v12 = v4 >> 1;
  v24[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v10, (__m128)0LL));
  *(_QWORD *)&v13 = _mm_shuffle_ps(v11, v11, 0).m128_u64[0];
  if ( v5 )
  {
    do
    {
      v14 = *(_DWORD *)(a1 + 32);
      v15 = *(_QWORD *)(a1 + 24);
      v16 = (double *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      VertexTransfer::SimdBlend_2_(*(double *)(*(_QWORD *)(a1 + 8) + (int)(v3 * *(_DWORD *)(a1 + 16))), v13);
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        (unsigned int)v24,
        v17,
        v15 + v3 * v14,
        v19,
        v22,
        v12,
        v18);
      VertexTransfer::SimdBlend_2_(*v16, v13);
      result = (_UNKNOWN **)VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
                              (unsigned int)v24,
                              (_DWORD)v16,
                              (unsigned int)v15 + (v3 + 1) * v14,
                              v21,
                              v23,
                              v12,
                              v20);
      v3 += 2;
    }
    while ( v3 < v5 );
  }
  return result;
}
