/*
 * XREFs of GetHimetricScaleForMonitor @ 0x1C01E6D84
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C022C520 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ExpandedMonitorSpace @ 0x1C01E569C (ExpandedMonitorSpace.c)
 *     ?ReduceFraction@@YAXPEAK0@Z @ 0x1C01E5900 (-ReduceFraction@@YAXPEAK0@Z.c)
 */

__int64 __fastcall GetHimetricScaleForMonitor(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  __int64 result; // rax
  __m128i v7; // xmm6
  __m128i v8; // xmm7
  __int64 v9; // rdx
  unsigned int i; // ecx
  unsigned int v11; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+28h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+28h] BYREF

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, (__int64)a2, (__int64)a3) & 0xF) == 2 )
  {
    result = 1LL;
    *a3 = 1;
    *a2 = 1;
  }
  else
  {
    v7 = *(__m128i *)GetMonitorRect(&v12, a1);
    v8 = *(__m128i *)(*(_QWORD *)(a1 + 40) + 28LL);
    v12 = 0uLL;
    ExpandedMonitorSpace((__int64 *)&v12, v9);
    v13 = (_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8))
         - _mm_cvtsi128_si32(*(__m128i *)(*gpDispInfo + 24LL)))
        * (_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - _mm_cvtsi128_si32(v7));
    v11 = (DWORD2(v12) - v12) * (_mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - _mm_cvtsi128_si32(v8));
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
