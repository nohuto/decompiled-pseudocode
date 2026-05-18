/*
 * XREFs of sub_1801348A0 @ 0x1801348A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006C0A0 @ 0x18006C0A0 (sub_18006C0A0.c)
 */

__int64 __fastcall sub_1801348A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_18006C0A0();
  }
  return result;
}
