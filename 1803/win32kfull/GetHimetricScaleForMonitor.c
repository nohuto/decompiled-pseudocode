/*
 * XREFs of GetHimetricScaleForMonitor @ 0x1C01AF4C4
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01EE7E0 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     ExpandedMonitorSpace @ 0x1C01ADC14 (ExpandedMonitorSpace.c)
 *     ?ReduceFraction@@YAXPEAK0@Z @ 0x1C01ADE5C (-ReduceFraction@@YAXPEAK0@Z.c)
 */

__int64 __fastcall GetHimetricScaleForMonitor(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  __int64 result; // rax
  __m128i v7; // xmm6
  __m128i v8; // xmm7
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int i; // ecx
  unsigned int v13; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+20h] BYREF

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, (__int64)a2) & 0xF) == 2 )
  {
    result = 1LL;
    *a3 = 1;
    *a2 = 1;
  }
  else
  {
    v7 = *(__m128i *)GetMonitorRect(&v14, a1);
    v8 = *(__m128i *)(*(_QWORD *)(a1 + 40) + 28LL);
    ExpandedMonitorSpace((__int64 *)&v14, v9, v10, v11);
    v15 = (_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - _mm_cvtsi128_si32(v7))
        * (_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8))
         - _mm_cvtsi128_si32(*(__m128i *)(*gpDispInfo + 24LL)));
    v13 = (DWORD2(v14) - v14) * (_mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - _mm_cvtsi128_si32(v8));
    ReduceFraction(&v15, &v13);
    result = v15;
    for ( i = v13; (unsigned int)result > 0x7FFFFFFF || i > 0x7FFFFFFF; i >>= 1 )
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
