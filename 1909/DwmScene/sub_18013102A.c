/*
 * XREFs of sub_18013102A @ 0x18013102A
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FFF8 @ 0x18000FFF8 (sub_18000FFF8.c)
 */

__int64 __fastcall sub_18013102A(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return sub_18000FFF8();
  }
  return result;
}
