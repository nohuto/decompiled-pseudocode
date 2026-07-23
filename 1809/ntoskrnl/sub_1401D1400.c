/*
 * XREFs of sub_1401D1400 @ 0x1401D1400
 * Callers:
 *     sub_1401D13C0 @ 0x1401D13C0 (sub_1401D13C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1401D1400(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 7;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_1401D13C0(v2);
  return result;
}
