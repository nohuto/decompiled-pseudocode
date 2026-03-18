/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180064340
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18003B430 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x1800624C8 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z.c)
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1800638D0 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry.c)
 * Callees:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18000A020 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18000A920 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x18000AAF0 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18000C5E8 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_18000C5E8.c)
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180064938 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180064D58 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180064D58.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18008C050 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BF620 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800BF620.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800CA85C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800CA85C.c)
 *     ?IsCloseRealMatrixEpsilon@@YA_NMM@Z @ 0x1800ECB50 (-IsCloseRealMatrixEpsilon@@YA_NMM@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B14D4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801B14D4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B19E0 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B1C7C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B1CF8 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B1DD4 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B215C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B2214 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B2328 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float a4,
        __int64 *a5)
{
  int v5; // r10d
  __int64 v6; // rdi
  int v7; // esi
  __int64 v8; // r9
  int v9; // r12d
  int v11; // ecx
  __int64 v12; // r13
  int v13; // eax
  char v14; // r8
  char v15; // r9
  __int64 v16; // r11
  __m128 v17; // xmm7
  __m128 v18; // xmm8
  float v19; // xmm5_4
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __m128 v22; // xmm6
  __m128 v23; // xmm3
  float v24; // xmm0_4
  unsigned int v25; // r10d
  float v26; // xmm1_4
  unsigned int v27; // r10d
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128 v30; // xmm6
  int v31; // edi
  int v32; // edx
  int v33; // ebx
  int v34; // r14d
  __int64 v35; // rsi
  __m128 *v36; // r8
  __m128 *v37; // r9
  __m128 *v38; // rcx
  __m128 *v39; // r11
  __m128 v40; // xmm2
  _OWORD *m128_f32; // rax
  signed __int64 v42; // r9
  __int64 v43; // rcx
  __m128 v44; // xmm2
  _OWORD *v45; // rax
  __int64 v46; // rcx
  signed __int64 v47; // r8
  __int64 result; // rax
  float v49; // xmm1_4
  char v50; // r9
  __int32 v51; // [rsp+20h] [rbp-E0h] BYREF
  __int32 v52; // [rsp+24h] [rbp-DCh]
  __int64 v53; // [rsp+28h] [rbp-D8h]
  __int32 v54; // [rsp+30h] [rbp-D0h]
  __int32 v55; // [rsp+34h] [rbp-CCh]
  __int128 v56; // [rsp+38h] [rbp-C8h]
  __int64 v57; // [rsp+48h] [rbp-B8h]
  __int32 v58; // [rsp+50h] [rbp-B0h]
  __int32 v59; // [rsp+54h] [rbp-ACh]
  int v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+5Ch] [rbp-A4h]
  int v62; // [rsp+70h] [rbp-90h]
  _QWORD v63[2]; // [rsp+80h] [rbp-80h] BYREF
  int v64; // [rsp+90h] [rbp-70h]
  int v65; // [rsp+94h] [rbp-6Ch]
  __int64 v66; // [rsp+98h] [rbp-68h]
  int v67; // [rsp+A0h] [rbp-60h]
  int v68; // [rsp+A4h] [rbp-5Ch]
  int v69; // [rsp+A8h] [rbp-58h]
  float v70; // [rsp+ACh] [rbp-54h]
  char v71; // [rsp+B0h] [rbp-50h]
  __int64 v72; // [rsp+B8h] [rbp-48h]
  int v73; // [rsp+C0h] [rbp-40h]
  int v74; // [rsp+C4h] [rbp-3Ch]
  __int64 v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h]

  v5 = *(_DWORD *)(a1 + 16);
  v6 = a1;
  v7 = *(_DWORD *)(a1 + 8);
  v8 = *(unsigned __int8 *)(a1 + 97);
  v63[0] = *(_QWORD *)(a1 + 48);
  v9 = 8 * v5 + 16;
  v75 = *(_QWORD *)(a1 + 32);
  v63[1] = v75;
  v66 = *(_QWORD *)(a1 + 40);
  v68 = *(_DWORD *)(a1 + 12);
  v76 = a1;
  v70 = a4;
  v11 = *((_DWORD *)a5 + 2);
  v12 = *a5;
  v13 = *((_DWORD *)a5 + 3);
  v72 = *a5;
  v74 = v13;
  v64 = v9;
  v65 = v7;
  v67 = v9;
  v69 = v5;
  v71 = v8;
  v62 = v11;
  v73 = v11;
  LOBYTE(a3) = (v5 & 1) == 0 && (v12 & 0xF) == 0;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a2, a2, a3, v8) )
  {
    v17 = (__m128)*(unsigned int *)(v16 + 48);
    v18 = (__m128)*(unsigned int *)(v16 + 52);
    v22 = (__m128)(unsigned int)FLOAT_1_0;
    v22.m128_f32[0] = 1.0 / *(float *)(v6 + 92);
    v19 = 1.0 / *(float *)(v6 + 88);
    v20.m128_f32[0] = v19 * *(float *)(v16 + 4);
    v21.m128_f32[0] = v19 * *(float *)v16;
    v23 = v22;
    v22.m128_f32[0] = v22.m128_f32[0] * *(float *)(v16 + 20);
    v23.m128_f32[0] = v23.m128_f32[0] * *(float *)(v16 + 16);
    v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v21.m128_f32[0] - v22.m128_f32[0])) & _xmm);
    if ( v24 <= 0.000081380211
      && IsCloseRealMatrixEpsilon(v20.m128_f32[0], COERCE_FLOAT(v23.m128_i32[0] ^ _xmm))
      && IsCloseRealOne(
           (float)(v21.m128_f32[0] * v21.m128_f32[0]) + (float)(v23.m128_f32[0] * v23.m128_f32[0]),
           0.000081380211) )
    {
      v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
      if ( v26 >= 0.0000011920929 )
      {
        v51 = v21.m128_i32[0];
        v52 = v20.m128_i32[0];
        v54 = v23.m128_i32[0];
        v55 = v22.m128_i32[0];
        v58 = v17.m128_i32[0];
        v59 = v18.m128_i32[0];
        v61 = 1065353216LL;
        v53 = 0LL;
        v57 = 1065353216LL;
        v60 = 0;
        v56 = 0LL;
        if ( v14 )
        {
          if ( v15 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
              v63,
              &v51);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              v63,
              &v51);
        }
        else if ( v15 )
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v63,
            &v51);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v63,
            &v51);
        }
      }
      else if ( v14 )
      {
        v27 = v25 >> 1;
        v28 = _mm_unpacklo_ps(_mm_unpacklo_ps(v21, (__m128)0LL), _mm_unpacklo_ps(v20, (__m128)0LL));
        v29 = _mm_unpacklo_ps(_mm_unpacklo_ps(v23, (__m128)0LL), _mm_unpacklo_ps(v22, (__m128)0LL));
        v30 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, (__m128)(unsigned int)FLOAT_1_0), _mm_unpacklo_ps(v18, (__m128)0LL));
        if ( v7 )
        {
          v31 = v62;
          v32 = 0;
          v33 = 0;
          v34 = 2 * v62;
          v35 = ((unsigned int)(v7 - 1) >> 1) + 1;
          do
          {
            v36 = (__m128 *)(v75 + v9 + v33);
            v37 = (__m128 *)(v75 + v33);
            v38 = (__m128 *)(v12 + v32);
            v39 = (__m128 *)(v12 + v31 + v32);
            v40 = _mm_add_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v37, *v37, 85), v29), v30),
                    _mm_mul_ps(_mm_shuffle_ps(*v37, *v37, 0), v28));
            *v38 = _mm_or_ps(
                     _mm_andnot_ps(
                       (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                       _mm_shuffle_ps(v40, v40, 228)),
                     _mm_and_ps(
                       _mm_shuffle_ps(*v37, *v37, 228),
                       (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
            if ( v27 )
            {
              m128_f32 = (_OWORD *)v38[1].m128_f32;
              v42 = (char *)v37 - (char *)v38;
              v43 = v27;
              do
              {
                *m128_f32 = *(_OWORD *)((char *)m128_f32 + v42);
                ++m128_f32;
                --v43;
              }
              while ( v43 );
            }
            v44 = _mm_add_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v36, *v36, 85), v29), v30),
                    _mm_mul_ps(_mm_shuffle_ps(*v36, *v36, 0), v28));
            *v39 = _mm_or_ps(
                     _mm_andnot_ps(
                       (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                       _mm_shuffle_ps(v44, v44, 228)),
                     _mm_and_ps(
                       _mm_shuffle_ps(*v36, *v36, 228),
                       (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
            if ( v27 )
            {
              v45 = (_OWORD *)v39[1].m128_f32;
              v46 = v27;
              v47 = (char *)v36 - (char *)v39;
              do
              {
                *v45 = *(_OWORD *)((char *)v45 + v47);
                ++v45;
                --v46;
              }
              while ( v46 );
            }
            v33 += 2 * v9;
            v32 += v34;
            --v35;
          }
          while ( v35 );
          v6 = v76;
        }
      }
      else
      {
        v51 = v21.m128_i32[0];
        v52 = v20.m128_i32[0];
        v54 = v23.m128_i32[0];
        v55 = v22.m128_i32[0];
        v58 = v17.m128_i32[0];
        v59 = v18.m128_i32[0];
        v61 = 1065353216LL;
        v53 = 0LL;
        v56 = 0LL;
        v57 = 1065353216LL;
        v60 = 0;
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v63,
          &v51);
      }
      result = *(unsigned int *)(v6 + 8);
      dword_180339984 += result;
    }
    else
    {
      v51 = v21.m128_i32[0];
      v52 = v20.m128_i32[0];
      v54 = v23.m128_i32[0];
      v55 = v22.m128_i32[0];
      v58 = v17.m128_i32[0];
      v59 = v18.m128_i32[0];
      v61 = 1065353216LL;
      v53 = 0LL;
      v57 = 1065353216LL;
      v60 = 0;
      v49 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
      v56 = 0LL;
      if ( v49 >= 0.0000011920929 )
      {
        if ( v14 )
        {
          if ( v15 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
              v63,
              &v51);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              v63,
              &v51);
          result = *(unsigned int *)(v6 + 8);
          dword_180339988 += result;
        }
        else
        {
          if ( v15 )
            VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
              v63,
              &v51);
          else
            VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              v63,
              &v51);
          result = *(unsigned int *)(v6 + 8);
          dword_180339988 += result;
        }
      }
      else
      {
        if ( v14 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
            (__int64)v63,
            (unsigned int *)&v51);
        else
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
            v63,
            &v51);
        result = *(unsigned int *)(v6 + 8);
        dword_180339988 += result;
      }
    }
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(v6, (__int64)&v51, v16);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      if ( v50 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v63,
          &v51);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          (__int64)v63,
          (CMILMatrix *)&v51);
      result = *(unsigned int *)(v6 + 8);
      dword_18033998C += result;
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v63,
        (CMILMatrix *)&v51);
      result = *(unsigned int *)(v6 + 8);
      dword_18033998C += result;
    }
  }
  return result;
}
