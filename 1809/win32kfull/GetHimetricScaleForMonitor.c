/*
 * XREFs of GetHimetricScaleForMonitor @ 0x1C01D2320
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C0214D70 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 *     ExpandedMonitorSpace @ 0x1C01D0CAC (ExpandedMonitorSpace.c)
 *     ?ReduceFraction@@YAXPEAK0@Z @ 0x1C01D0EFC (-ReduceFraction@@YAXPEAK0@Z.c)
 */

__int64 __fastcall GetHimetricScaleForMonitor(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  __int64 result; // rax
  __m128i v7; // xmm6
  __m128i v8; // xmm7
  __int64 v9; // rdx
  unsigned int i; // ecx
  unsigned int v11; // [rsp+20h] [rbp-48h] BYREF
  __m128i v12; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+20h] BYREF

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, (__int64)a2) & 0xF) == 2 )
  {
    result = 1LL;
    *a3 = 1;
    *a2 = 1;
  }
  else
  {
    v7 = *GetMonitorRect(&v12, a1);
    v8 = *(__m128i *)(*(_QWORD *)(a1 + 40) + 28LL);
    ExpandedMonitorSpace(v12.m128i_i64, v9);
    v13 = (_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8))
         - _mm_cvtsi128_si32(*(__m128i *)(*gpDispInfo + 24LL)))
        * (_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - _mm_cvtsi128_si32(v7));
    v11 = (v12.m128i_i32[2] - v12.m128i_i32[0]) * (_mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - _mm_cvtsi128_si32(v8));
    ReduceFraction(&v13, &v11);
    result = v13;
    for ( i = v11; (unsigned int)result > 0x7FFFFFFF || i > 0x7FFFFFFF; i >>= 1 )
      result = (unsigned int)result >> 1;
    if ( !i || !(_DWORD)result )
    {
      result = 1LL;
      i = 1;
    }
    *a2 = result;
    *a3 = i;
  }
  return result;
}
