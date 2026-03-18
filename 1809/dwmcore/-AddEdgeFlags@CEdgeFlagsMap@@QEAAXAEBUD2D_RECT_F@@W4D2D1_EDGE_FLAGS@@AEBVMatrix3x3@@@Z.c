/*
 * XREFs of ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801869E0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x180183640 (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000C018 (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x180010AB8 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUD2D_POINT_2F@@U2@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801820DC (-ensure_extra_capacity@-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 *     ?push_back@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBUD2D_POINT_2F@@@Z @ 0x1801822E0 (-push_back@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansi.c)
 *     ?push_back@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAI@Z @ 0x1801870CC (-push_back@-$vector_facade@IV-$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@.c)
 *     ?push_back@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAUD2D_VECTOR_2F@@@Z @ 0x1801870F8 (-push_back@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expan.c)
 *     ?Is2DAffine@Matrix3x3@@QEBA_NXZ @ 0x1801E3CD8 (-Is2DAffine@Matrix3x3@@QEBA_NXZ.c)
 */

__int64 __fastcall CEdgeFlagsMap::AddEdgeFlags(__int64 *a1, float *a2, int a3, float *a4)
{
  __int64 v4; // r10
  __int64 v8; // rdx
  _QWORD *v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm6_4
  float v19; // xmm6_4
  __int64 result; // rax
  int v21; // xmm2_4
  __int64 *v22; // rbx
  int v23; // xmm1_4
  __int64 v24; // rdi
  _QWORD *v25; // rax
  unsigned int v26; // r10d
  _QWORD *v27; // r11
  float *v28; // rdi
  unsigned int v29; // ebx
  __int64 v30; // rax
  __m128 v31; // xmm0
  __m128 v32; // xmm1
  __int64 v33; // [rsp+20h] [rbp-50h] BYREF
  struct D2D_POINT_2F v34; // [rsp+28h] [rbp-48h] BYREF
  __int64 v35; // [rsp+30h] [rbp-40h] BYREF
  float v36; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v37[3]; // [rsp+3Ch] [rbp-34h] BYREF
  int v38; // [rsp+48h] [rbp-28h]
  int v39; // [rsp+4Ch] [rbp-24h]
  int v40; // [rsp+50h] [rbp-20h]
  int v41; // [rsp+54h] [rbp-1Ch]

  v4 = *a1;
  v8 = a1[1];
  if ( ((v8 - *a1) >> 2) + 4 >= (unsigned __int64)((v8 - *a1) >> 2) )
  {
    detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 4uLL);
    v8 = a1[1];
    v4 = *a1;
  }
  v10 = a1 + 11;
  v11 = ((v8 - v4) >> 2) + 4;
  v12 = (a1[12] - a1[11]) >> 3;
  if ( v11 > v12 )
  {
    detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1 + 11, v11 - v12);
    v8 = a1[1];
    v4 = *a1;
  }
  v13 = a1 + 30;
  v14 = (a1[31] - a1[30]) >> 3;
  v15 = ((v8 - v4) >> 2) + 4;
  if ( v15 > v14 )
    detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1 + 30, v15 - v14);
  LODWORD(v33) = a3 & 0x3000000;
  detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::push_back(
    a1,
    &v33);
  LODWORD(v33) = a3 & 3;
  detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::push_back(
    a1,
    &v33);
  LODWORD(v33) = a3 & 0x300;
  detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::push_back(
    a1,
    &v33);
  LODWORD(v33) = a3 & 0x30000;
  detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::push_back(
    a1,
    &v33);
  if ( Matrix3x3::Is2DAffine((Matrix3x3 *)a4) )
  {
    v16 = (float)((float)(*a4 * a2[2]) + (float)(a4[3] * a2[3])) + a4[6];
    v17 = (float)(a4[4] * a2[1]) + (float)(a4[1] * *a2);
    v18 = (float)(a4[1] * a2[2]) + (float)(a4[4] * a2[3]);
    *(float *)&v33 = (float)((float)(a4[3] * a2[1]) + (float)(*a4 * *a2)) + a4[6];
    *(float *)&v35 = v16;
    v19 = v18 + a4[7];
    *((float *)&v33 + 1) = v17 + a4[7];
    *((float *)&v35 + 1) = v19;
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::push_back(
      a1 + 11,
      &v33);
    v34 = (struct D2D_POINT_2F)_mm_unpacklo_ps((__m128)*((unsigned int *)a4 + 3), (__m128)*((unsigned int *)a4 + 4)).m128_u64[0];
    detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::push_back(
      a1 + 30,
      &v34);
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::push_back(
      a1 + 11,
      &v33);
    v34 = (struct D2D_POINT_2F)_mm_unpacklo_ps((__m128)*(unsigned int *)a4, (__m128)*((unsigned int *)a4 + 1)).m128_u64[0];
    detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::push_back(
      a1 + 30,
      &v34);
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::push_back(
      a1 + 11,
      &v35);
    v34 = (struct D2D_POINT_2F)_mm_unpacklo_ps((__m128)*((unsigned int *)a4 + 3), (__m128)*((unsigned int *)a4 + 4)).m128_u64[0];
    detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::push_back(
      a1 + 30,
      &v34);
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::push_back(
      a1 + 11,
      &v35);
    v34 = (struct D2D_POINT_2F)_mm_unpacklo_ps((__m128)*(unsigned int *)a4, (__m128)*((unsigned int *)a4 + 1)).m128_u64[0];
    return detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::push_back(
             a1 + 30,
             &v34);
  }
  else
  {
    v21 = *((_DWORD *)a2 + 3);
    v22 = (__int64 *)&v36;
    v23 = *((_DWORD *)a2 + 1);
    v24 = 4LL;
    v36 = *a2;
    *(float *)&v37[1] = v36;
    v38 = *((_DWORD *)a2 + 2);
    v40 = v38;
    v37[0] = v21;
    v37[2] = v23;
    v39 = v23;
    v41 = v21;
    do
    {
      v25 = (_QWORD *)Matrix3x3::TransformHomogeneousPoint((Matrix3x3 *)a4, (struct D2D_POINT_2F)&v34, *v22++);
      *v27 = *v25;
      --v24;
    }
    while ( v24 );
    v28 = (float *)v37;
    do
    {
      v29 = v26 + 1;
      detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::push_back(
        v10,
        &v37[2 * v26 - 1]);
      v30 = v29 & 3;
      v31 = (__m128)(unsigned int)v37[2 * v30 - 1];
      v32 = (__m128)(unsigned int)v37[2 * v30];
      v31.m128_f32[0] = v31.m128_f32[0] - *(v28 - 1);
      v32.m128_f32[0] = v32.m128_f32[0] - *v28;
      v34 = (struct D2D_POINT_2F)_mm_unpacklo_ps(v31, v32).m128_u64[0];
      result = detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::push_back(
                 v13,
                 &v34);
      v28 += 2;
      v26 = v29;
    }
    while ( v29 < 4 );
  }
  return result;
}
