/*
 * XREFs of ?GetDefaultWindowMarginsForWindowStyle@@YA?AU_MARGINS@@KKKN@Z @ 0x18000DB74
 * Callers:
 *     ?IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z @ 0x18000DA50 (-IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

struct _MARGINS *__fastcall GetDefaultWindowMarginsForWindowStyle(
        struct _MARGINS *__return_ptr retstr,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  __m128d v7; // xmm6
  int v8; // r13d
  __int64 v10; // rdi
  int v11; // esi
  int v12; // ebp
  int SystemMetricsForDpi; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // r14d
  int v17; // eax

  *(_QWORD *)&retstr->cxLeftWidth = 0LL;
  *(_QWORD *)&retstr->cyTopHeight = 0LL;
  v7 = _mm_unpacklo_pd((__m128d)a5, (__m128d)a5);
  v8 = a2 & 0xC00000;
  if ( (a2 & 0xC00000) == 0xC00000 )
  {
    LOBYTE(a3) = -(a3 & 0x80);
    retstr->cyTopHeight = GetSystemMetricsForDpi((_BYTE)a3 != 0 ? 51 : 4, a4, a3);
  }
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( (a2 & 0x40000) != 0 )
  {
    SystemMetricsForDpi = GetSystemMetricsForDpi(32LL, a4, a3);
    v15 = 33LL;
  }
  else
  {
    if ( (a2 & 0x800000) == 0 )
      goto LABEL_6;
    SystemMetricsForDpi = GetSystemMetricsForDpi(5LL, a4, a3);
    v15 = 6LL;
  }
  v11 = SystemMetricsForDpi;
  v12 = GetSystemMetricsForDpi(v15, a4, v14);
LABEL_6:
  if ( v8 == 12582912 || (v16 = 0, (a2 & 0x40000) != 0) )
    v16 = 1;
  v17 = GetSystemMetricsForDpi(92LL, a4, a3);
  if ( v17 > 0 && v16 )
  {
    v11 += v17;
    v12 += v17;
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
