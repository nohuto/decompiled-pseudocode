/*
 * XREFs of ?GetDefaultWindowMarginsForWindowStyle@@YA?AU_MARGINS@@KKKN@Z @ 0x1800247FC
 * Callers:
 *     ?IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z @ 0x180024718 (-IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

struct _MARGINS *__fastcall GetDefaultWindowMarginsForWindowStyle(
        struct _MARGINS *__return_ptr retstr,
        int a2,
        char a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  __m128d v7; // xmm6
  int v8; // r13d
  __int64 v10; // rdi
  int v11; // esi
  int v12; // ebp
  int SystemMetricsForDpi; // eax
  __int64 v14; // rcx
  int v15; // r14d
  int v16; // eax

  *(_QWORD *)&retstr->cxLeftWidth = 0LL;
  *(_QWORD *)&retstr->cyTopHeight = 0LL;
  v7 = _mm_unpacklo_pd((__m128d)a5, (__m128d)a5);
  v8 = a2 & 0xC00000;
  if ( (a2 & 0xC00000) == 0xC00000 )
    retstr->cyTopHeight = GetSystemMetricsForDpi(a3 < 0 ? 51 : 4, a4);
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( (a2 & 0x40000) != 0 )
  {
    SystemMetricsForDpi = GetSystemMetricsForDpi(32LL, a4);
    v14 = 33LL;
  }
  else
  {
    if ( (a2 & 0x800000) == 0 )
      goto LABEL_6;
    SystemMetricsForDpi = GetSystemMetricsForDpi(5LL, a4);
    v14 = 6LL;
  }
  v11 = SystemMetricsForDpi;
  v12 = GetSystemMetricsForDpi(v14, a4);
LABEL_6:
  if ( v8 == 12582912 || (v15 = 0, (a2 & 0x40000) != 0) )
    v15 = 1;
  v16 = GetSystemMetricsForDpi(92LL, a4);
  if ( v16 > 0 && v15 )
  {
    v11 += v16;
    v12 += v16;
  }
  retstr->cxLeftWidth += v11;
  retstr->cxRightWidth += v11;
  retstr->cyTopHeight += v12;
  retstr->cyBottomHeight += v12;
  if ( *(double *)&a5 != 1.0 )
  {
    do
    {
      *(_QWORD *)(&retstr->cxLeftWidth + v10) = _mm_cvttpd_epi32(
                                                  _mm_div_pd(
                                                    _mm_cvtepi32_pd(_mm_loadl_epi64((const __m128i *)(&retstr->cxLeftWidth + v10))),
                                                    v7)).m128i_u64[0];
      v10 += 2LL;
    }
    while ( v10 < 4 );
  }
  return retstr;
}
