/*
 * XREFs of sub_180130F1A @ 0x180130F1A
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FFA8 @ 0x18000FFA8 (sub_18000FFA8.c)
 */

__int64 __fastcall sub_180130F1A(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return sub_18000FFA8();
  }
  return result;
}
