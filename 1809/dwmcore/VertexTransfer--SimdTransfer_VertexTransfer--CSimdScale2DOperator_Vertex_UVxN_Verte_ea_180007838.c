/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180007838
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180007B68 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x18000878C (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1800087F0 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18000918C (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 *     VertexTransfer::SimdBlend_2_ @ 0x18000929C (VertexTransfer--SimdBlend_2_.c)
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
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // r12
  int v27; // r11d
  int v28; // r10d
  int v29; // edx
  int v30; // r9d
  __int64 v31; // rcx
  int v32; // r11d
  int v33; // r10d
  int v34; // r9d
  DirectX::PackedVector *v35; // rcx
  __m128 v36; // xmm6
  __m128 v37; // xmm2
  __m128 v38; // xmm3
  DirectX::PackedVector *v39; // rcx
  DirectX::PackedVector *v40; // rcx
  DirectX::PackedVector *v41; // rcx
  int v43; // [rsp+20h] [rbp-F8h]
  int v44; // [rsp+20h] [rbp-F8h]
  __int128 v45; // [rsp+40h] [rbp-D8h] BYREF
  _OWORD v46[9]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v47; // [rsp+120h] [rbp+8h]
  __int64 v48; // [rsp+128h] [rbp+10h]

  v6 = (__m128)DirectX::g_XMZero;
  v8 = (__m128)DirectX::g_XMZero;
  v9 = *((_DWORD *)a1 + 10);
  v10 = (__m128)DirectX::g_XMZero;
  v11 = (__m128)*((unsigned int *)a1 + 11);
  v12 = *a1;
  v13 = a1 + 1;
  v14 = v9 >> 1;
  v48 = v12;
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
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v45, a4);
    v16 = v45;
    v13 = a1 + 1;
  }
  v17 = 0;
  v18 = *((_DWORD *)a1 + 5);
  v19 = (__m128)a2[4];
  v20 = (__m128)a2[5];
  v46[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v21 = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, v19), _mm_unpacklo_ps(v20, v20));
  v22 = (__m128)a2[13];
  v46[1] = v21;
  v46[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v22, (__m128)0LL));
  v47 = v18;
  if ( v18 )
  {
    do
    {
      v23 = *v13 + (int)(*((_DWORD *)v13 + 2) * (v17 + 1));
      v24 = (v17 + 1) * *((_DWORD *)a1 + 16);
      v25 = a1[7] + (int)(v17 * *((_DWORD *)a1 + 16));
      v26 = a1[7] + (int)v24;
      VertexTransfer::SimdBlend_2_(v24);
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v46,
        v29,
        v28 + v17 * v27,
        v30,
        v43,
        v14,
        v25);
      VertexTransfer::SimdBlend_2_(v31);
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v46,
        v23,
        v33 + (v17 + 1) * v32,
        v34,
        v44,
        v14,
        v26);
      v36 = *(__m128 *)(v48 + 16 * ((unsigned __int64)v17 >> 1));
      v37 = v36;
      if ( a3 )
      {
        v37 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v36, v36, 85), v8), v10),
                _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v6));
        v38 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v36, v36, 255), v8), v10),
                  _mm_mul_ps(_mm_shuffle_ps(v36, v36, 170), v6)),
                DirectX::g_XMZero,
                228);
      }
      else
      {
        v38 = (__m128)_mm_unpackhi_pd((__m128d)v36, DirectX::g_XMZero);
      }
      *(__m128 *)(v25 + 16) = _mm_shuffle_ps(v37, DirectX::g_XMZero, 228);
      *(_OWORD *)(v25 + 32) = v16;
      *(__m128 *)(v26 + 16) = v38;
      *(_OWORD *)(v26 + 32) = v16;
      *(_WORD *)(v25 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v35, v15);
      *(_WORD *)(v25 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v39, v15);
      *(_WORD *)(v26 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v40, v15);
      LOWORD(v18) = DirectX::PackedVector::XMConvertFloatToHalf(v41, v15);
      v17 += 2;
      *(_WORD *)(v26 + 30) = v18;
      v13 = a1 + 1;
    }
    while ( v17 < v47 );
  }
  return v18;
}
