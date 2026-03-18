/*
 * XREFs of ?GetWakeupTimeBeforeVBlank@CScheduler@CComputeScribbleRenderer@@AEAAXV?$span@QEAVCComputeScribble@@$0?0@gsl@@PEAM1@Z @ 0x1801B5AB4
 * Callers:
 *     ?ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V?$span@QEAVCComputeScribble@@$0?0@gsl@@_KI@Z @ 0x1801B6648 (-ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V-$span@QEAV.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??$min@M@std@@YAAEBMAEBM0@Z @ 0x1800ECB7C (--$min@M@std@@YAAEBMAEBM0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18015D404 (-terminate@details@gsl@@YAXXZ.c)
 */

float *__fastcall CComputeScribbleRenderer::CScheduler::GetWakeupTimeBeforeVBlank(
        __int64 a1,
        unsigned __int64 *a2,
        float *a3,
        float *a4)
{
  float v4; // xmm8_4
  float *result; // rax
  __int64 v10; // rdx
  gsl::details *v11; // rcx
  unsigned __int64 v12; // rsi
  float v13; // xmm10_4
  float v14; // xmm8_4
  float v15; // xmm6_4
  float v16; // xmm10_4
  float v17; // xmm7_4
  __int64 v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rcx
  __m128i v21; // xmm0
  float v22; // [rsp+30h] [rbp-B8h] BYREF
  float v23; // [rsp+34h] [rbp-B4h] BYREF
  char v24[4]; // [rsp+38h] [rbp-B0h] BYREF
  int v25; // [rsp+3Ch] [rbp-ACh]

  v4 = *(float *)(a1 + 40);
  v23 = FLOAT_0_5;
  v22 = (float)CCommonRegistryData::SuperWetTiming::RefreshRatePercentage / 100.0;
  result = std::min<float>(&v22, &v23);
  v12 = *a2;
  v13 = v4;
  v14 = v4 - *(float *)(a1 + 44);
  v15 = 0.0;
  v16 = v13 * *result;
  v17 = 0.0;
  v18 = *a2 - 1;
  if ( v18 >= 0 )
  {
    do
    {
      v19 = v18;
      if ( v18 >= v12 )
      {
        gsl::details::terminate(v11);
        JUMPOUT(0x1801B5C54LL);
      }
      v20 = *(_QWORD *)(a2[1] + 8 * v18);
      (*(void (__fastcall **)(__int64, __int64, char *, float *))(*(_QWORD *)v20 + 24LL))(v20, v10, v24, &v22);
      result = (float *)(unsigned int)v25;
      v21 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 36));
      if ( v25 < 0 )
        result = 0LL;
      --v18;
      v17 = v17 + v22;
      v15 = fmaxf(
              (float)((float)((float)((float)(1.0 - (float)((float)(int)result / _mm_cvtepi32_ps(v21).m128_f32[0])) * v14)
                            + v16)
                    + v22)
            + *(float *)(a1 + 44),
              v22 + v15);
    }
    while ( v19 > 0 );
  }
  *a3 = v15 + *(float *)a1;
  *a4 = v17 + *(float *)a1;
  return result;
}
