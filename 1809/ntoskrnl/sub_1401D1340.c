/*
 * XREFs of sub_1401D1340 @ 0x1401D1340
 * Callers:
 *     sub_1401D1300 @ 0x1401D1300 (sub_1401D1300.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1401D1340(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 5;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_1401D1300(v2);
  return result;
}
