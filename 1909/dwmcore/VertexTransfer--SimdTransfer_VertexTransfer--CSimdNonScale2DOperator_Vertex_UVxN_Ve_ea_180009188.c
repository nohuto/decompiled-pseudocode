/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180009188
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800088D0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x1800094EC (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180009550 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  _UNKNOWN **v4; // rax
  __int64 *v5; // r15
  __int64 v6; // rbp
  __m128 v10; // xmm7
  __m128 v11; // xmm8
  __m128 v12; // xmm9
  unsigned int v13; // esi
  __int128 v14; // xmm13
  __m128 v15; // xmm12
  unsigned int v16; // r12d
  __m128 v17; // xmm10
  __m128 v18; // xmm11
  __m128 v19; // xmm2
  unsigned int v20; // edi
  __m128 i; // xmm12
  __m128 *v22; // r10
  __m128 *v23; // r8
  unsigned __int64 v24; // rcx
  __int64 v25; // r11
  __m128 v26; // xmm2
  __m128 *v27; // r9
  _OWORD *v28; // rax
  char *v29; // r10
  __m128 v30; // xmm3
  __m128 v31; // xmm2
  __m128 v32; // xmm1
  _OWORD *m128_f32; // rax
  signed __int64 v34; // r8
  __m128 v35; // xmm6
  __m128 v36; // xmm2
  __m128 v37; // xmm3
  unsigned __int16 v38; // ax
  __int64 v39; // r11
  DirectX::PackedVector *v40; // rcx
  unsigned __int16 v41; // ax
  __int64 v42; // r11
  DirectX::PackedVector *v43; // rcx
  unsigned __int16 v44; // ax
  __int64 v45; // r9
  DirectX::PackedVector *v46; // rcx
  __int64 v47; // r9
  __int128 v49; // [rsp+30h] [rbp-A8h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  v4 = &retaddr;
  v5 = a1 + 1;
  v6 = *a1;
  v10 = (__m128)DirectX::g_XMZero;
  v11 = (__m128)DirectX::g_XMZero;
  v12 = (__m128)DirectX::g_XMZero;
  v13 = *((_DWORD *)a1 + 10) >> 1;
  if ( a3 )
  {
    v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v11 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]), _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v12 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]), _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v14 = _xmm;
  if ( a3 && a4 )
  {
    LOWORD(v4) = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v49, a4);
    v14 = v49;
  }
  v15 = (__m128)a2[12];
  v16 = *((_DWORD *)a1 + 5);
  v17 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v18 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[5], (__m128)0LL));
  v19 = (__m128)a2[13];
  v20 = 0;
  for ( i = _mm_unpacklo_ps(_mm_unpacklo_ps(v15, (__m128)(unsigned int)FLOAT_1_0), _mm_unpacklo_ps(v19, (__m128)0LL));
        v20 < v16;
        *(_WORD *)(v47 + 30) = (_WORD)v4 )
  {
    v22 = (__m128 *)(*v5 + (int)(v20 * *((_DWORD *)v5 + 2)));
    v23 = (__m128 *)(*v5 + (int)(*((_DWORD *)v5 + 2) * (v20 + 1)));
    v24 = (v20 + 1) * *((_DWORD *)a1 + 16);
    v25 = a1[7] + (int)(v20 * *((_DWORD *)a1 + 16));
    v26 = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v22, *v22, 85), v18), i),
            _mm_mul_ps(_mm_shuffle_ps(*v22, *v22, 0), v17));
    v27 = (__m128 *)(a1[7] + (int)v24);
    *(__m128 *)v25 = _mm_or_ps(
                       _mm_andnot_ps(
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                         _mm_shuffle_ps(v26, v26, 228)),
                       _mm_and_ps(
                         _mm_shuffle_ps(*v22, *v22, 228),
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
    if ( v13 )
    {
      v28 = (_OWORD *)(v25 + 48);
      v24 = v13;
      v29 = (char *)v22 - v25;
      do
      {
        *v28 = *(_OWORD *)((char *)v28 + (_QWORD)v29 - 32);
        ++v28;
        --v24;
      }
      while ( v24 );
    }
    v30 = *v23;
    v31 = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v30, v30, 85), v18), i),
            _mm_mul_ps(_mm_shuffle_ps(*v23, *v23, 0), v17));
    v32 = _mm_or_ps(
            _mm_andnot_ps(
              (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
              _mm_shuffle_ps(v31, v31, 228)),
            _mm_and_ps(
              _mm_shuffle_ps(v30, v30, 228),
              (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
    *v27 = v32;
    if ( v13 )
    {
      m128_f32 = (_OWORD *)v27[3].m128_f32;
      v24 = v13;
      v34 = (char *)v23 - (char *)v27;
      do
      {
        *m128_f32 = *(_OWORD *)((char *)m128_f32 + v34 - 32);
        ++m128_f32;
        --v24;
      }
      while ( v24 );
    }
    v35 = *(__m128 *)(v6 + 16 * ((unsigned __int64)v20 >> 1));
    v36 = v35;
    if ( a3 )
    {
      v36 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v35, v35, 85), v11), v12),
              _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0), v10));
      v37 = _mm_shuffle_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v35, v35, 255), v11), v12),
                _mm_mul_ps(_mm_shuffle_ps(v35, v35, 170), v10)),
              DirectX::g_XMZero,
              228);
    }
    else
    {
      v37 = (__m128)_mm_unpackhi_pd((__m128d)v35, DirectX::g_XMZero);
    }
    *(__m128 *)(v25 + 16) = _mm_shuffle_ps(v36, DirectX::g_XMZero, 228);
    *(_OWORD *)(v25 + 32) = v14;
    v27[1] = v37;
    v27[2] = (__m128)v14;
    v38 = DirectX::PackedVector::XMConvertFloatToHalf((DirectX::PackedVector *)v24, v32.m128_f32[0]);
    *(_WORD *)(v39 + 28) = v38;
    v41 = DirectX::PackedVector::XMConvertFloatToHalf(v40, v32.m128_f32[0]);
    *(_WORD *)(v42 + 30) = v41;
    v44 = DirectX::PackedVector::XMConvertFloatToHalf(v43, v32.m128_f32[0]);
    *(_WORD *)(v45 + 28) = v44;
    LOWORD(v4) = DirectX::PackedVector::XMConvertFloatToHalf(v46, v32.m128_f32[0]);
    v20 += 2;
  }
  return (__int16)v4;
}
