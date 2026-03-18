/*
 * XREFs of ?TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ @ 0x1800CD524
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800CCE70 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     McTemplateU0qNR0 @ 0x1801517C8 (McTemplateU0qNR0.c)
 *     McTemplateU0xxf @ 0x180151844 (McTemplateU0xxf.c)
 */

void __fastcall CScheduleFrameInfoVolatileData::TracePresentStats(CScheduleFrameInfoVolatileData *this)
{
  int v2; // edx
  char v3; // al
  __int64 i; // rdi
  __int64 v5; // rcx
  __m128d v6; // xmm1
  __int128 v7; // [rsp+70h] [rbp-48h]
  __int128 v8; // [rsp+A0h] [rbp-18h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qNR0(
      (_DWORD)this,
      (unsigned int)&EVTDESC_SCHEDULE_GETPRESENTSTATS1,
      *((_DWORD *)this + 118),
      *((_DWORD *)this + 118) << 9,
      (__int64)this + 480);
    v3 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 118); i = (unsigned int)(i + 1) )
      {
        v5 = 32 * (i + 15);
        v7 = *(_OWORD *)((char *)this + v5);
        v8 = *(_OWORD *)((char *)this + v5 + 16);
        if ( (v3 & 2) != 0 )
        {
          v6 = 0LL;
          v6.m128d_f64[0] = (double)(DWORD2(v8) - DWORD2(v7));
          if ( (__int64)(*((_QWORD *)&v8 + 1) - *((_QWORD *)&v7 + 1)) < 0 )
            v6.m128d_f64[0] = v6.m128d_f64[0] + 1.844674407370955e19;
          v6.m128d_f64[0] = v6.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
          McTemplateU0xxf(DWORD1(v7), v2, i, v8 - DWORD1(v7), _mm_cvtpd_ps(v6).m128_i8[0]);
          v3 = Microsoft_Windows_Dwm_CoreEnableBits;
        }
      }
    }
  }
}
