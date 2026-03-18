/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18005B8B0
 * Callers:
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x180059AF0 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry.c)
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1800754E0 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x1800BC3E8 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z.c)
 * Callees:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18000B7D4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18000C0A4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x18000C270 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18000D480 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_18000D480.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180064380 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800B8B28 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800B8B28.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800B8D54 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800B8D54.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BDCF0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800BDCF0.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B2D94 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801B2D94.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B32A0 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B353C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B35B8 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B3694 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B3A1C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B3AD4 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B3BE8 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float a4,
        __int64 *a5)
{
  __int64 v5; // r9
  __int64 v6; // rsi
  char v7; // bl
  int v8; // r11d
  int v9; // r12d
  int v11; // edi
  __int64 v12; // r13
  int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // r9d
  char v16; // r10
  int v17; // r11d
  __m128 v18; // xmm11
  __m128 v19; // xmm5
  __m128 v20; // xmm10
  __m128 v21; // xmm4
  __m128 v22; // xmm3
  __m128 v23; // xmm12
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  unsigned int v27; // r9d
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128 v30; // xmm6
  int v31; // esi
  int v32; // r10d
  int v33; // ebx
  int v34; // r14d
  __int64 v35; // rdi
  __m128 *v36; // rcx
  __m128 *v37; // rdx
  __m128 *v38; // r8
  __m128 *v39; // r11
  __m128 v40; // xmm2
  _OWORD *m128_f32; // rax
  signed __int64 v42; // rdx
  __int64 v43; // r8
  __m128 v44; // xmm2
  _OWORD *v45; // rax
  __int64 v46; // rdx
  signed __int64 v47; // rcx
  __int64 result; // rax
  float v49; // xmm1_4
  __int32 v50; // [rsp+20h] [rbp-E0h] BYREF
  __int32 v51; // [rsp+24h] [rbp-DCh]
  __int64 v52; // [rsp+28h] [rbp-D8h]
  __int32 v53; // [rsp+30h] [rbp-D0h]
  __int32 v54; // [rsp+34h] [rbp-CCh]
  __int128 v55; // [rsp+38h] [rbp-C8h]
  __int64 v56; // [rsp+48h] [rbp-B8h]
  __int32 v57; // [rsp+50h] [rbp-B0h]
  __int32 v58; // [rsp+54h] [rbp-ACh]
  int v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+5Ch] [rbp-A4h]
  int v61; // [rsp+70h] [rbp-90h]
  _QWORD v62[2]; // [rsp+80h] [rbp-80h] BYREF
  int v63; // [rsp+90h] [rbp-70h]
  int v64; // [rsp+94h] [rbp-6Ch]
  __int64 v65; // [rsp+98h] [rbp-68h]
  int v66; // [rsp+A0h] [rbp-60h]
  int v67; // [rsp+A4h] [rbp-5Ch]
  int v68; // [rsp+A8h] [rbp-58h]
  float v69; // [rsp+ACh] [rbp-54h]
  char v70; // [rsp+B0h] [rbp-50h]
  __int64 v71; // [rsp+B8h] [rbp-48h]
  int v72; // [rsp+C0h] [rbp-40h]
  int v73; // [rsp+C4h] [rbp-3Ch]
  __int64 v74; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h]

  v5 = *(unsigned int *)(a1 + 16);
  v6 = a1;
  v7 = *(_BYTE *)(a1 + 97);
  v8 = *(_DWORD *)(a1 + 8);
  v62[0] = *(_QWORD *)(a1 + 48);
  v9 = 8 * v5 + 16;
  v74 = *(_QWORD *)(a1 + 32);
  v62[1] = v74;
  v65 = *(_QWORD *)(a1 + 40);
  v67 = *(_DWORD *)(a1 + 12);
  v69 = a4;
  v75 = a1;
  v11 = *((_DWORD *)a5 + 2);
  v12 = *a5;
  v13 = *((_DWORD *)a5 + 3);
  v71 = *a5;
  v73 = v13;
  v63 = v9;
  v64 = v8;
  v66 = v9;
  v68 = v5;
  v70 = v7;
  v61 = v11;
  v72 = v11;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a2, a2, a2, v5) )
  {
    v21 = (__m128)(unsigned int)FLOAT_1_0;
    v21.m128_f32[0] = 1.0 / *(float *)(v6 + 88);
    v20 = (__m128)(unsigned int)FLOAT_1_0;
    v20.m128_f32[0] = 1.0 / *(float *)(v6 + 92);
    v18 = (__m128)*(unsigned int *)(v14 + 48);
    v19 = v21;
    v19.m128_f32[0] = v21.m128_f32[0] * *(float *)v14;
    v22 = v20;
    v20.m128_f32[0] = v20.m128_f32[0] * *(float *)(v14 + 20);
    v21.m128_f32[0] = v21.m128_f32[0] * *(float *)(v14 + 4);
    v22.m128_f32[0] = v22.m128_f32[0] * *(float *)(v14 + 16);
    v23 = (__m128)*(unsigned int *)(v14 + 52);
    v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v19.m128_f32[0] - v20.m128_f32[0])) & _xmm);
    if ( v24 > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v21.m128_f32[0] - COERCE_FLOAT(v22.m128_i32[0] ^ _xmm))) & _xmm) > 0.0000011920929
      || (v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v19.m128_f32[0] * v19.m128_f32[0])
                                                                  + (float)(v22.m128_f32[0] * v22.m128_f32[0]))
                                                          - 1.0)) & _xmm),
          v25 >= 0.0000011920929) )
    {
      v50 = v19.m128_i32[0];
      v51 = v21.m128_i32[0];
      v53 = v22.m128_i32[0];
      v54 = v20.m128_i32[0];
      v57 = v18.m128_i32[0];
      v58 = v23.m128_i32[0];
      v60 = 1065353216LL;
      v52 = 0LL;
      v56 = 1065353216LL;
      v59 = 0;
      v49 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
      v55 = 0LL;
      if ( v49 >= 0.0000011920929 )
      {
        if ( v16 )
        {
          if ( !v7 )
          {
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              v62,
              &v50);
            result = *(unsigned int *)(v6 + 8);
            dword_18033C898 += result;
            return result;
          }
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v62,
            &v50);
        }
        else if ( v7 )
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v62,
            &v50);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v62,
            &v50);
        }
      }
      else if ( v16 )
      {
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          (__int64)v62,
          (unsigned int *)&v50);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v62,
          &v50);
      }
      result = *(unsigned int *)(v6 + 8);
      dword_18033C898 += result;
      return result;
    }
    v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
    if ( v26 >= 0.0000011920929 )
    {
      v50 = v19.m128_i32[0];
      v51 = v21.m128_i32[0];
      v53 = v22.m128_i32[0];
      v54 = v20.m128_i32[0];
      v57 = v18.m128_i32[0];
      v58 = v23.m128_i32[0];
      v60 = 1065353216LL;
      v52 = 0LL;
      v56 = 1065353216LL;
      v59 = 0;
      v55 = 0LL;
      if ( v16 )
      {
        if ( v7 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v62,
            &v50);
        else
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v62,
            &v50);
      }
      else if ( v7 )
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v62,
          &v50);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          v62,
          &v50);
      }
    }
    else if ( v16 )
    {
      v27 = v15 >> 1;
      v28 = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, (__m128)0LL), _mm_unpacklo_ps(v21, (__m128)0LL));
      v29 = _mm_unpacklo_ps(_mm_unpacklo_ps(v22, (__m128)0LL), _mm_unpacklo_ps(v20, (__m128)0LL));
      v30 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, (__m128)(unsigned int)FLOAT_1_0), _mm_unpacklo_ps(v23, (__m128)0LL));
      if ( v17 )
      {
        v31 = v61;
        v32 = 0;
        v33 = 0;
        v34 = 2 * v11;
        v35 = ((unsigned int)(v17 - 1) >> 1) + 1;
        do
        {
          v36 = (__m128 *)(v74 + v9 + v33);
          v37 = (__m128 *)(v74 + v33);
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
        v6 = v75;
      }
    }
    else
    {
      v50 = v19.m128_i32[0];
      v51 = v21.m128_i32[0];
      v53 = v22.m128_i32[0];
      v54 = v20.m128_i32[0];
      v57 = v18.m128_i32[0];
      v58 = v23.m128_i32[0];
      v60 = 1065353216LL;
      v52 = 0LL;
      v55 = 0LL;
      v56 = 1065353216LL;
      v59 = 0;
      VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        v62,
        &v50);
    }
    result = *(unsigned int *)(v6 + 8);
    dword_18033C894 += result;
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(v6, (__int64)&v50, v14);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm) < 0.0000011920929 )
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v62,
        (CMILMatrix *)&v50);
      result = *(unsigned int *)(v6 + 8);
      dword_18033C89C += result;
    }
    else
    {
      if ( v7 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v62,
          &v50);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          (__int64)v62,
          (CMILMatrix *)&v50);
      result = *(unsigned int *)(v6 + 8);
      dword_18033C89C += result;
    }
  }
  return result;
}
