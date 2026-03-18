/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BDCF0
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18005B8B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU3@@Z @ 0x1800BDEC4 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEB.c)
 */

_UNKNOWN **__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        int a4)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // r13d
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm3
  __m128 v12; // xmm2
  unsigned int v13; // r15d
  int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // rbp
  int v17; // r11d
  int v18; // r10d
  int v19; // r9d
  int v20; // [rsp+20h] [rbp-88h]
  int v21; // [rsp+20h] [rbp-88h]
  __m128 v22[3]; // [rsp+40h] [rbp-68h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 40);
  v7 = *(_DWORD *)(a1 + 20);
  v9 = (__m128)a2[4];
  v10 = (__m128)a2[5];
  v22[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v11 = _mm_unpacklo_ps(_mm_unpacklo_ps(v9, v9), _mm_unpacklo_ps(v10, v10));
  v12 = (__m128)a2[13];
  v22[1] = v11;
  v13 = v6 >> 1;
  v22[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v12, (__m128)0LL));
  if ( v7 )
  {
    do
    {
      v14 = *(_DWORD *)(a1 + 64);
      v15 = *(_QWORD *)(a1 + 56);
      v16 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v5 + 1));
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        (unsigned int)v22,
        *(_DWORD *)(a1 + 8) + v5 * *(_DWORD *)(a1 + 16),
        *(_QWORD *)(a1 + 24) + v5 * *(_DWORD *)(a1 + 32),
        a4,
        v20,
        v13,
        v15 + (int)(v5 * v14));
      result = (_UNKNOWN **)VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
                              (unsigned int)v22,
                              v16,
                              v18 + (v5 + 1) * v17,
                              v19,
                              v21,
                              v13,
                              v15 + (int)((v5 + 1) * v14));
      v5 += 2;
    }
    while ( v5 < v7 );
  }
  return result;
}
