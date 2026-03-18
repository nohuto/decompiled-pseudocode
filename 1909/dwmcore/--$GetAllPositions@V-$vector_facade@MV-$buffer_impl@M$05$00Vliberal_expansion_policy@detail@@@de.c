/*
 * XREFs of ??$GetAllPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@2@MMM@Z @ 0x18002F730
 * Callers:
 *     ??$ComputeMeshPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXAEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@0AEBUD2D_RECT_F@@M@Z @ 0x18002F16C (--$ComputeMeshPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail.c)
 * Callees:
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002F52C (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x18002FA88 (-reserve_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail.c)
 */

float __fastcall CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        __int64 a1,
        float **a2,
        __int64 *a3,
        float a4,
        float a5,
        float a6)
{
  float v6; // xmm6_4
  float *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rax
  char v13; // r8
  float result; // xmm0_4
  unsigned __int64 v15; // rdx
  _DWORD *v16; // rax
  float *v17; // rbx
  float *v18; // rax
  float *v19; // rsi
  float v20; // xmm7_4
  unsigned __int64 v21; // rax

  v6 = a4;
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a3);
  v9 = *a2;
  if ( a4 <= **a2 )
    v6 = *v9;
  v20 = a5;
  v21 = ((char *)a2[1] - (char *)v9) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *(float *)((char *)v9 + v21 - 16) <= a5 )
    v20 = *(float *)((char *)v9 + v21 - 16);
  result = v20 - v6;
  if ( (float)(v20 - v6) > a6 )
  {
    v18 = (float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                     a3,
                     (a3[1] - *a3) >> 2);
    v17 = *a2;
    v13 = 0;
    v19 = a2[1];
    *v18 = v6;
    while ( v17 != v19 )
    {
      result = *v17;
      if ( (float)(v6 + a6) < *v17 )
      {
        if ( result >= (float)(v20 - a6) )
          break;
        v10 = a3[1];
        v11 = *a3;
        if ( ((v10 - *a3) & 0xFFFFFFFFFFFFFFFCuLL) == 0
          || a6 < (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(result - *(float *)(v10 - 4))) & _xmm) )
        {
          v12 = (_DWORD *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                            a3,
                            (v10 - v11) >> 2);
          v13 = 0;
          *v12 = *(_DWORD *)v17;
          v10 = a3[1];
          v11 = *a3;
        }
        result = v17[1];
        if ( !v13 && result != v17[2] )
        {
          v15 = (v10 - v11) >> 2;
          if ( v15 > 1 )
          {
            v16 = (_DWORD *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                              a3,
                              v15);
            v13 = 1;
            *v16 = *(_DWORD *)v17;
          }
        }
      }
      v17 += 4;
    }
    *(float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                a3,
                (a3[1] - *a3) >> 2) = v20;
  }
  return result;
}
