/*
 * XREFs of sub_180125118 @ 0x180125118
 * Callers:
 *     sub_180125850 @ 0x180125850 (sub_180125850.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

double __fastcall sub_180125118(double a1, double (*a2)(void))
{
  double v2; // xmm1_8

  v2 = 0.0;
  if ( a1 >= 0.0 )
  {
    v2 = a1;
    if ( a1 > 1.0 )
      return 1.0 - a2() * 0.5;
  }
  if ( v2 >= 0.5 )
    return 1.0 - a2() * 0.5;
  else
    return a2() * 0.5;
}
