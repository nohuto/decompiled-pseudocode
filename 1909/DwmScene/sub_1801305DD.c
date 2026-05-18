/*
 * XREFs of sub_1801305DD @ 0x1801305DD
 * Callers:
 *     <none>
 * Callees:
 *     j_unknown_libname_116 @ 0x18000FFC0 (j_unknown_libname_116.c)
 */

__int64 __fastcall sub_1801305DD(__int64 a1, __int64 a2)
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
