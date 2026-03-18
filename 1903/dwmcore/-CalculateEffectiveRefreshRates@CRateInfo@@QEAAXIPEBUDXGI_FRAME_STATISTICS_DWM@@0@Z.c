/*
 * XREFs of ?CalculateEffectiveRefreshRates@CRateInfo@@QEAAXIPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z @ 0x180098EE0
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180096CB0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     McTemplateU0qff @ 0x180193544 (McTemplateU0qff.c)
 *     McTemplateU0qxxff @ 0x1801935C4 (McTemplateU0qxxff.c)
 */

void __fastcall CRateInfo::CalculateEffectiveRefreshRates(
        CRateInfo *this,
        unsigned int a2,
        const struct DXGI_FRAME_STATISTICS_DWM *a3,
        const struct DXGI_FRAME_STATISTICS_DWM *a4)
{
  unsigned int v4; // edi
  const struct DXGI_FRAME_STATISTICS_DWM *v5; // rbx
  signed __int64 *v6; // rsi
  CRateInfo *v8; // r10
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // xmm2_8
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  signed __int64 v17; // r12
  double LowPart; // xmm2_8
  __m128d v19; // xmm0
  __m128d v20; // xmm1
  char v21; // xmm3_1
  __m128d v22; // xmm0
  __int128 v23; // [rsp+50h] [rbp-58h]
  __m128i v24; // [rsp+70h] [rbp-38h]

  if ( a2 )
  {
    v4 = 0;
    v5 = a4;
    v6 = (signed __int64 *)((char *)this + 256);
    v8 = this;
    v9 = 0LL;
    v10 = a3 - a4;
    do
    {
      v24 = *(__m128i *)((char *)v5 + v10 + 16);
      v11 = _mm_srli_si128(v24, 8).m128i_u64[0];
      v23 = *((_OWORD *)v5 + 1);
      if ( v11 > 0 && *((__int64 *)&v23 + 1) > v11 )
      {
        v12 = *((_QWORD *)&v23 + 1) - v11;
        if ( (unsigned int)v23 < v24.m128i_i32[0] )
        {
          v13 = (unsigned int)(v23 + 1);
          v14 = v13 + (unsigned int)(-1 - v24.m128i_i32[0]);
        }
        else
        {
          LODWORD(v13) = v23 - v24.m128i_i32[0];
          v14 = (unsigned int)(v23 - v24.m128i_i32[0]);
        }
        v15 = (v12 + ((unsigned __int64)*v6 >> 1)) / *v6;
        v16 = v12 / v14;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          v19 = 0LL;
          LowPart = (double)(int)g_qpcFrequency.LowPart;
          v19.m128d_f64[0] = (double)(int)v16;
          if ( v16 < 0 )
            v19.m128d_f64[0] = v19.m128d_f64[0] + 1.844674407370955e19;
          v20 = 0LL;
          v20.m128d_f64[0] = (double)(int)v12;
          v19.m128d_f64[0] = v19.m128d_f64[0] * 1000.0 / LowPart;
          v21 = _mm_cvtpd_ps(v19).m128_u8[0];
          if ( v12 < 0 )
            v20.m128d_f64[0] = v20.m128d_f64[0] + 1.844674407370955e19;
          v20.m128d_f64[0] = v20.m128d_f64[0] * 1000.0 / LowPart;
          McTemplateU0qxxff(v13, v12 % v14, v4, v14, v15, _mm_cvtpd_ps(v20).m128_i8[0], v21);
          v8 = this;
        }
        if ( v16 && v15 <= 7 )
        {
          if ( *((_BYTE *)v8 + v9 + 384) )
          {
            v17 = *(v6 - 32);
            *((_BYTE *)v8 + v9 + 384) = 0;
          }
          else
          {
            v17 = (unsigned __int64)(v16 + 15 * *v6) >> 4;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
          {
            v22 = 0LL;
            v22.m128d_f64[0] = (double)(int)v17;
            if ( v17 < 0 )
              v22.m128d_f64[0] = v22.m128d_f64[0] + 1.844674407370955e19;
            v22.m128d_f64[0] = v22.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
            McTemplateU0qff(
              v13,
              (unsigned int)&EVTDESC_SCHEDULE_NEW_EFFECTIVE_REFRESH_PERIOD,
              v4,
              v14,
              _mm_cvtpd_ps(v22).m128_i8[0]);
            v8 = this;
          }
          if ( v17 )
            *v6 = v17;
        }
      }
      ++v4;
      ++v9;
      v5 = (const struct DXGI_FRAME_STATISTICS_DWM *)((char *)v5 + 32);
      ++v6;
    }
    while ( v4 < a2 );
  }
}
