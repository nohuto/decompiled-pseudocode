/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18000C5E8
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180064340 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2)
{
  __m128 *result; // rax
  unsigned int v3; // r10d
  unsigned int v5; // r14d
  __m128 v6; // xmm7
  __m128 v7; // xmm8
  unsigned int v8; // r8d
  __m128 v9; // xmm10
  __m128 v10; // xmm3
  __m128 *v11; // rbx
  __m128 *v12; // rdi
  int v13; // eax
  __m128 *v14; // rsi
  __m128 *v15; // r11
  __m128 *v16; // r9
  __m128 *v17; // rdx
  __m128 v18; // xmm4
  __m128 v19; // xmm0
  __m128 v20; // xmm6
  __m128 v21; // xmm1
  __int64 v22; // rcx
  signed __int64 v23; // r9
  __m128 v24; // xmm1
  signed __int64 v25; // r11
  __m128 *v26; // rax
  __m128 v27; // xmm5
  __m128 v28; // xmm0
  __m128 v29; // xmm4
  __m128 v30; // xmm1
  __m128 v31; // xmm0
  __m128 v32; // xmm3
  __int64 v33; // rcx
  signed __int64 v34; // rdx
  __m128 v35; // xmm1
  signed __int64 v36; // rsi
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__m128 *)&retaddr;
  v3 = 0;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v7 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)a2[4]), _mm_unpacklo_ps((__m128)a2[5], (__m128)a2[5]));
  v8 = *(_DWORD *)(a1 + 40) >> 1;
  v9 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[13], (__m128)0LL));
  if ( v5 )
  {
    do
    {
      v10 = (__m128)DirectX::g_XMOne;
      v11 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v3));
      v12 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      v13 = *(_DWORD *)(a1 + 64);
      v14 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v3 + 1) * v13));
      v15 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v3 * v13));
      v16 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v3 * *(_DWORD *)(a1 + 32)));
      v17 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)((v3 + 1) * *(_DWORD *)(a1 + 32)));
      v18 = *v16;
      v19 = _mm_sub_ps(_mm_shuffle_ps(*v11, DirectX::g_XMOne, 228), *v16);
      v20 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 85), v7), _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v6));
      if ( (_mm_movemask_ps(_mm_cmpeq_ps(v20, DirectX::g_XMZero)) & 3) != 3 )
      {
        v21 = _mm_mul_ps(v20, v20);
        v10.m128_f32[0] = 1.0 / fsqrt(v21.m128_f32[0] + _mm_shuffle_ps(v21, v21, 85).m128_f32[0]);
        v10 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), _mm_shuffle_ps(v18, v18, 170));
      }
      *v15 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v18, v18, 85), v7), v9),
                   _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v6)),
                 _mm_mul_ps(v10, v20)),
               _mm_or_ps(
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228)),
                 _mm_and_ps(
                   _mm_shuffle_ps(*v11, *v11, 228),
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
               228);
      if ( v10.m128_f32[0] > 1.0 && v16->m128_f32[3] == 0.0 )
        v10 = (__m128)(unsigned int)FLOAT_1_0;
      if ( v8 )
      {
        v22 = v8;
        v23 = (char *)v16 - (char *)v11;
        v24 = _mm_shuffle_ps(v10, v10, 0);
        v25 = (char *)v15 - (char *)v11;
        v26 = v11 + 1;
        do
        {
          *(__m128 *)((char *)v26 + v25) = _mm_add_ps(
                                             _mm_mul_ps(_mm_sub_ps(*v26, *(__m128 *)((char *)v26 + v23)), v24),
                                             *(__m128 *)((char *)v26 + v23));
          ++v26;
          --v22;
        }
        while ( v22 );
      }
      v27 = *v17;
      v28 = _mm_sub_ps(_mm_shuffle_ps(*v12, DirectX::g_XMOne, 228), *v17);
      v29 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v28, v28, 85), v7), _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v6));
      result = (__m128 *)(_mm_movemask_ps(_mm_cmpeq_ps(v29, DirectX::g_XMZero)) & 3);
      if ( (_BYTE)result == 3 )
      {
        v32 = (__m128)DirectX::g_XMOne;
      }
      else
      {
        v30 = _mm_mul_ps(v29, v29);
        v31 = (__m128)DirectX::g_XMOne;
        v31.m128_f32[0] = 1.0 / fsqrt(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0]);
        v32 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 170), _mm_shuffle_ps(v31, v31, 0));
      }
      *v14 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 85), v7), v9),
                   _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v6)),
                 _mm_mul_ps(v32, v29)),
               _mm_or_ps(
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228)),
                 _mm_and_ps(
                   _mm_shuffle_ps(*v12, *v12, 228),
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
               228);
      if ( v32.m128_f32[0] > 1.0 && v17->m128_f32[3] == 0.0 )
        v32 = (__m128)(unsigned int)FLOAT_1_0;
      if ( v8 )
      {
        v33 = v8;
        v34 = (char *)v17 - (char *)v12;
        v35 = _mm_shuffle_ps(v32, v32, 0);
        v36 = (char *)v14 - (char *)v12;
        result = v12 + 1;
        do
        {
          *(__m128 *)((char *)result + v36) = _mm_add_ps(
                                                _mm_mul_ps(_mm_sub_ps(*result, *(__m128 *)((char *)result + v34)), v35),
                                                *(__m128 *)((char *)result + v34));
          ++result;
          --v33;
        }
        while ( v33 );
      }
      v3 += 2;
    }
    while ( v3 < v5 );
  }
  return result;
}
