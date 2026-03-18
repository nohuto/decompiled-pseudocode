/*
 * XREFs of GetAdjustedHimetricLong @ 0x1C012E060
 * Callers:
 *     GetAdjustedHimetric @ 0x1C012DF70 (GetAdjustedHimetric.c)
 * Callees:
 *     LongLongToLong @ 0x1C00C066C (LongLongToLong.c)
 */

__int64 __fastcall GetAdjustedHimetricLong(int a1, LONG a2, int a3, LONG *a4)
{
  LONG *v4; // r9
  int v5; // r10d
  __int64 v6; // r11

  if ( a3 && a1 && a2 )
  {
    if ( LongLongToLong(a2 * (__int64)a3, a4) < 0 || LongLongToLong(v6 + *v4 / v5, v4) < 0 )
      return 0LL;
  }
  else
  {
    *a4 = a2;
  }
  return 1LL;
}
