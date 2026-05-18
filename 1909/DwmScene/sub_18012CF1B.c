/*
 * XREFs of sub_18012CF1B @ 0x18012CF1B
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800671B0 @ 0x1800671B0 (sub_1800671B0.c)
 */

__int64 __fastcall sub_18012CF1B(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_1800671B0();
  }
  return result;
}
