/*
 * XREFs of ?GetWakeupTimeBeforeVBlank@CScheduler@CComputeScribbleRenderer@@AEAAXV?$span@QEAVCComputeScribble@@$0?0@gsl@@PEAM1@Z @ 0x18022F310
 * Callers:
 *     ?ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V?$span@QEAVCComputeScribble@@$0?0@gsl@@_KI@Z @ 0x18022FD24 (-ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V-$span@QEAV.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

unsigned __int64 __fastcall CComputeScribbleRenderer::CScheduler::GetWakeupTimeBeforeVBlank(
        __int64 a1,
        __int64 *a2,
        float *a3,
        float *a4)
{
  unsigned __int64 result; // rax
  __int64 v6; // rbx
  float v8; // xmm8_4
  float v9; // xmm10_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  __int64 v14; // r15
  __int64 v15; // rcx
  __m128i v16; // xmm0
  float v17; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v18[4]; // [rsp+38h] [rbp-A0h] BYREF
  int v19; // [rsp+3Ch] [rbp-9Ch]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v6 = *a2 - 1;
  v8 = *(float *)(a1 + 40) - *(float *)(a1 + 44);
  v9 = *(float *)(a1 + 40) * 0.1;
  v12 = 0.0;
  v13 = 0.0;
  if ( v6 >= 0 )
  {
    do
    {
      v14 = v6;
      if ( v6 < 0 || v6 >= *a2 )
      {
        gsl::details::terminate((gsl::details *)a1);
        JUMPOUT(0x18022F47ALL);
      }
      v15 = *(_QWORD *)(a2[1] + 8 * v6);
      (*(void (__fastcall **)(__int64, __int64 *, _BYTE *, float *))(*(_QWORD *)v15 + 24LL))(v15, a2, v18, &v17);
      result = (unsigned int)v19;
      v16 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 36));
      if ( v19 < 0 )
        result = 0LL;
      --v6;
      v13 = v13 + v17;
      v12 = fmaxf(
              (float)((float)((float)((float)(1.0 - (float)((float)(int)result / _mm_cvtepi32_ps(v16).m128_f32[0])) * v8)
                            + v9)
                    + v17)
            + *(float *)(a1 + 44),
              v17 + v12);
    }
    while ( v14 > 0 );
  }
  *a3 = v12 + *(float *)a1;
  *a4 = v13 + *(float *)a1;
  return result;
}
