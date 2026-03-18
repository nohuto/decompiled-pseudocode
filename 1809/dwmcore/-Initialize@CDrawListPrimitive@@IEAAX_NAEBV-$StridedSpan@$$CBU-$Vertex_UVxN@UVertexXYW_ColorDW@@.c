/*
 * XREFs of ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18003AE80
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800AC260 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B5920 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180187518 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 * Callees:
 *     ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x18001C948 (-SplitVertex@@YAXAEBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR.c)
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x180064A04 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CDrawListPrimitive::Initialize(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        void *Src,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // rsi
  __int64 v10; // rdi
  float v12; // xmm1_4
  unsigned __int64 v13; // xmm0_8
  bool v14; // zf
  unsigned int v15; // r11d
  unsigned int v16; // r13d
  __int64 result; // rax
  _QWORD *v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r14d
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rbp
  __int64 v25; // rdi
  __int64 *v26; // r14
  float v27; // xmm3_4
  __int64 v28; // rsi
  float v29; // xmm2_4
  float v30; // xmm2_4
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // xmm0_8
  __int64 v34; // rcx
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm1_4
  unsigned int v44; // ebp
  int v45; // edi
  int v46; // esi
  __int64 v47; // [rsp+40h] [rbp-F8h]
  __int64 v48; // [rsp+48h] [rbp-F0h]
  _QWORD *v49; // [rsp+50h] [rbp-E8h]
  __int64 v50; // [rsp+58h] [rbp-E0h] BYREF
  _QWORD *v51; // [rsp+60h] [rbp-D8h]
  float v52; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+74h] [rbp-C4h]
  __int64 v54; // [rsp+7Ch] [rbp-BCh]
  int v55; // [rsp+84h] [rbp-B4h]
  __int64 v56; // [rsp+88h] [rbp-B0h]
  __int128 v57; // [rsp+90h] [rbp-A8h]
  __int128 v58; // [rsp+A0h] [rbp-98h]
  int v59; // [rsp+B0h] [rbp-88h]
  int v60; // [rsp+140h] [rbp+8h]
  int v61; // [rsp+148h] [rbp+10h]
  int v64; // [rsp+178h] [rbp+40h]
  int v65; // [rsp+180h] [rbp+48h]

  v9 = a4;
  v10 = a3;
  *(_BYTE *)(a1 + 97) = a9;
  *(_BYTE *)(a1 + 96) = a2;
  if ( *(float *)a8 < 0.0049999999
    || *(float *)a8 > 200.0
    || (v12 = *(float *)(a8 + 4), v12 < 0.0049999999)
    || v12 > 200.0 )
  {
    v13 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  }
  else
  {
    v13 = *(_QWORD *)a8;
  }
  v14 = *(_DWORD *)(a1 + 16) == 0;
  *(_QWORD *)(a1 + 88) = v13;
  if ( v14 )
  {
    result = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  else
  {
    memcpy_0(*(void **)(a1 + 48), Src, 2LL * a7);
    v15 = *(_DWORD *)(v10 + 12);
    v16 = 0;
    result = *(unsigned int *)(a1 + 12);
    v18 = *(_QWORD **)(a1 + 40);
    v19 = *(_QWORD *)(a1 + 24);
    v20 = *(_QWORD *)(a1 + 32);
    v21 = 8 * result + 16;
    v60 = v21;
    v51 = v18;
    v47 = v19;
    v48 = v20;
    v65 = v15;
    *(_OWORD *)(a1 + 56) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    *(_OWORD *)(a1 + 72) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    if ( v15 )
    {
      v22 = 0;
      v23 = 0;
      v61 = 0;
      v64 = 0;
      v49 = v18;
      do
      {
        v24 = *(_QWORD *)v10 + (int)(*(_DWORD *)(v10 + 8) * v16);
        v25 = v19 + v23;
        v26 = (__int64 *)(*(_QWORD *)v9 + (int)(*(_DWORD *)(v9 + 8) * v16));
        *v18 = *(_QWORD *)v24;
        v27 = *(float *)(a1 + 88);
        v28 = v20 + v22;
        v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v27 - 1.0)) & _xmm);
        if ( v29 >= 0.0000011920929
          || (v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 92) - 1.0)) & _xmm),
              v30 >= 0.0000011920929) )
        {
          v55 = *(_DWORD *)(a1 + 92);
          v57 = _xmm;
          v52 = v27;
          v53 = 0LL;
          v54 = 0LL;
          v56 = 0LL;
          v58 = _xmm;
          v59 = 0;
          Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
            v24,
            (_DWORD)v26,
            a5,
            (unsigned int)&v52,
            v25,
            (__int64)&v50);
          v33 = v50;
          v22 = v64;
          v23 = v61;
          v18 = v49;
          v15 = v65;
        }
        else
        {
          *(_QWORD *)v25 = *(_QWORD *)v24;
          if ( a5 )
          {
            v31 = (_QWORD *)(v25 + 16);
            v32 = a5;
            do
            {
              *v31 = *(_QWORD *)((char *)v31 + v24 - v25);
              ++v31;
              --v32;
            }
            while ( v32 );
          }
          v33 = *v26;
        }
        *(_QWORD *)v28 = v33;
        *(_DWORD *)(v25 + 8) = *(_DWORD *)(v24 + 8);
        *(_DWORD *)(v25 + 12) = *(_DWORD *)(v24 + 12);
        *(_DWORD *)(v28 + 8) = *((_DWORD *)v26 + 2);
        result = *((unsigned int *)v26 + 3);
        *(_DWORD *)(v28 + 12) = result;
        if ( a5 )
        {
          result = v28 + 16;
          v34 = a5;
          do
          {
            *(_QWORD *)result = *(__int64 *)((char *)v26 + result - v28);
            result += 8LL;
            --v34;
          }
          while ( v34 );
        }
        ++v18;
        v35 = *(float *)(a1 + 60);
        ++v16;
        v9 = a4;
        v19 = v47;
        v20 = v48;
        *(float *)(a1 + 56) = fminf(*(float *)(a1 + 56), *(float *)v26);
        v36 = *(float *)(a1 + 64);
        v49 = v18;
        *(float *)(a1 + 60) = fminf(v35, *((float *)v26 + 1));
        v37 = *(float *)(a1 + 68);
        *(float *)(a1 + 64) = fmaxf(v36, *(float *)v26);
        v38 = fmaxf(v37, *((float *)v26 + 1));
        v39 = *(float *)(a1 + 72);
        v21 = v60;
        v23 += v60;
        v22 += v60;
        v61 = v23;
        v64 = v22;
        *(float *)(a1 + 68) = v38;
        v40 = *(float *)(a1 + 76);
        *(float *)(a1 + 72) = fminf(v39, *(float *)v25);
        v41 = *(float *)(a1 + 80);
        *(float *)(a1 + 76) = fminf(v40, *(float *)(v25 + 4));
        v42 = *(float *)(a1 + 84);
        *(float *)(a1 + 80) = fmaxf(v41, *(float *)v25);
        v43 = fmaxf(v42, *(float *)(v25 + 4));
        v10 = a3;
        *(float *)(a1 + 84) = v43;
      }
      while ( v16 < v15 );
    }
    if ( v15 < *(_DWORD *)(a1 + 8) )
    {
      v44 = v15 - 1;
      v45 = v15 * v21;
      v46 = v15 * v21;
      do
      {
        result = (__int64)SplitVertex(
                            *(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * v44),
                            *(_QWORD *)a4 + (int)(*(_DWORD *)(a4 + 8) * v44),
                            a5,
                            (float *)(a1 + 88),
                            &v51[v15],
                            (_QWORD *)(v19 + v45),
                            (_QWORD *)(v20 + v46));
        v46 += v21;
        v19 = v47;
        v15 = v65 + 1;
        v20 = v48;
        v45 += v21;
        v65 = v15;
      }
      while ( v15 < *(_DWORD *)(a1 + 8) );
    }
  }
  return result;
}
