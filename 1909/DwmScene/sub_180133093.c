/*
 * XREFs of sub_180133093 @ 0x180133093
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008954C @ 0x18008954C (sub_18008954C.c)
 */

__int64 __fastcall sub_180133093(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_18008954C(*(__int64 **)(a2 + 88));
  }
  return result;
}
