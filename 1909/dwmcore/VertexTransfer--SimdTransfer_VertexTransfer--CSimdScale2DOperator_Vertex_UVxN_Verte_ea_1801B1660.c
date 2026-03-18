/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801B1660
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800088D0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x1800094EC (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180009550 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180009EF0 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  __m128 v6; // xmm7
  __m128 v8; // xmm8
  unsigned int v9; // r12d
  __m128 v10; // xmm9
  __m128 v11; // xmm10
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r12d
  float v15; // xmm10_4
  __int128 v16; // xmm11
  unsigned int v17; // ebp
  unsigned int v18; // eax
  __m128 v19; // xmm0
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __m128 *v23; // rdx
  __m128 *v24; // rdi
  __int64 v25; // r15
  __int64 v26; // r13
  int v27; // r11d
  __int64 v28; // r10
  float v29; // xmm1_4
  DirectX::PackedVector *v30; // rcx
  __m128 v31; // xmm6
  __m128 v32; // xmm2
  __m128 v33; // xmm3
  DirectX::PackedVector *v34; // rcx
  DirectX::PackedVector *v35; // rcx
  DirectX::PackedVector *v36; // rcx
  int v38; // [rsp+20h] [rbp-F8h]
  int v39; // [rsp+20h] [rbp-F8h]
  __int128 v40; // [rsp+40h] [rbp-D8h] BYREF
  __m128 v41[9]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v42; // [rsp+120h] [rbp+8h]
  __int64 v43; // [rsp+128h] [rbp+10h]

  v6 = (__m128)DirectX::g_XMZero;
  v8 = (__m128)DirectX::g_XMZero;
  v9 = *(_DWORD *)(a1 + 40);
  v10 = (__m128)DirectX::g_XMZero;
  v11 = (__m128)*(unsigned int *)(a1 + 44);
  v12 = *(_QWORD *)a1;
  v13 = a1 + 8;
  v14 = v9 >> 1;
  v43 = v12;
  LODWORD(v15) = _mm_shuffle_ps(v11, v11, 0).m128_u32[0];
  if ( a3 )
  {
    v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v8 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]), _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]), _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v16 = _xmm;
  if ( a3 && a4 )
  {
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v40, v12, (__int64 *)v13, (CMILMatrix *)a3, a4);
    v16 = v40;
    v13 = a1 + 8;
  }
  v17 = 0;
  v18 = *(_DWORD *)(a1 + 20);
  v19 = (__m128)a2[4];
  v20 = (__m128)a2[5];
  v41[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v21 = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, v19), _mm_unpacklo_ps(v20, v20));
  v22 = (__m128)a2[13];
  v41[1] = v21;
  v41[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v22, (__m128)0LL));
  v42 = v18;
  if ( v18 )
  {
    do
    {
      v23 = (__m128 *)(*(_QWORD *)v13 + (int)(v17 * *(_DWORD *)(v13 + 8)));
      v24 = (__m128 *)(*(_QWORD *)v13 + (int)(*(_DWORD *)(v13 + 8) * (v17 + 1)));
      v25 = *(_QWORD *)(a1 + 56) + (int)(v17 * *(_DWORD *)(a1 + 64));
      v26 = *(_QWORD *)(a1 + 56) + (int)((v17 + 1) * *(_DWORD *)(a1 + 64));
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        v41,
        v23,
        (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v17 * *(_DWORD *)(a1 + 32))),
        *(double *)v23->m128_u64,
        v38,
        v14,
        (__m128 *)v25);
      v29 = (float)((float)(_mm_cvtepi32_ps(
                              _mm_xor_si128(
                                _mm_and_si128((__m128i)_mm_shuffle_ps(*v24, *v24, 255), g_MaskA8B8G8R8),
                                g_FlipA8R8G8B8)).m128_f32[0]
                          + 0.0)
                  * 1.0)
          * v15;
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        v41,
        v24,
        (__m128 *)(v28 + (int)((v17 + 1) * v27)),
        *(double *)v24->m128_u64,
        v39,
        v14,
        (__m128 *)v26);
      v31 = *(__m128 *)(v43 + 16 * ((unsigned __int64)v17 >> 1));
      v32 = v31;
      if ( a3 )
      {
        v32 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), v8), v10),
                _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v6));
        v33 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 255), v8), v10),
                  _mm_mul_ps(_mm_shuffle_ps(v31, v31, 170), v6)),
                DirectX::g_XMZero,
                228);
      }
      else
      {
        v33 = (__m128)_mm_unpackhi_pd((__m128d)v31, DirectX::g_XMZero);
      }
      *(__m128 *)(v25 + 16) = _mm_shuffle_ps(v32, DirectX::g_XMZero, 228);
      *(_OWORD *)(v25 + 32) = v16;
      *(__m128 *)(v26 + 16) = v33;
      *(_OWORD *)(v26 + 32) = v16;
      *(_WORD *)(v25 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v30, v29);
      *(_WORD *)(v25 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v34, v29);
      *(_WORD *)(v26 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v35, v29);
      LOWORD(v18) = DirectX::PackedVector::XMConvertFloatToHalf(v36, v29);
      v17 += 2;
      *(_WORD *)(v26 + 30) = v18;
      v13 = a1 + 8;
    }
    while ( v17 < v42 );
  }
  return v18;
}
