/*
 * XREFs of sub_1801349B0 @ 0x1801349B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006C1B0 @ 0x18006C1B0 (sub_18006C1B0.c)
 */

__int64 __fastcall sub_1801349B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_18006C1B0();
  }
  return result;
}
