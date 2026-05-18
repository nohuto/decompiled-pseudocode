/*
 * XREFs of sub_180130619 @ 0x180130619
 * Callers:
 *     <none>
 * Callees:
 *     j_unknown_libname_116 @ 0x18000FF70 (j_unknown_libname_116.c)
 */

__int64 __fastcall sub_180130619(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return j_unknown_libname_116();
  }
  return result;
}
