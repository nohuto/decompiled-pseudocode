/*
 * XREFs of sub_1801328B3 @ 0x1801328B3
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 */

void __fastcall sub_1801328B3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    sub_1800177A0((__int64 *)(a2 + 88));
  }
}
