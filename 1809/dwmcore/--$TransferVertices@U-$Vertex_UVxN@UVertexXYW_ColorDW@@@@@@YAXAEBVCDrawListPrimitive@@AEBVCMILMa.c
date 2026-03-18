/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18003BBF0
 * Callers:
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x18003ADA0 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x18005D080 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@.c)
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1800ABE08 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 * Callees:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800070D8 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_Color.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180009304 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180009618 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x180009960 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180041290 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180059024 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180059024.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800593AC (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800593AC.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180188318 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180188318.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180188824 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180188AB8 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180188B3C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180188C1C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180188FB0 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180189068 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18018917C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __int64 *a5)
{
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // r11d
  char v9; // r15
  int v10; // r13d
  __m128 v11; // xmm10
  int v12; // edi
  __int64 v13; // r14
  int v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // r9
  char v17; // r10
  int v18; // r11d
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __m128 v21; // xmm3
  __m128 v22; // xmm6
  __m128 v23; // xmm11
  __m128 v24; // xmm12
  float v25; // xmm0_4
  float v26; // xmm1_4
  unsigned int v27; // r8d
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __m128 v30; // xmm6
  __int64 v31; // rsi
  int v32; // r15d
  int v33; // r10d
  __int64 v34; // rdi
  int v35; // ebx
  __m128 *v36; // rcx
  __m128 *v37; // rdx
  __m128 *v38; // r11
  __m128 *v39; // r9
  __m128 v40; // xmm2
  _OWORD *v41; // rax
  signed __int64 v42; // rdx
  __int64 v43; // r11
  __m128 v44; // xmm2
  _OWORD *v45; // rax
  __int64 v46; // rdx
  signed __int64 v47; // rcx
  __int64 result; // rax
  unsigned int v49; // r8d
  __m128 v50; // xmm8
  __m128 v51; // xmm5
  __m128 v52; // xmm6
  __m128 v53; // xmm9
  int v54; // r10d
  __int64 v55; // r12
  int v56; // r15d
  __m128 *v57; // rdx
  __m128 *v58; // r9
  __m128 *v59; // rcx
  __m128 *v60; // r11
  __m128 v61; // xmm4
  __m128 v62; // xmm2
  __m128i v63; // xmm3
  __m128i v64; // xmm3
  __m128 v65; // xmm3
  _OWORD *m128_f32; // rax
  signed __int64 v67; // rdx
  __int64 v68; // r9
  __m128 v69; // xmm4
  __m128 v70; // xmm2
  __m128i v71; // xmm3
  __m128i v72; // xmm3
  __m128 v73; // xmm3
  _OWORD *v74; // rax
  __int64 v75; // rdx
  signed __int64 v76; // rcx
  float v77; // xmm1_4
  __int64 v78; // r8
  __int32 v79; // [rsp+20h] [rbp-E0h] BYREF
  __int32 v80; // [rsp+24h] [rbp-DCh]
  __int64 v81; // [rsp+28h] [rbp-D8h]
  __int32 v82; // [rsp+30h] [rbp-D0h]
  __int32 v83; // [rsp+34h] [rbp-CCh]
  __int128 v84; // [rsp+38h] [rbp-C8h]
  __int64 v85; // [rsp+48h] [rbp-B8h]
  __int32 v86; // [rsp+50h] [rbp-B0h]
  __int32 v87; // [rsp+54h] [rbp-ACh]
  int v88; // [rsp+58h] [rbp-A8h]
  __int64 v89; // [rsp+5Ch] [rbp-A4h]
  int v90; // [rsp+70h] [rbp-90h]
  __int64 v91; // [rsp+78h] [rbp-88h]
  _QWORD v92[2]; // [rsp+80h] [rbp-80h] BYREF
  int v93; // [rsp+90h] [rbp-70h]
  int v94; // [rsp+94h] [rbp-6Ch]
  __int64 v95; // [rsp+98h] [rbp-68h]
  int v96; // [rsp+A0h] [rbp-60h]
  int v97; // [rsp+A4h] [rbp-5Ch]
  int v98; // [rsp+A8h] [rbp-58h]
  int v99; // [rsp+ACh] [rbp-54h]
  char v100; // [rsp+B0h] [rbp-50h]
  __int64 v101; // [rsp+B8h] [rbp-48h]
  int v102; // [rsp+C0h] [rbp-40h]
  int v103; // [rsp+C4h] [rbp-3Ch]
  __int64 v104; // [rsp+D0h] [rbp-30h]

  v5 = *(unsigned int *)(a1 + 12);
  v6 = a1;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(_BYTE *)(a1 + 97);
  v10 = 8 * v5 + 16;
  v92[0] = *(_QWORD *)(a1 + 40);
  v95 = *(_QWORD *)(a1 + 32);
  v11 = *(__m128 *)&a4;
  v99 = LODWORD(a4);
  v91 = a1;
  v12 = *((_DWORD *)a5 + 2);
  v13 = *a5;
  v14 = *((_DWORD *)a5 + 3);
  v101 = *a5;
  v103 = v14;
  v104 = v7;
  v92[1] = v7;
  v93 = v10;
  v94 = v8;
  v96 = v10;
  v97 = v8;
  v98 = v5;
  v100 = v9;
  v90 = v12;
  v102 = v12;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a2, a2, v5, a2) )
  {
    v21 = (__m128)LODWORD(FLOAT_1_0);
    v21.m128_f32[0] = 1.0 / *(float *)(v6 + 88);
    v20 = (__m128)LODWORD(FLOAT_1_0);
    v20.m128_f32[0] = 1.0 / *(float *)(v6 + 92);
    v19 = v21;
    v19.m128_f32[0] = v21.m128_f32[0] * *(float *)v16;
    v22 = v20;
    v20.m128_f32[0] = v20.m128_f32[0] * *(float *)(v16 + 20);
    v21.m128_f32[0] = v21.m128_f32[0] * *(float *)(v16 + 4);
    v22.m128_f32[0] = v22.m128_f32[0] * *(float *)(v16 + 16);
    v23 = (__m128)*(unsigned int *)(v16 + 48);
    v24 = (__m128)*(unsigned int *)(v16 + 52);
    v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v19.m128_f32[0] - v20.m128_f32[0])) & _xmm);
    if ( v25 > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v21.m128_f32[0] - COERCE_FLOAT(v22.m128_i32[0] ^ _xmm))) & _xmm) > 0.0000011920929
      || (v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v19.m128_f32[0] * v19.m128_f32[0])
                                                                  + (float)(v22.m128_f32[0] * v22.m128_f32[0]))
                                                          - 1.0)) & _xmm),
          v26 >= 0.0000011920929) )
    {
      v79 = v19.m128_i32[0];
      v80 = v21.m128_i32[0];
      v82 = v22.m128_i32[0];
      v83 = v20.m128_i32[0];
      v86 = v23.m128_i32[0];
      v87 = v24.m128_i32[0];
      v89 = 1065353216LL;
      v81 = 0LL;
      v85 = 1065353216LL;
      v88 = 0;
      v77 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v11.m128_f32[0] - 1.0)) & _xmm);
      v84 = 0LL;
      if ( v77 >= 0.0000011920929 )
      {
        if ( v17 )
        {
          if ( !v9 )
          {
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              v92,
              &v79);
            result = *(unsigned int *)(v6 + 8);
            dword_1803081B8 += result;
            return result;
          }
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v92,
            &v79);
        }
        else if ( v9 )
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v92,
            &v79);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v92,
            &v79);
        }
      }
      else if ( v17 )
      {
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v92,
          &v79);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v92,
          &v79);
      }
      result = *(unsigned int *)(v6 + 8);
      dword_1803081B8 += result;
      return result;
    }
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v11.m128_f32[0] - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      if ( v17 )
      {
        if ( v9 )
        {
          v79 = v19.m128_i32[0];
          v80 = v21.m128_i32[0];
          v82 = v22.m128_i32[0];
          v83 = v20.m128_i32[0];
          v86 = v23.m128_i32[0];
          v87 = v24.m128_i32[0];
          v89 = 1065353216LL;
          v81 = 0LL;
          v84 = 0LL;
          v85 = 1065353216LL;
          v88 = 0;
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            (__int64)v92,
            (unsigned int *)&v79);
        }
        else
        {
          v49 = v15 >> 1;
          v50 = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, (__m128)0LL), _mm_unpacklo_ps(v21, (__m128)0LL));
          v51 = _mm_unpacklo_ps(_mm_unpacklo_ps(v22, (__m128)0LL), _mm_unpacklo_ps(v20, (__m128)0LL));
          v52 = _mm_unpacklo_ps(_mm_unpacklo_ps(v23, (__m128)LODWORD(FLOAT_1_0)), _mm_unpacklo_ps(v24, (__m128)0LL));
          v53 = _mm_shuffle_ps(v11, v11, 0);
          if ( v18 )
          {
            v54 = 0;
            v55 = ((unsigned int)(v18 - 1) >> 1) + 1;
            v56 = 0;
            do
            {
              v57 = (__m128 *)(v7 + v56);
              v58 = (__m128 *)(v13 + v54);
              v59 = (__m128 *)(v7 + v56 + v10);
              v60 = (__m128 *)(v13 + v54 + v12);
              v61 = *v57;
              v62 = _mm_add_ps(
                      _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v57, *v57, 85), v51), v52),
                      _mm_mul_ps(_mm_shuffle_ps(v61, v61, 0), v50));
              v63 = _mm_cvttps_epi32(
                      _mm_mul_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_cvtepi32_ps(
                              _mm_xor_si128(
                                _mm_and_si128((__m128i)_mm_shuffle_ps(v61, v61, 255), g_MaskA8B8G8R8),
                                g_FlipA8R8G8B8)),
                            g_FixAA8R8G8B8),
                          g_NormalizeA8R8G8B8),
                        v53));
              v64 = _mm_packs_epi32(v63, v63);
              v65 = (__m128)_mm_packus_epi16(v64, v64);
              *v58 = _mm_or_ps(
                       _mm_andnot_ps(
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                         _mm_shuffle_ps(v62, v62, 228)),
                       _mm_and_ps(
                         _mm_shuffle_ps(v65, v65, 228),
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
              if ( v49 )
              {
                m128_f32 = (_OWORD *)v58[1].m128_f32;
                v67 = (char *)v57 - (char *)v58;
                v68 = v49;
                do
                {
                  *m128_f32 = *(_OWORD *)((char *)m128_f32 + v67);
                  ++m128_f32;
                  --v68;
                }
                while ( v68 );
              }
              v69 = *v59;
              v70 = _mm_add_ps(
                      _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v59, *v59, 85), v51), v52),
                      _mm_mul_ps(_mm_shuffle_ps(v69, v69, 0), v50));
              v71 = _mm_cvttps_epi32(
                      _mm_mul_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_cvtepi32_ps(
                              _mm_xor_si128(
                                _mm_and_si128((__m128i)_mm_shuffle_ps(v69, v69, 255), g_MaskA8B8G8R8),
                                g_FlipA8R8G8B8)),
                            g_FixAA8R8G8B8),
                          g_NormalizeA8R8G8B8),
                        v53));
              v72 = _mm_packs_epi32(v71, v71);
              v73 = (__m128)_mm_packus_epi16(v72, v72);
              *v60 = _mm_or_ps(
                       _mm_andnot_ps(
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                         _mm_shuffle_ps(v70, v70, 228)),
                       _mm_and_ps(
                         _mm_shuffle_ps(v73, v73, 228),
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
              if ( v49 )
              {
                v74 = (_OWORD *)v60[1].m128_f32;
                v75 = v49;
                v76 = (char *)v59 - (char *)v60;
                do
                {
                  *v74 = *(_OWORD *)((char *)v74 + v76);
                  ++v74;
                  --v75;
                }
                while ( v75 );
              }
              v54 += 2 * v12;
              v56 += 2 * v10;
              --v55;
            }
            while ( v55 );
            v6 = v91;
          }
        }
      }
      else
      {
        v79 = v19.m128_i32[0];
        v80 = v21.m128_i32[0];
        v82 = v22.m128_i32[0];
        v83 = v20.m128_i32[0];
        v86 = v23.m128_i32[0];
        v87 = v24.m128_i32[0];
        v89 = 1065353216LL;
        v81 = 0LL;
        v85 = 1065353216LL;
        v88 = 0;
        v84 = 0LL;
        if ( v9 )
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v92,
            &v79);
        else
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v92,
            &v79);
      }
    }
    else if ( v17 )
    {
      v27 = v15 >> 1;
      v28 = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, (__m128)0LL), _mm_unpacklo_ps(v21, (__m128)0LL));
      v29 = _mm_unpacklo_ps(_mm_unpacklo_ps(v22, (__m128)0LL), _mm_unpacklo_ps(v20, (__m128)0LL));
      v30 = _mm_unpacklo_ps(_mm_unpacklo_ps(v23, (__m128)LODWORD(FLOAT_1_0)), _mm_unpacklo_ps(v24, (__m128)0LL));
      if ( v18 )
      {
        v31 = v104;
        v32 = 2 * v12;
        v33 = 0;
        v34 = ((unsigned int)(v18 - 1) >> 1) + 1;
        v35 = 0;
        do
        {
          v36 = (__m128 *)(v31 + v35 + v10);
          v37 = (__m128 *)(v31 + v35);
          v38 = (__m128 *)(v13 + v33);
          v39 = (__m128 *)(v13 + v33 + v90);
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
            v41 = (_OWORD *)v38[1].m128_f32;
            v42 = (char *)v37 - (char *)v38;
            v43 = v27;
            do
            {
              *v41 = *(_OWORD *)((char *)v41 + v42);
              ++v41;
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
          v35 += 2 * v10;
          v33 += v32;
          --v34;
        }
        while ( v34 );
        v6 = v91;
      }
    }
    else
    {
      v79 = v19.m128_i32[0];
      v80 = v21.m128_i32[0];
      v82 = v22.m128_i32[0];
      v83 = v20.m128_i32[0];
      v86 = v23.m128_i32[0];
      v87 = v24.m128_i32[0];
      v89 = 1065353216LL;
      v81 = 0LL;
      v84 = 0LL;
      v85 = 1065353216LL;
      v88 = 0;
      VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        v92,
        &v79);
    }
    result = *(unsigned int *)(v6 + 8);
    dword_1803081B4 += result;
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(v6, (__int64)&v79, v16);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&a4 - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      if ( v9 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v92,
          &v79);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          (__int64)v92,
          (CMILMatrix *)&v79,
          v78);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v92,
        (CMILMatrix *)&v79,
        v78);
    }
    result = *(unsigned int *)(v6 + 8);
    dword_1803081BC += result;
  }
  return result;
}
