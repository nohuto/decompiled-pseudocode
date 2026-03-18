/*
 * XREFs of ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18008DBD0
 * Callers:
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x18003E864 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180097BC0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 * Callees:
 *     ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x18001DECC (-SplitVertex@@YAXAEBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR.c)
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x1800C21E4 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
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
  unsigned int v16; // r12d
  __int64 result; // rax
  _QWORD *v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r14d
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rbp
  __int64 v25; // r14
  __int64 *v26; // rdi
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
  unsigned int v39; // ebp
  int v40; // edi
  int v41; // esi
  __int64 v42; // [rsp+40h] [rbp-F8h]
  __int64 v43; // [rsp+48h] [rbp-F0h]
  _QWORD *v44; // [rsp+50h] [rbp-E8h]
  __int64 v45; // [rsp+58h] [rbp-E0h] BYREF
  _QWORD *v46; // [rsp+60h] [rbp-D8h]
  int v47; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+74h] [rbp-C4h]
  __int64 v49; // [rsp+7Ch] [rbp-BCh]
  float v50; // [rsp+84h] [rbp-B4h]
  __int64 v51; // [rsp+88h] [rbp-B0h]
  __int128 v52; // [rsp+90h] [rbp-A8h]
  __int128 v53; // [rsp+A0h] [rbp-98h]
  int v54; // [rsp+B0h] [rbp-88h]
  int v55; // [rsp+140h] [rbp+8h]
  int v56; // [rsp+148h] [rbp+10h]
  int v59; // [rsp+178h] [rbp+40h]
  int v60; // [rsp+180h] [rbp+48h]

  v9 = a4;
  v10 = a3;
  *(_BYTE *)(a1 + 97) = a9;
  *(_BYTE *)(a1 + 98) = 0;
  *(_BYTE *)(a1 + 96) = a2;
  if ( *(float *)a8 < 0.0049999999
    || *(float *)a8 > 200.0
    || (v12 = *(float *)(a8 + 4), v12 < 0.0049999999)
    || v12 > 200.0 )
  {
    v13 = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  }
  else
  {
    v13 = *(_QWORD *)a8;
  }
  v14 = *(_DWORD *)(a1 + 20) == 0;
  *(_QWORD *)(a1 + 88) = v13;
  if ( v14 )
  {
    result = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  else
  {
    memcpy_0(*(void **)(a1 + 56), Src, 2LL * a7);
    v15 = *(_DWORD *)(v10 + 12);
    v16 = 0;
    result = *(unsigned int *)(a1 + 16);
    v18 = *(_QWORD **)(a1 + 48);
    v19 = *(_QWORD *)(a1 + 32);
    v20 = *(_QWORD *)(a1 + 40);
    v21 = 8 * result + 16;
    v55 = v21;
    v46 = v18;
    v42 = v19;
    v43 = v20;
    v60 = v15;
    *(_OWORD *)(a1 + 72) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    if ( v15 )
    {
      v22 = 0;
      v23 = 0;
      v56 = 0;
      v59 = 0;
      v44 = v18;
      do
      {
        v24 = v20 + v22;
        v25 = *(_QWORD *)v10 + (int)(v16 * *(_DWORD *)(v10 + 8));
        v26 = (__int64 *)(*(_QWORD *)v9 + (int)(v16 * *(_DWORD *)(v9 + 8)));
        *v18 = *(_QWORD *)v25;
        v27 = *(float *)(a1 + 92);
        v28 = v19 + v23;
        v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 88) - 1.0)) & _xmm);
        if ( v29 >= 0.0000011920929
          || (v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v27 - 1.0)) & _xmm), v30 >= 0.0000011920929) )
        {
          v47 = *(_DWORD *)(a1 + 88);
          v50 = v27;
          v48 = 0LL;
          v49 = 0LL;
          v51 = 0LL;
          v52 = _xmm;
          v53 = _xmm;
          v54 = 0;
          Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
            v25,
            (_DWORD)v26,
            a5,
            (unsigned int)&v47,
            v28,
            (__int64)&v45);
          v33 = v45;
          v22 = v59;
          v23 = v56;
          v18 = v44;
          v15 = v60;
        }
        else
        {
          *(_QWORD *)v28 = *(_QWORD *)v25;
          if ( a5 )
          {
            v31 = (_QWORD *)(v28 + 16);
            v32 = a5;
            do
            {
              *v31 = *(_QWORD *)((char *)v31 + v25 - v28);
              ++v31;
              --v32;
            }
            while ( v32 );
          }
          v33 = *v26;
        }
        *(_QWORD *)v24 = v33;
        *(_DWORD *)(v28 + 8) = *(_DWORD *)(v25 + 8);
        *(_DWORD *)(v28 + 12) = *(_DWORD *)(v25 + 12);
        *(_DWORD *)(v24 + 8) = *((_DWORD *)v26 + 2);
        result = *((unsigned int *)v26 + 3);
        *(_DWORD *)(v24 + 12) = result;
        if ( a5 )
        {
          result = v24 + 16;
          v34 = a5;
          do
          {
            *(_QWORD *)result = *(__int64 *)((char *)v26 + result - v24);
            result += 8LL;
            --v34;
          }
          while ( v34 );
        }
        ++v18;
        v35 = *(float *)(a1 + 76);
        ++v16;
        v21 = v55;
        v23 += v55;
        v9 = a4;
        v22 += v55;
        v19 = v42;
        v20 = v43;
        *(float *)(a1 + 72) = fminf(*(float *)(a1 + 72), *(float *)v26);
        v36 = *(float *)(a1 + 80);
        v56 = v23;
        v59 = v22;
        v44 = v18;
        *(float *)(a1 + 76) = fminf(v35, *((float *)v26 + 1));
        v37 = *(float *)(a1 + 84);
        *(float *)(a1 + 80) = fmaxf(v36, *(float *)v26);
        v38 = fmaxf(v37, *((float *)v26 + 1));
        v10 = a3;
        *(float *)(a1 + 84) = v38;
      }
      while ( v16 < v15 );
    }
    if ( v15 < *(_DWORD *)(a1 + 8) )
    {
      v39 = v15 - 1;
      v40 = v15 * v21;
      v41 = v15 * v21;
      do
      {
        result = (__int64)SplitVertex(
                            *(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * v39),
                            *(_QWORD *)a4 + (int)(*(_DWORD *)(a4 + 8) * v39),
                            a5,
                            (float *)(a1 + 88),
                            &v46[v15],
                            (_QWORD *)(v19 + v40),
                            (_QWORD *)(v20 + v41));
        v41 += v21;
        v19 = v42;
        v15 = v60 + 1;
        v20 = v43;
        v40 += v21;
        v60 = v15;
      }
      while ( v15 < *(_DWORD *)(a1 + 8) );
    }
  }
  return result;
}
