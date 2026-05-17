/*
 * XREFs of sub_180043114 @ 0x180043114
 * Callers:
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_18004D024 @ 0x18004D024 (sub_18004D024.c)
 *     sub_18004D730 @ 0x18004D730 (sub_18004D730.c)
 * Callees:
 *     sub_180043140 @ 0x180043140 (sub_180043140.c)
 */

bool __fastcall sub_180043114(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( *(_WORD *)(a2 + 32) )
    return (unsigned __int8)sub_180043140(a1, a2) == 0;
  return v2;
}
