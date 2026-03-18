/*
 * XREFs of sub_1401D1140 @ 0x1401D1140
 * Callers:
 *     sub_1401D1100 @ 0x1401D1100 (sub_1401D1100.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1401D1140(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 5;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_1401D1100(v2);
  return result;
}
