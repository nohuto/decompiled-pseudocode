/*
 * XREFs of sub_1801327C9 @ 0x1801327C9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017730 @ 0x180017730 (sub_180017730.c)
 */

void __fastcall sub_1801327C9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    sub_180017730((__int64 *)(a2 + 64));
  }
}
