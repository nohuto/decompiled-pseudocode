/*
 * XREFs of sub_1800B2AEC @ 0x1800B2AEC
 * Callers:
 *     sub_18012FD2E @ 0x18012FD2E (sub_18012FD2E.c)
 *     sub_18012FE00 @ 0x18012FE00 (sub_18012FE00.c)
 * Callees:
 *     sub_1800AC530 @ 0x1800AC530 (sub_1800AC530.c)
 */

__int64 __fastcall sub_1800B2AEC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = sub_1800AC530(v4, 0);
      v4 += 48LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
