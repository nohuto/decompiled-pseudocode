/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800CA85C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180064340 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@T__m128@@1IPEAU3@@Z @ 0x1800CA9B4 (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQX.c)
 *     VertexTransfer::SimdBlend_2_ @ 0x1800CAA20 (VertexTransfer--SimdBlend_2_.c)
 */

_UNKNOWN **__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2)
{
  _UNKNOWN **result; // rax
  unsigned int v3; // ebp
  unsigned int v4; // esi
  unsigned int v5; // r14d
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm2
  unsigned int v10; // ebp
  __int64 v11; // rbx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r8d
  int v19; // r9d
  __m128 v20[3]; // [rsp+30h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_DWORD *)(a1 + 40);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 20);
  v7 = (__m128)a2[5];
  v20[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v8 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps(v7, (__m128)0LL));
  v9 = (__m128)a2[13];
  v20[1] = v8;
  v10 = v3 >> 1;
  v20[2] = _mm_unpacklo_ps(
             _mm_unpacklo_ps((__m128)a2[12], (__m128)(unsigned int)FLOAT_1_0),
             _mm_unpacklo_ps(v9, (__m128)0LL));
  if ( v5 )
  {
    do
    {
      v11 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v4 + 1));
      VertexTransfer::SimdBlend_2_(*(_QWORD *)(a1 + 56) + (int)(v4 * *(_DWORD *)(a1 + 64)));
      VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        (unsigned int)v20,
        v12,
        v14,
        v15,
        v10,
        v13);
      VertexTransfer::SimdBlend_2_(v16);
      result = (_UNKNOWN **)VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
                              (unsigned int)v20,
                              v11,
                              v18,
                              v19,
                              v10,
                              v17);
      v4 += 2;
    }
    while ( v4 < v5 );
  }
  return result;
}
