/*
 * XREFs of sub_1801304CD @ 0x1801304CD
 * Callers:
 *     <none>
 * Callees:
 *     j_unknown_libname_116 @ 0x18000FF70 (j_unknown_libname_116.c)
 */

__int64 __fastcall sub_1801304CD(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return j_unknown_libname_116();
  }
  return result;
}
