/*
 * XREFs of ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801B9D5C
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800901F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801B00A4 (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 * Callees:
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x180013DC8 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUD2D_POINT_2F@@U2@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801AE8DC (-ensure_extra_capacity@-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 *     ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x1801AED28 (-reserve_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_ex.c)
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801B8A64 (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 *     ?reserve_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_VECTOR_2F@@_K0@Z @ 0x1801B8B68 (-reserve_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_ex.c)
 *     ?reserve_region@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAI_K0@Z @ 0x1801BA538 (-reserve_region@-$vector_facade@IV-$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@deta.c)
 *     ?Is2DAffine@Matrix3x3@@QEBA_NXZ @ 0x18021C1DC (-Is2DAffine@Matrix3x3@@QEBA_NXZ.c)
 */

float *__fastcall CEdgeFlagsMap::AddEdgeFlags(__int64 *a1, float *a2, int a3, float *a4)
{
  __int64 v4; // r10
  __int64 v6; // rax
  __int64 *v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 *v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  bool v16; // al
  float v17; // xmm1_4
  unsigned int v18; // r14d
  float v19; // xmm0_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  float v22; // xmm10_4
  float v23; // xmm11_4
  float *v24; // rax
  int v25; // xmm6_4
  int v26; // xmm7_4
  __int64 v27; // r8
  _DWORD *v28; // rax
  float *v29; // rax
  int v30; // xmm6_4
  int v31; // xmm7_4
  __int64 v32; // r8
  _DWORD *v33; // rax
  float *v34; // rax
  int v35; // xmm6_4
  int v36; // xmm7_4
  __int64 v37; // r8
  _DWORD *v38; // rax
  float *v39; // rax
  int v40; // xmm6_4
  int v41; // xmm7_4
  __int64 v42; // r8
  float *result; // rax
  int v44; // xmm2_4
  __int64 *v45; // r11
  __int64 v46; // rbx
  _QWORD *v47; // rax
  __int64 v48; // r11
  _QWORD *v49; // r10
  float *v50; // rbx
  __int64 v51; // rax
  float v52; // xmm7_4
  float v53; // xmm6_4
  __int64 v54; // r8
  struct D2D_POINT_2F v55; // [rsp+28h] [rbp-69h] BYREF
  float v56; // [rsp+30h] [rbp-61h] BYREF
  _DWORD v57[3]; // [rsp+34h] [rbp-5Dh]
  int v58; // [rsp+40h] [rbp-51h]
  float v59; // [rsp+44h] [rbp-4Dh]
  int v60; // [rsp+48h] [rbp-49h]
  int v61; // [rsp+4Ch] [rbp-45h]

  v4 = a1[1];
  v6 = *a1;
  if ( ((v4 - *a1) >> 2) + 4 >= (unsigned __int64)((v4 - *a1) >> 2) )
  {
    detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 4uLL);
    v4 = a1[1];
    v6 = *a1;
  }
  v10 = a1 + 11;
  v11 = ((v4 - v6) >> 2) + 4;
  v12 = (a1[12] - a1[11]) >> 3;
  if ( v11 > v12 )
  {
    detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1 + 11, v11 - v12);
    v4 = a1[1];
    v6 = *a1;
  }
  v13 = a1 + 30;
  v14 = ((v4 - v6) >> 2) + 4;
  v15 = (a1[31] - a1[30]) >> 3;
  if ( v14 > v15 )
  {
    detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1 + 30, v14 - v15);
    v4 = a1[1];
    v6 = *a1;
  }
  *(_DWORD *)detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               (v4 - v6) >> 2) = a3 & 0x3000000;
  *(_DWORD *)detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               (a1[1] - *a1) >> 2) = a3 & 3;
  *(_DWORD *)detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               (a1[1] - *a1) >> 2) = a3 & 0x300;
  *(_DWORD *)detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               (a1[1] - *a1) >> 2) = a3 & 0x30000;
  v16 = Matrix3x3::Is2DAffine((Matrix3x3 *)a4);
  v17 = a2[1];
  v18 = 0;
  if ( v16 )
  {
    v19 = a2[2];
    v20 = (float)((float)(*a2 * *a4) + (float)(v17 * a4[3])) + a4[6];
    v21 = (float)((float)(*a2 * a4[1]) + (float)(v17 * a4[4])) + a4[7];
    v22 = (float)((float)(a2[3] * a4[3]) + (float)(v19 * *a4)) + a4[6];
    v23 = (float)((float)(a2[3] * a4[4]) + (float)(v19 * a4[1])) + a4[7];
    v24 = (float *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     a1 + 11,
                     (a1[12] - a1[11]) >> 3,
                     1LL);
    *v24 = v20;
    v24[1] = v21;
    v25 = *((_DWORD *)a4 + 3);
    v26 = *((_DWORD *)a4 + 4);
    v28 = (_DWORD *)detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::reserve_region(
                      a1 + 30,
                      (a1[31] - a1[30]) >> 3,
                      v27);
    *v28 = v25;
    v28[1] = v26;
    v29 = (float *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     a1 + 11,
                     (a1[12] - a1[11]) >> 3,
                     1LL);
    *v29 = v20;
    v29[1] = v21;
    v30 = *(_DWORD *)a4;
    v31 = *((_DWORD *)a4 + 1);
    v33 = (_DWORD *)detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::reserve_region(
                      a1 + 30,
                      (a1[31] - a1[30]) >> 3,
                      v32);
    *v33 = v30;
    v33[1] = v31;
    v34 = (float *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     a1 + 11,
                     (a1[12] - a1[11]) >> 3,
                     1LL);
    *v34 = v22;
    v34[1] = v23;
    v35 = *((_DWORD *)a4 + 3);
    v36 = *((_DWORD *)a4 + 4);
    v38 = (_DWORD *)detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::reserve_region(
                      a1 + 30,
                      (a1[31] - a1[30]) >> 3,
                      v37);
    *v38 = v35;
    v38[1] = v36;
    v39 = (float *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     a1 + 11,
                     (a1[12] - a1[11]) >> 3,
                     1LL);
    *v39 = v22;
    v39[1] = v23;
    v40 = *(_DWORD *)a4;
    v41 = *((_DWORD *)a4 + 1);
    result = (float *)detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::reserve_region(
                        a1 + 30,
                        (a1[31] - a1[30]) >> 3,
                        v42);
    *(_DWORD *)result = v40;
    *((_DWORD *)result + 1) = v41;
  }
  else
  {
    v44 = *((_DWORD *)a2 + 3);
    v45 = (__int64 *)&v56;
    v46 = 4LL;
    v56 = *a2;
    *(float *)&v57[1] = v56;
    v58 = *((_DWORD *)a2 + 2);
    v60 = v58;
    v57[0] = v44;
    *(float *)&v57[2] = v17;
    v59 = v17;
    v61 = v44;
    do
    {
      v47 = (_QWORD *)Matrix3x3::TransformHomogeneousPoint((Matrix3x3 *)a4, (struct D2D_POINT_2F)&v55, *v45);
      v45 = (__int64 *)(v48 + 8);
      *v49 = *v47;
      --v46;
    }
    while ( v46 );
    v50 = &v56;
    do
    {
      ++v18;
      *(_QWORD *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   v10,
                   (v10[1] - *v10) >> 3,
                   1LL) = *(_QWORD *)v50;
      v51 = v18 & 3;
      v52 = *(float *)&v57[2 * v51 - 1] - *v50;
      v53 = *(float *)&v57[2 * v51] - v50[1];
      result = (float *)detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::reserve_region(
                          v13,
                          (v13[1] - *v13) >> 3,
                          v54);
      v50 += 2;
      *result = v52;
      result[1] = v53;
    }
    while ( v18 < 4 );
  }
  return result;
}
