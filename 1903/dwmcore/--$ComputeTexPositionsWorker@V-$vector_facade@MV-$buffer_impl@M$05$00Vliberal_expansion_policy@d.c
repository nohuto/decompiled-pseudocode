/*
 * XREFs of ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18000F7C4
 * Callers:
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18000EA7C (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 * Callees:
 *     ??A?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEBAAEBURampPair@CoordMap@@_J@Z @ 0x18000F97C (--A-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEBAAEBURampPair@CoordMap@@_J@Z.c)
 *     ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x18000F9A0 (-reserve_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        gsl::details *a1,
        _QWORD *a2,
        _QWORD *a3,
        float a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rbx
  int v9; // r13d
  int v10; // edi
  unsigned __int64 v11; // rsi
  __int64 v12; // r12
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  int *v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  int v19; // xmm6_4
  __int64 v20; // rdx
  __int64 v21; // rax
  float v22; // xmm7_4
  float v23[12]; // [rsp+30h] [rbp-78h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = 0LL;
  if ( *a2 )
  {
    v9 = 0;
    v10 = 0;
    if ( *(__int64 *)a1 > 0 )
    {
      v11 = 0LL;
      do
      {
        if ( v11 >= *(_QWORD *)a1 )
        {
LABEL_28:
          `gsl::details::get_terminate_handler'::`2'::handler(a1);
          __debugbreak();
        }
        v12 = *((_QWORD *)a1 + 1);
        v13 = 0.0;
        v14 = *(float *)(v12 + 4 * v11);
        while ( 1 )
        {
          if ( v10 >= *a2 )
            goto LABEL_11;
          *(_QWORD *)v23 = *(_QWORD *)gsl::span<CoordMap::RampPair const,-1>::operator[](a2, v10);
          v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - v23[0])) & _xmm);
          if ( a4 >= v15 )
            break;
          if ( v23[0] > v14 )
          {
            if ( v10 )
              v20 = v10 - 1;
            else
              v20 = 0LL;
            v21 = gsl::span<CoordMap::RampPair const,-1>::operator[](a2, v20);
            v22 = (float)(v14 - COERCE_FLOAT(*(_QWORD *)v21)) / (float)(v23[0] - COERCE_FLOAT(*(_QWORD *)v21));
            v13 = (float)((float)(1.0 - v22) * *(float *)(v21 + 8)) + (float)(v22 * v23[1]);
            goto LABEL_11;
          }
          ++v10;
        }
        v13 = v23[1];
        if ( v9 )
        {
          if ( v11 - 1 >= *(_QWORD *)a1 )
            goto LABEL_28;
          if ( a4 < (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v12 + 4 * v11)
                                                                     - *(float *)(v12 + 4 * v11 - 4))) & _xmm) )
            goto LABEL_11;
        }
        if ( v10 + 1 < *a2 )
        {
          while ( a4 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)gsl::span<CoordMap::RampPair const,-1>::operator[](
                                                                                       a2,
                                                                                       v10 + 1LL)
                                                                         - v14)) & _xmm) )
            ++v10;
        }
        v13 = *(float *)(gsl::span<CoordMap::RampPair const,-1>::operator[](a2, v10) + 8);
LABEL_11:
        ++v9;
        ++v11;
        *(float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                    a3,
                    (__int64)(a3[1] - *a3) >> 2) = v13;
        result = v9;
      }
      while ( v9 < *(_QWORD *)a1 );
    }
  }
  else
  {
    v16 = (int *)*((_QWORD *)a1 + 1);
    v17 = *(_QWORD *)a1;
    result = (unsigned __int64)&v16[v17];
    v18 = (v17 * 4) >> 2;
    if ( (unsigned __int64)v16 > result )
      v18 = 0LL;
    if ( v18 )
    {
      do
      {
        v19 = *v16;
        result = detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                   a3,
                   (__int64)(a3[1] - *a3) >> 2);
        ++v5;
        ++v16;
        *(_DWORD *)result = v19;
      }
      while ( v5 != v18 );
    }
  }
  return result;
}
