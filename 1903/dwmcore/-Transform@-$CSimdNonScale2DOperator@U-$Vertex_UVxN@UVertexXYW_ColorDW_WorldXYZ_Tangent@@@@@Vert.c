/*
 * XREFs of ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@T__m128@@1IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x1801B5170
 * Callers:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801B2A4C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801B2A4C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        __m128 *a1,
        __int64 a2,
        double a3,
        double a4,
        unsigned int a5,
        __m128 *a6)
{
  __m128 v6; // xmm4
  _OWORD *m128_f32; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v6 = _mm_add_ps(
         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 85), a1[1]), a1[2]),
         _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 0), *a1));
  *a6 = _mm_or_ps(
          _mm_andnot_ps(
            (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
            _mm_shuffle_ps(v6, v6, 228)),
          _mm_and_ps(
            _mm_shuffle_ps(*(__m128 *)&a4, *(__m128 *)&a4, 228),
            (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
  if ( a5 )
  {
    m128_f32 = (_OWORD *)a6[3].m128_f32;
    v8 = a2 - (_QWORD)a6;
    v9 = a5;
    do
    {
      *m128_f32 = *(_OWORD *)((char *)m128_f32 + v8 - 32);
      ++m128_f32;
      --v9;
    }
    while ( v9 );
  }
}
