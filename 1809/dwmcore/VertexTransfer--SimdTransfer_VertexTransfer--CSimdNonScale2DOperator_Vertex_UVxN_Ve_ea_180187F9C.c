/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180187F9C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180007B68 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x18000878C (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1800087F0 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18018986C (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Vert.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
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
  unsigned int v17; // r13d
  unsigned int v18; // ebp
  __m128 v19; // xmm2
  __m128 v20; // xmm3
  __m128 v21; // xmm2
  __m128 *v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r15
  int v25; // r10d
  int v26; // r11d
  int v27; // r9d
  float v28; // xmm1_4
  DirectX::PackedVector *v29; // rcx
  __m128 v30; // xmm6
  __m128 v31; // xmm2
  __m128 v32; // xmm3
  DirectX::PackedVector *v33; // rcx
  DirectX::PackedVector *v34; // rcx
  DirectX::PackedVector *v35; // rcx
  int v37; // [rsp+20h] [rbp-E8h]
  int v38; // [rsp+20h] [rbp-E8h]
  __int128 v39; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v40[9]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+110h] [rbp+8h]

  v6 = (__m128)DirectX::g_XMZero;
  v8 = (__m128)DirectX::g_XMZero;
  v9 = *(_DWORD *)(a1 + 40);
  v10 = (__m128)DirectX::g_XMZero;
  v11 = (__m128)*(unsigned int *)(a1 + 44);
  v12 = *(_QWORD *)a1;
  v13 = a1 + 8;
  v14 = v9 >> 1;
  v41 = v12;
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
    LOWORD(v12) = (unsigned __int16)CalculateTBNFrameFrom3Vertices(
                                      (struct D2DQuaternion *)&v39,
                                      v12,
                                      (__int64 *)v13,
                                      (CMILMatrix *)a3,
                                      a4);
    v16 = v39;
    v13 = a1 + 8;
  }
  v17 = *(_DWORD *)(a1 + 20);
  v18 = 0;
  v19 = (__m128)a2[5];
  v40[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v20 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps(v19, (__m128)0LL));
  v21 = (__m128)a2[13];
  v40[1] = v20;
  for ( v40[2] = _mm_unpacklo_ps(
                   _mm_unpacklo_ps((__m128)a2[12], (__m128)LODWORD(FLOAT_1_0)),
                   _mm_unpacklo_ps(v21, (__m128)0LL)); v18 < v17; v13 = a1 + 8 )
  {
    v22 = (__m128 *)(*(_QWORD *)v13 + (int)(*(_DWORD *)(v13 + 8) * (v18 + 1)));
    v23 = *(_QWORD *)(a1 + 56) + (int)(v18 * *(_DWORD *)(a1 + 64));
    v24 = *(_QWORD *)(a1 + 56) + (int)((v18 + 1) * *(_DWORD *)(a1 + 64));
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v40,
      *(_DWORD *)v13 + v18 * *(_DWORD *)(v13 + 8),
      *(_QWORD *)(a1 + 24) + v18 * *(_DWORD *)(a1 + 32),
      *(_QWORD *)(a1 + 24),
      v37,
      v14,
      v23);
    v28 = (float)((float)(_mm_cvtepi32_ps(
                            _mm_xor_si128(
                              _mm_and_si128((__m128i)_mm_shuffle_ps(*v22, *v22, 255), g_MaskA8B8G8R8),
                              g_FlipA8R8G8B8)).m128_f32[0]
                        + 0.0)
                * 1.0)
        * v15;
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v40,
      (_DWORD)v22,
      v27 + v26 * v25,
      v27,
      v38,
      v14,
      v24);
    v30 = *(__m128 *)(v41 + 16 * ((unsigned __int64)v18 >> 1));
    v31 = v30;
    if ( a3 )
    {
      v31 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v30, v30, 85), v8), v10),
              _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v6));
      v32 = _mm_shuffle_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v30, v30, 255), v8), v10),
                _mm_mul_ps(_mm_shuffle_ps(v30, v30, 170), v6)),
              DirectX::g_XMZero,
              228);
    }
    else
    {
      v32 = (__m128)_mm_unpackhi_pd((__m128d)v30, DirectX::g_XMZero);
    }
    *(__m128 *)(v23 + 16) = _mm_shuffle_ps(v31, DirectX::g_XMZero, 228);
    *(_OWORD *)(v23 + 32) = v16;
    *(__m128 *)(v24 + 16) = v32;
    *(_OWORD *)(v24 + 32) = v16;
    *(_WORD *)(v23 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v29, v28);
    *(_WORD *)(v23 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v33, v28);
    *(_WORD *)(v24 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v34, v28);
    LOWORD(v12) = DirectX::PackedVector::XMConvertFloatToHalf(v35, v28);
    v18 += 2;
    *(_WORD *)(v24 + 30) = v12;
  }
  return v12;
}
