/*
 * XREFs of ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18002F8BC
 * Callers:
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18002F1F0 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x18002FA88 (-reserve_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        unsigned __int64 i,
        unsigned __int64 *a2,
        _QWORD *a3,
        float a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rbx
  unsigned __int64 *v8; // r14
  int v9; // r12d
  int v10; // esi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  float v14; // xmm6_4
  float v15; // xmm2_4
  unsigned __int64 v16; // rdx
  float v17; // xmm0_4
  __int64 v18; // rax
  int *v19; // rsi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  int v22; // xmm6_4
  float v23; // xmm2_4
  __int64 v24; // [rsp+30h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = 0LL;
  v8 = (unsigned __int64 *)i;
  if ( !*a2 )
  {
    v19 = *(int **)(i + 8);
    v20 = *(_QWORD *)i;
    result = (unsigned __int64)&v19[v20];
    v21 = (v20 * 4) >> 2;
    if ( (unsigned __int64)v19 > result )
      v21 = 0LL;
    if ( v21 )
    {
      do
      {
        v22 = *v19;
        result = detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                   a3,
                   (__int64)(a3[1] - *a3) >> 2);
        ++v5;
        ++v19;
        *(_DWORD *)result = v22;
      }
      while ( v5 != v21 );
    }
    return result;
  }
  v9 = 0;
  v10 = 0;
  if ( *(__int64 *)i <= 0 )
    return result;
  v11 = 0LL;
  v12 = 0LL;
  do
  {
    if ( v11 >= *v8 )
      goto LABEL_5;
    v13 = v8[1];
    v14 = 0.0;
    v15 = *(float *)(v13 + 4 * v11);
    if ( v10 >= (__int64)*a2 )
      goto LABEL_13;
    i = 12 * v12;
    while ( 1 )
    {
      if ( v12 >= *a2 )
        goto LABEL_5;
      v16 = a2[1];
      v24 = *(_QWORD *)(v16 + i);
      v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - *(float *)&v24)) & _xmm);
      if ( a4 >= v17 )
      {
        LODWORD(v14) = HIDWORD(*(_QWORD *)(v16 + i));
        if ( v9 )
        {
          if ( v11 - 1 >= *v8 )
            goto LABEL_5;
          if ( a4 < (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - *(float *)(v13 + 4 * v11 - 4))) & _xmm) )
            goto LABEL_13;
        }
        i = v10 + 1;
        if ( (__int64)i >= (__int64)*a2 )
        {
LABEL_22:
          if ( v12 < *a2 )
          {
            v14 = *(float *)(v16 + 12 * v12 + 8);
            goto LABEL_13;
          }
        }
        else
        {
          v18 = 12 * (v12 + 1);
          for ( i = v12 + 1; i < *a2; ++i )
          {
            if ( a4 < (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v16 + v18) - v15)) & _xmm) )
              goto LABEL_22;
            ++v10;
            ++v12;
            v18 += 12LL;
          }
        }
LABEL_5:
        `gsl::details::get_terminate_handler'::`2'::handler((gsl::details *)i);
        __debugbreak();
      }
      if ( *(float *)&v24 > v15 )
        break;
      ++v10;
      ++v12;
      i += 12LL;
      if ( v10 >= (__int64)*a2 )
        goto LABEL_13;
    }
    if ( v10 )
    {
      i = v10 - 1;
      if ( i < *a2 )
      {
        v16 += 12 * i;
        goto LABEL_34;
      }
      goto LABEL_5;
    }
    if ( !*a2 )
      goto LABEL_5;
LABEL_34:
    v23 = (float)(v15 - COERCE_FLOAT(*(_QWORD *)v16)) / (float)(*(float *)&v24 - COERCE_FLOAT(*(_QWORD *)v16));
    v14 = (float)((float)(1.0 - v23) * *(float *)(v16 + 8)) + (float)(v23 * *((float *)&v24 + 1));
LABEL_13:
    ++v9;
    ++v11;
    *(float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                a3,
                (__int64)(a3[1] - *a3) >> 2) = v14;
    result = v9;
  }
  while ( v9 < (__int64)*v8 );
  return result;
}
