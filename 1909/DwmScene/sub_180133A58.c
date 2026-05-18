/*
 * XREFs of sub_180133A58 @ 0x180133A58
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A7BF0 @ 0x1800A7BF0 (sub_1800A7BF0.c)
 */

__int64 __fastcall sub_180133A58(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return sub_1800A7BF0();
  }
  return result;
}
