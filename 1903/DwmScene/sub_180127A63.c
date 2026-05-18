/*
 * XREFs of sub_180127A63 @ 0x180127A63
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FFA8 @ 0x18000FFA8 (sub_18000FFA8.c)
 */

__int64 __fastcall sub_180127A63(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18000FFA8();
  }
  return result;
}
