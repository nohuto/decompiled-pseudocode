/*
 * XREFs of sub_1800DB6E0 @ 0x1800DB6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DB6E0(unsigned __int64 a1, __int64 a2)
{
  if ( !qword_18017A270 )
    return 3221225485LL;
  LOBYTE(a2) = a1 & 3;
  return qword_18017A270(a1 & 0xFFFFFFFFFFFFFFFCuLL, a2);
}
