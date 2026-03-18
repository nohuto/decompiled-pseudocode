/*
 * XREFs of ?CalculateEffectiveRefreshRates@CRateInfo@@QEAAXIPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z @ 0x180059938
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800CCE70 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     McTemplateU0qff @ 0x1801518D0 (McTemplateU0qff.c)
 *     McTemplateU0qxxff @ 0x180151950 (McTemplateU0qxxff.c)
 */

void __fastcall CRateInfo::CalculateEffectiveRefreshRates(
        CRateInfo *this,
        unsigned int a2,
        const struct DXGI_FRAME_STATISTICS_DWM *a3,
        const struct DXGI_FRAME_STATISTICS_DWM *a4)
{
  signed __int64 *v4; // rdi
  unsigned int v5; // r14d
  __int64 v6; // r15
  __int64 v7; // r12
  const struct DXGI_FRAME_STATISTICS_DWM *v8; // rsi
  __int64 v10; // xmm2_8
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  signed __int64 v16; // rbx
  double LowPart; // xmm2_8
  __m128d v18; // xmm0
  __m128d v19; // xmm1
  char v20; // xmm3_1
  __m128d v21; // xmm0
  __int128 v22; // [rsp+50h] [rbp-58h]
  __m128i v23; // [rsp+70h] [rbp-38h]

  if ( a2 )
  {
    v4 = (signed __int64 *)((char *)this + 256);
    v5 = 0;
    v6 = 0LL;
    v7 = a3 - a4;
    v8 = a4;
    do
    {
      v23 = *(__m128i *)((char *)v8 + v7 + 16);
      v10 = _mm_srli_si128(v23, 8).m128i_u64[0];
      v22 = *((_OWORD *)v8 + 1);
      if ( v10 > 0 && *((__int64 *)&v22 + 1) > v10 )
      {
        v11 = *((_QWORD *)&v22 + 1) - v10;
        if ( (unsigned int)v22 < v23.m128i_i32[0] )
        {
          v12 = (unsigned int)(v22 + 1);
          v13 = v12 + (unsigned int)(-1 - v23.m128i_i32[0]);
        }
        else
        {
          LODWORD(v12) = v22 - v23.m128i_i32[0];
          v13 = (unsigned int)(v22 - v23.m128i_i32[0]);
        }
        v14 = (v11 + ((unsigned __int64)*v4 >> 1)) / *v4;
        v15 = v11 / v13;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          v18 = 0LL;
          LowPart = (double)(int)g_qpcFrequency.LowPart;
          v18.m128d_f64[0] = (double)(int)v15;
          if ( v15 < 0 )
            v18.m128d_f64[0] = v18.m128d_f64[0] + 1.844674407370955e19;
          v19 = 0LL;
          v19.m128d_f64[0] = (double)(int)v11;
          v18.m128d_f64[0] = v18.m128d_f64[0] * 1000.0 / LowPart;
          v20 = _mm_cvtpd_ps(v18).m128_u8[0];
          if ( v11 < 0 )
            v19.m128d_f64[0] = v19.m128d_f64[0] + 1.844674407370955e19;
          v19.m128d_f64[0] = v19.m128d_f64[0] * 1000.0 / LowPart;
          McTemplateU0qxxff(v12, v11 % v13, v5, v13, v14, _mm_cvtpd_ps(v19).m128_i8[0], v20);
        }
        if ( v15 && v14 <= 7 )
        {
          if ( *((_BYTE *)this + v6 + 384) )
          {
            v16 = *(v4 - 32);
            *((_BYTE *)this + v6 + 384) = 0;
          }
          else
          {
            v16 = (unsigned __int64)(v15 + 15 * *v4) >> 4;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
          {
            v21 = 0LL;
            v21.m128d_f64[0] = (double)(int)v16;
            if ( v16 < 0 )
              v21.m128d_f64[0] = v21.m128d_f64[0] + 1.844674407370955e19;
            v21.m128d_f64[0] = v21.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
            McTemplateU0qff(
              v12,
              (unsigned int)&EVTDESC_SCHEDULE_NEW_EFFECTIVE_REFRESH_PERIOD,
              v5,
              v13,
              _mm_cvtpd_ps(v21).m128_i8[0]);
          }
          if ( v16 )
            *v4 = v16;
        }
      }
      ++v5;
      ++v6;
      v8 = (const struct DXGI_FRAME_STATISTICS_DWM *)((char *)v8 + 32);
      ++v4;
    }
    while ( v5 < a2 );
  }
}
