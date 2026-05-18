/*
 * XREFs of sub_18012F4A8 @ 0x18012F4A8
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E16C @ 0x18002E16C (sub_18002E16C.c)
 */

__int64 __fastcall sub_18012F4A8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return sub_18002E16C(*(__int64 **)(a2 + 272));
  }
  return result;
}
