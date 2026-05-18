/*
 * XREFs of sub_1800B29DC @ 0x1800B29DC
 * Callers:
 *     sub_18012FC1E @ 0x18012FC1E (sub_18012FC1E.c)
 *     sub_18012FCF0 @ 0x18012FCF0 (sub_18012FCF0.c)
 * Callees:
 *     sub_1800AC420 @ 0x1800AC420 (sub_1800AC420.c)
 */

__int64 __fastcall sub_1800B29DC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800AC420(v4, 0);
      v4 += 48LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
