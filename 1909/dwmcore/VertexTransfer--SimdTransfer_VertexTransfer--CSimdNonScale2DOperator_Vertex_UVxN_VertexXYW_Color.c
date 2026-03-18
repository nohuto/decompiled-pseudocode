/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180008D68
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800088D0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x1800094EC (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180009550 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  _UNKNOWN **v4; // rax
  __int64 *v5; // r13
  __int64 v6; // r14
  __m128 v10; // xmm7
  __m128 v11; // xmm8
  __m128 v12; // xmm9
  __m128 v13; // xmm10
  unsigned int v14; // ebp
  __int128 v15; // xmm14
  unsigned int v16; // r11d
  unsigned int v17; // r15d
  __m128 v18; // xmm11
  __m128 v19; // xmm12
  __m128 v20; // xmm13
  __m128 v21; // xmm8
  __m128 *v22; // rdi
  __m128 v23; // xmm4
  __m128 *v24; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // r10
  __m128 *v27; // r9
  __m128i v28; // xmm3
  __m128 v29; // xmm2
  __m128i v30; // xmm3
  __m128 v31; // xmm3
  _OWORD *v32; // rax
  char *v33; // rdi
  __m128 v34; // xmm4
  __m128i v35; // xmm3
  __m128 v36; // xmm2
  __m128i v37; // xmm3
  __m128 v38; // xmm3
  __m128 v39; // xmm1
  _OWORD *m128_f32; // rax
  signed __int64 v41; // r8
  __m128 v42; // xmm6
  __m128 v43; // xmm2
  __m128 v44; // xmm3
  unsigned __int16 v45; // ax
  __int64 v46; // r10
  DirectX::PackedVector *v47; // rcx
  unsigned __int16 v48; // ax
  __int64 v49; // r10
  DirectX::PackedVector *v50; // rcx
  unsigned __int16 v51; // ax
  __int64 v52; // r9
  DirectX::PackedVector *v53; // rcx
  int v54; // r11d
  __int64 v55; // r9
  __int128 v57; // [rsp+30h] [rbp-B8h] BYREF
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h] BYREF

  v4 = &retaddr;
  v5 = a1 + 1;
  v6 = *a1;
  v10 = (__m128)DirectX::g_XMZero;
  v11 = (__m128)*((unsigned int *)a1 + 11);
  v12 = (__m128)DirectX::g_XMZero;
  v13 = (__m128)DirectX::g_XMZero;
  v14 = *((_DWORD *)a1 + 10) >> 1;
  if ( a3 )
  {
    v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v12 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]), _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v13 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]), _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v15 = _xmm;
  if ( a3 && a4 )
  {
    LOWORD(v4) = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v57, a4);
    v15 = v57;
  }
  v16 = 0;
  v17 = *((_DWORD *)a1 + 5);
  v18 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v19 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[5], (__m128)0LL));
  v20 = _mm_unpacklo_ps(
          _mm_unpacklo_ps((__m128)a2[12], (__m128)(unsigned int)FLOAT_1_0),
          _mm_unpacklo_ps((__m128)a2[13], (__m128)0LL));
  if ( v17 )
  {
    v21 = _mm_shuffle_ps(v11, v11, 0);
    do
    {
      v22 = (__m128 *)(*v5 + (int)(v16 * *((_DWORD *)v5 + 2)));
      v23 = *v22;
      v24 = (__m128 *)(*v5 + (int)(*((_DWORD *)v5 + 2) * (v16 + 1)));
      v25 = (v16 + 1) * *((_DWORD *)a1 + 16);
      v26 = a1[7] + (int)(v16 * *((_DWORD *)a1 + 16));
      v27 = (__m128 *)(a1[7] + (int)v25);
      v28 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(v23, v23, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                _mm_or_ps(
                  _mm_and_ps(
                    _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228),
                    (__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask),
                  _mm_andnot_ps((__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask, v21))));
      v29 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v22, *v22, 85), v19), v20),
              _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v18));
      v30 = _mm_packs_epi32(v28, v28);
      v31 = (__m128)_mm_packus_epi16(v30, v30);
      *(__m128 *)v26 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_shuffle_ps(v29, v29, 228)),
                         _mm_and_ps(
                           _mm_shuffle_ps(v31, v31, 228),
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v14 )
      {
        v32 = (_OWORD *)(v26 + 48);
        v25 = v14;
        v33 = (char *)v22 - v26;
        do
        {
          *v32 = *(_OWORD *)((char *)v32 + (_QWORD)v33 - 32);
          ++v32;
          --v25;
        }
        while ( v25 );
      }
      v34 = *v24;
      v35 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(v34, v34, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                _mm_or_ps(
                  _mm_and_ps(
                    _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228),
                    (__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask),
                  _mm_andnot_ps((__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask, v21))));
      v36 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v24, *v24, 85), v19), v20),
              _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v18));
      v37 = _mm_packs_epi32(v35, v35);
      v38 = (__m128)_mm_packus_epi16(v37, v37);
      v39 = _mm_or_ps(
              _mm_andnot_ps(
                (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                _mm_shuffle_ps(v36, v36, 228)),
              _mm_and_ps(
                _mm_shuffle_ps(v38, v38, 228),
                (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      *v27 = v39;
      if ( v14 )
      {
        m128_f32 = (_OWORD *)v27[3].m128_f32;
        v25 = v14;
        v41 = (char *)v24 - (char *)v27;
        do
        {
          *m128_f32 = *(_OWORD *)((char *)m128_f32 + v41 - 32);
          ++m128_f32;
          --v25;
        }
        while ( v25 );
      }
      v42 = *(__m128 *)(v6 + 16 * ((unsigned __int64)v16 >> 1));
      v43 = v42;
      if ( a3 )
      {
        v43 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v42, v42, 85), v12), v13),
                _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v10));
        v44 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v42, v42, 255), v12), v13),
                  _mm_mul_ps(_mm_shuffle_ps(v42, v42, 170), v10)),
                DirectX::g_XMZero,
                228);
      }
      else
      {
        v44 = (__m128)_mm_unpackhi_pd((__m128d)v42, DirectX::g_XMZero);
      }
      *(__m128 *)(v26 + 16) = _mm_shuffle_ps(v43, DirectX::g_XMZero, 228);
      *(_OWORD *)(v26 + 32) = v15;
      v27[1] = v44;
      v27[2] = (__m128)v15;
      v45 = DirectX::PackedVector::XMConvertFloatToHalf((DirectX::PackedVector *)v25, v39.m128_f32[0]);
      *(_WORD *)(v46 + 28) = v45;
      v48 = DirectX::PackedVector::XMConvertFloatToHalf(v47, v39.m128_f32[0]);
      *(_WORD *)(v49 + 30) = v48;
      v51 = DirectX::PackedVector::XMConvertFloatToHalf(v50, v39.m128_f32[0]);
      *(_WORD *)(v52 + 28) = v51;
      LOWORD(v4) = DirectX::PackedVector::XMConvertFloatToHalf(v53, v39.m128_f32[0]);
      v16 = v54 + 2;
      *(_WORD *)(v55 + 30) = (_WORD)v4;
    }
    while ( v16 < v17 );
  }
  return (__int16)v4;
}
