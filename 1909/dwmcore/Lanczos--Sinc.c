/*
 * XREFs of Lanczos::Sinc @ 0x1801B0DC4
 * Callers:
 *     Lanczos::Lanczos @ 0x1801B0D58 (Lanczos--Lanczos.c)
 * Callees:
 *     _o_sin_0 @ 0x1800E8E34 (_o_sin_0.c)
 */

double __fastcall Lanczos::Sinc(double a1)
{
  if ( a1 == 0.0 )
    return DOUBLE_1_0;
  else
    return o_sin_0(a1) / a1;
}
