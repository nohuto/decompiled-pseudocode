/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180007448
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800088D0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x1800094EC (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180009550 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180009EF0 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 *     VertexTransfer::SimdBlend_2_ @ 0x1800CAA20 (VertexTransfer--SimdBlend_2_.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  __m128 v6; // xmm7
  __m128 v8; // xmm8
  unsigned int v9; // ebp
  __m128 v10; // xmm9
  __m128 v11; // xmm10
  __int64 v12; // rax
  __int64 *v13; // rcx
  unsigned int v14; // ebp
  float v15; // xmm10_4
  __int128 v16; // xmm11
  unsigned int v17; // r15d
  unsigned int v18; // eax
  __m128 v19; // xmm0
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // r12
  int v26; // r11d
  int v27; // r10d
  int v28; // edx
  int v29; // r9d
  int v30; // r11d
  int v31; // r10d
  int v32; // r9d
  DirectX::PackedVector *v33; // rcx
  __m128 v34; // xmm6
  __m128 v35; // xmm2
  __m128 v36; // xmm3
  DirectX::PackedVector *v37; // rcx
  DirectX::PackedVector *v38; // rcx
  DirectX::PackedVector *v39; // rcx
  int v41; // [rsp+20h] [rbp-F8h]
  int v42; // [rsp+20h] [rbp-F8h]
  __int128 v43; // [rsp+40h] [rbp-D8h] BYREF
  _OWORD v44[9]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v45; // [rsp+120h] [rbp+8h]
  __int64 v46; // [rsp+128h] [rbp+10h]

  v6 = (__m128)DirectX::g_XMZero;
  v8 = (__m128)DirectX::g_XMZero;
  v9 = *((_DWORD *)a1 + 10);
  v10 = (__m128)DirectX::g_XMZero;
  v11 = (__m128)*((unsigned int *)a1 + 11);
  v12 = *a1;
  v13 = a1 + 1;
  v14 = v9 >> 1;
  v46 = v12;
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
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v43, a4);
    v16 = v43;
    v13 = a1 + 1;
  }
  v17 = 0;
  v18 = *((_DWORD *)a1 + 5);
  v19 = (__m128)a2[4];
  v20 = (__m128)a2[5];
  v44[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v21 = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, v19), _mm_unpacklo_ps(v20, v20));
  v22 = (__m128)a2[13];
  v44[1] = v21;
  v44[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v22, (__m128)0LL));
  v45 = v18;
  if ( v18 )
  {
    do
    {
      v23 = *v13 + (int)(*((_DWORD *)v13 + 2) * (v17 + 1));
      v24 = a1[7] + (int)(v17 * *((_DWORD *)a1 + 16));
      v25 = a1[7] + (int)((v17 + 1) * *((_DWORD *)a1 + 16));
      VertexTransfer::SimdBlend_2_();
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v44,
        v28,
        v27 + v17 * v26,
        v29,
        v41,
        v14,
        v24);
      VertexTransfer::SimdBlend_2_();
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v44,
        v23,
        v31 + (v17 + 1) * v30,
        v32,
        v42,
        v14,
        v25);
      v34 = *(__m128 *)(v46 + 16 * ((unsigned __int64)v17 >> 1));
      v35 = v34;
      if ( a3 )
      {
        v35 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v34, v34, 85), v8), v10),
                _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v6));
        v36 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v34, v34, 255), v8), v10),
                  _mm_mul_ps(_mm_shuffle_ps(v34, v34, 170), v6)),
                DirectX::g_XMZero,
                228);
      }
      else
      {
        v36 = (__m128)_mm_unpackhi_pd((__m128d)v34, DirectX::g_XMZero);
      }
      *(__m128 *)(v24 + 16) = _mm_shuffle_ps(v35, DirectX::g_XMZero, 228);
      *(_OWORD *)(v24 + 32) = v16;
      *(__m128 *)(v25 + 16) = v36;
      *(_OWORD *)(v25 + 32) = v16;
      *(_WORD *)(v24 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v33, v15);
      *(_WORD *)(v24 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v37, v15);
      *(_WORD *)(v25 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v38, v15);
      LOWORD(v18) = DirectX::PackedVector::XMConvertFloatToHalf(v39, v15);
      v17 += 2;
      *(_WORD *)(v25 + 30) = v18;
      v13 = a1 + 1;
    }
    while ( v17 < v45 );
  }
  return v18;
}
