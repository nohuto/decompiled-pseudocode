/*
 * XREFs of _Xp_addx @ 0x1800B6FA0
 * Callers:
 *     _Stodx @ 0x1800AF2B8 (_Stodx.c)
 *     _Xp_mulx @ 0x1800B72C8 (_Xp_mulx.c)
 * Callees:
 *     _Xp_addh @ 0x1800B6C48 (_Xp_addh.c)
 */

double *__fastcall Xp_addx(double *a1, int a2, double *a3, int a4)
{
  int i; // edi

  for ( i = 0; i < a4; ++a3 )
  {
    if ( *a3 == 0.0 )
      break;
    Xp_addh(a1, a2, *a3);
    ++i;
  }
  return a1;
}
