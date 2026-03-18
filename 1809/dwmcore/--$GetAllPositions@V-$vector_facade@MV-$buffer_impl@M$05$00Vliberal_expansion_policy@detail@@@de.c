/*
 * XREFs of ??$GetAllPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@2@MMM@Z @ 0x18000BB3C
 * Callers:
 *     ??$ComputeMeshPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXAEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@0AEBUD2D_RECT_F@@M@Z @ 0x18000B8A0 (--$ComputeMeshPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail.c)
 * Callees:
 *     ?push_back@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBM@Z @ 0x18000BE9C (-push_back@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@de.c)
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18000CB78 (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 */

unsigned __int64 __fastcall CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        __int64 a1,
        float **a2,
        _QWORD *a3,
        float a4,
        float a5,
        float a6)
{
  float v6; // xmm6_4
  float *v9; // rcx
  float v10; // xmm7_4
  unsigned __int64 result; // rax
  float v12; // xmm0_4
  float v13; // xmm8_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float *v16; // rbx
  char v17; // dl
  float *v18; // rsi
  float v19; // xmm0_4
  float v20; // [rsp+78h] [rbp+20h] BYREF

  v20 = a4;
  v6 = a4;
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a3);
  v9 = *a2;
  if ( a4 <= **a2 )
  {
    v6 = *v9;
    v20 = *v9;
  }
  v10 = a5;
  result = ((char *)a2[1] - (char *)v9) & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = *(float *)((char *)v9 + result - 16);
  if ( v12 <= a5 )
  {
    a5 = *(float *)((char *)v9 + result - 16);
    v10 = v12;
  }
  v13 = a6;
  if ( (float)(v10 - v6) > a6 )
  {
    v14 = v6 + a6;
    v15 = v10 - a6;
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(a3, &v20);
    v16 = *a2;
    v17 = 0;
    v18 = a2[1];
    while ( v16 != v18 )
    {
      v19 = *v16;
      if ( v14 < *v16 )
      {
        if ( v19 >= v15 )
          return detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(
                   a3,
                   &a5);
        if ( ((a3[1] - *a3) & 0xFFFFFFFFFFFFFFFCuLL) == 0
          || v13 < (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v19 - *(float *)(a3[1] - 4LL))) & _xmm) )
        {
          detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(
            a3,
            v16);
          v17 = 0;
        }
        if ( !v17 && v16[1] != v16[2] && (unsigned __int64)((__int64)(a3[1] - *a3) >> 2) > 1 )
        {
          detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(
            a3,
            v16);
          v17 = 1;
        }
      }
      v16 += 4;
    }
    return detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(
             a3,
             &a5);
  }
  return result;
}
