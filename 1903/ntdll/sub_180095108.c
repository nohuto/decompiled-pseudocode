/*
 * XREFs of sub_180095108 @ 0x180095108
 * Callers:
 *     fabs @ 0x18008FE30 (fabs.c)
 * Callees:
 *     _errno @ 0x180084320 (_errno.c)
 *     sub_180095454 @ 0x180095454 (sub_180095454.c)
 *     sub_180095704 @ 0x180095704 (sub_180095704.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_180095108(int a1, double a2, __int64 a3, int a4)
{
  __m128 result; // xmm0

  if ( dword_18015FF30 )
  {
    *errno() = 33;
    sub_180095704(a3, 65472LL);
    return *(__m128 *)&a2;
  }
  else
  {
    sub_180095454(1, a1, a3, a4, *(__int64 *)&a2, a3);
  }
  return result;
}
