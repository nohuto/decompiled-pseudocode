/*
 * XREFs of sub_1801327A3 @ 0x1801327A3
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017730 @ 0x180017730 (sub_180017730.c)
 */

void __fastcall sub_1801327A3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    sub_180017730((__int64 *)(a2 + 88));
  }
}
