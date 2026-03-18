/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180007538
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180007B68 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x18000878C (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1800087F0 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18000918C (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  __m128 v6; // xmm7
  __m128 v8; // xmm8
  unsigned int v9; // ebp
  __m128 v10; // xmm9
  __int64 v11; // rax
  __int64 *v12; // rcx
  unsigned int v13; // ebp
  __int128 v14; // xmm10
  unsigned int v15; // r15d
  unsigned int v16; // eax
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  __m128 v20; // xmm2
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 v23; // r12
  int v24; // r11d
  int v25; // r10d
  int v26; // r9d
  DirectX::PackedVector *v27; // rcx
  __m128 v28; // xmm6
  __m128 v29; // xmm2
  __m128 v30; // xmm3
  DirectX::PackedVector *v31; // rcx
  DirectX::PackedVector *v32; // rcx
  DirectX::PackedVector *v33; // rcx
  int v35; // [rsp+20h] [rbp-E8h]
  int v36; // [rsp+20h] [rbp-E8h]
  __int128 v37; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v38[8]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v39; // [rsp+110h] [rbp+8h]
  __int64 v40; // [rsp+118h] [rbp+10h]

  v6 = (__m128)DirectX::g_XMZero;
  v8 = (__m128)DirectX::g_XMZero;
  v9 = *((_DWORD *)a1 + 10);
  v10 = (__m128)DirectX::g_XMZero;
  v11 = *a1;
  v12 = a1 + 1;
  v13 = v9 >> 1;
  v40 = v11;
  if ( a3 )
  {
    v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v8 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]), _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]), _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v14 = _xmm;
  if ( a3 && a4 )
  {
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v37, a4);
    v14 = v37;
    v12 = a1 + 1;
  }
  v15 = 0;
  v16 = *((_DWORD *)a1 + 5);
  v17 = (__m128)a2[4];
  v18 = (__m128)a2[5];
  v38[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v19 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, v17), _mm_unpacklo_ps(v18, v18));
  v20 = (__m128)a2[13];
  v38[1] = v19;
  v38[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v20, (__m128)0LL));
  v39 = v16;
  if ( v16 )
  {
    do
    {
      v21 = *v12 + (int)(*((_DWORD *)v12 + 2) * (v15 + 1));
      v22 = a1[7] + (int)(v15 * *((_DWORD *)a1 + 16));
      v23 = a1[7] + (int)((v15 + 1) * *((_DWORD *)a1 + 16));
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v38,
        *(_DWORD *)v12 + v15 * *((_DWORD *)v12 + 2),
        a1[3] + v15 * *((_DWORD *)a1 + 8),
        (_DWORD)a4,
        v35,
        v13,
        v22);
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v38,
        v21,
        v25 + (v15 + 1) * v24,
        v26,
        v36,
        v13,
        v23);
      v28 = *(__m128 *)(v40 + 16 * ((unsigned __int64)v15 >> 1));
      v29 = v28;
      if ( a3 )
      {
        v29 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v28, v28, 85), v8), v10),
                _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v6));
        v30 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v28, v28, 255), v8), v10),
                  _mm_mul_ps(_mm_shuffle_ps(v28, v28, 170), v6)),
                DirectX::g_XMZero,
                228);
      }
      else
      {
        v30 = (__m128)_mm_unpackhi_pd((__m128d)v28, DirectX::g_XMZero);
      }
      *(__m128 *)(v22 + 16) = _mm_shuffle_ps(v29, DirectX::g_XMZero, 228);
      *(_OWORD *)(v22 + 32) = v14;
      *(__m128 *)(v23 + 16) = v30;
      *(_OWORD *)(v23 + 32) = v14;
      *(_WORD *)(v22 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v27, 0.0);
      *(_WORD *)(v22 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v31, 0.0);
      *(_WORD *)(v23 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v32, 0.0);
      LOWORD(v16) = DirectX::PackedVector::XMConvertFloatToHalf(v33, 0.0);
      v15 += 2;
      *(_WORD *)(v23 + 30) = v16;
      v12 = a1 + 1;
    }
    while ( v15 < v39 );
  }
  return v16;
}
