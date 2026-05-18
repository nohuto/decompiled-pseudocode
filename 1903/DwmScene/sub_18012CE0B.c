/*
 * XREFs of sub_18012CE0B @ 0x18012CE0B
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800670A0 @ 0x1800670A0 (sub_1800670A0.c)
 */

__int64 __fastcall sub_18012CE0B(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_1800670A0();
  }
  return result;
}
