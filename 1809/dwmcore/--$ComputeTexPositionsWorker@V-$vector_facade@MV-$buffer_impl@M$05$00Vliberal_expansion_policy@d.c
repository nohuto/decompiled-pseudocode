/*
 * XREFs of ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18000BCA0
 * Callers:
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18000B924 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ??A?$span@$$CBM$0?0@gsl@@QEBAAEBM_J@Z @ 0x18000BE48 (--A-$span@$$CBM$0-0@gsl@@QEBAAEBM_J@Z.c)
 *     ??A?$span@$$CBUVertexShaderOutput@@$0?0@gsl@@QEBAAEBUVertexShaderOutput@@_J@Z @ 0x18000BE70 (--A-$span@$$CBUVertexShaderOutput@@$0-0@gsl@@QEBAAEBUVertexShaderOutput@@_J@Z.c)
 *     ?push_back@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBM@Z @ 0x18000BE9C (-push_back@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@de.c)
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBUKeyframeData@@$0?0@gsl@@$0A@@01@0@Z @ 0x1801689A4 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBUKeyframeData@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??D?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@QEBAAEBMXZ @ 0x1801B31A4 (--D-$span_iterator@V-$span@$$CBM$0-0@gsl@@$0A@@details@gsl@@QEBAAEBMXZ.c)
 */

__int64 __fastcall CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        float a4)
{
  __int64 result; // rax
  int v8; // r15d
  int v9; // ebx
  __int64 v10; // r14
  float *v11; // rax
  float v12; // xmm7_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // xmm0_8
  __int64 *v19; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+28h] [rbp-58h]
  __int128 i; // [rsp+30h] [rbp-50h] BYREF
  __int128 v22; // [rsp+40h] [rbp-40h] BYREF
  float v23; // [rsp+B8h] [rbp+38h] BYREF

  result = *a1;
  if ( *a2 )
  {
    v8 = 0;
    v9 = 0;
    if ( result > 0 )
    {
      v10 = 0LL;
      do
      {
        v11 = (float *)gsl::span<float const,-1>::operator[](a1, v10);
        v23 = 0.0;
        v12 = *v11;
        while ( 1 )
        {
          if ( v9 >= *a2 )
            goto LABEL_9;
          *(_QWORD *)&i = *(_QWORD *)gsl::span<VertexShaderOutput const,-1>::operator[](a2, v9);
          v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12 - *(float *)&i)) & _xmm);
          if ( a4 >= v13 )
            break;
          if ( *(float *)&i > v12 )
          {
            if ( v9 )
              v16 = v9 - 1;
            else
              v16 = 0LL;
            v17 = gsl::span<VertexShaderOutput const,-1>::operator[](a2, v16);
            v18 = *(__int64 **)v17;
            LODWORD(v17) = *(_DWORD *)(v17 + 8);
            v19 = v18;
            LODWORD(v20) = v17;
            v15 = (float)((float)(1.0 - (float)((float)(v12 - *(float *)&v18) / (float)(*(float *)&i - *(float *)&v18)))
                        * *(float *)&v17)
                + (float)((float)((float)(v12 - *(float *)&v18) / (float)(*(float *)&i - *(float *)&v18))
                        * *((float *)&i + 1));
LABEL_16:
            v23 = v15;
            goto LABEL_9;
          }
          ++v9;
        }
        v23 = *((float *)&i + 1);
        if ( !v8
          || (v14 = *(float *)gsl::span<float const,-1>::operator[](a1, v10 - 1),
              a4 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)gsl::span<float const,-1>::operator[](
                                                                                   a1,
                                                                                   v10)
                                                                     - v14)) & _xmm)) )
        {
          if ( v9 + 1 < *a2 )
          {
            while ( a4 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)gsl::span<VertexShaderOutput const,-1>::operator[](
                                                                                         a2,
                                                                                         v9 + 1LL)
                                                                           - v12)) & _xmm) )
              ++v9;
          }
          v15 = *(float *)(gsl::span<VertexShaderOutput const,-1>::operator[](a2, v9) + 8);
          goto LABEL_16;
        }
LABEL_9:
        result = detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(
                   a3,
                   &v23);
        v10 = ++v8;
      }
      while ( v8 < *a1 );
    }
  }
  else
  {
    v19 = a1;
    v20 = result;
    for ( i = (unsigned __int64)a1;
          ;
          gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&i) )
    {
      v22 = i;
      result = gsl::details::operator!=(&v22, &v19);
      if ( !(_BYTE)result )
        break;
      v23 = *(float *)gsl::details::span_iterator<gsl::span<float const,-1>,0>::operator*(&i);
      detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(a3, &v23);
    }
  }
  return result;
}
