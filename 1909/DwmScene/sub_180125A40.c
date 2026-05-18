/*
 * XREFs of sub_180125A40 @ 0x180125A40
 * Callers:
 *     <none>
 * Callees:
 *     _o_sin @ 0x180125B7C (_o_sin.c)
 */

__int64 __fastcall sub_180125A40(__int64 a1, double a2)
{
  __int64 result; // rax

  if ( a2 < 1.0 && a2 > 0.0 )
    return o_sin();
  return result;
}
