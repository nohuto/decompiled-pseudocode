/*
 * XREFs of GetHimetricScaleForMonitor @ 0x1C01E6F04
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C022CB40 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     GetMonitorRect @ 0x1C0090E1C (GetMonitorRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ExpandedMonitorSpace @ 0x1C01E581C (ExpandedMonitorSpace.c)
 *     ?ReduceFraction@@YAXPEAK0@Z @ 0x1C01E5A80 (-ReduceFraction@@YAXPEAK0@Z.c)
 */

__int64 __fastcall GetHimetricScaleForMonitor(__int64 a1, _DWORD *a2, unsigned int *a3, __int64 a4)
{
  __int64 result; // rax
  __m128i v8; // xmm6
  __m128i v9; // xmm7
  __int64 v10; // rdx
  unsigned int i; // ecx
  unsigned int v12; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+28h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+28h] BYREF

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, (__int64)a2, (__int64)a3, a4) & 0xF) == 2 )
  {
    result = 1LL;
    *a3 = 1;
    *a2 = 1;
  }
  else
  {
    v8 = *(__m128i *)GetMonitorRect(&v13, a1);
    v9 = *(__m128i *)(*(_QWORD *)(a1 + 40) + 28LL);
    v13 = 0uLL;
    ExpandedMonitorSpace((__int64 *)&v13, v10);
    v14 = (_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8))
         - _mm_cvtsi128_si32(*(__m128i *)(*gpDispInfo + 24LL)))
        * (_mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - _mm_cvtsi128_si32(v8));
    v12 = (DWORD2(v13) - v13) * (_mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) - _mm_cvtsi128_si32(v9));
    ReduceFraction(&v14, &v12);
    result = v14;
    for ( i = v12; (unsigned int)result > 0x7FFFFFFF || i > 0x7FFFFFFF; i >>= 1 )
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
