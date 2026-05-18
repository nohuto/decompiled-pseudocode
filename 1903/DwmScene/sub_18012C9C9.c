/*
 * XREFs of sub_18012C9C9 @ 0x18012C9C9
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E804 @ 0x18000E804 (sub_18000E804.c)
 */

__int64 __fastcall sub_18012C9C9(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_18000E804(*(_QWORD *)(a2 + 80));
  }
  return result;
}
