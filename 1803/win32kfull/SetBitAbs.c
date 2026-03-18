/*
 * XREFs of SetBitAbs @ 0x1C02C3050
 * Callers:
 *     DoHorizDropout @ 0x1C02C2974 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C02C2B04 (DoVertDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetBitAbs(__int64 a1, int a2, int a3)
{
  if ( a2 < dword_1C032FE28 || a2 >= dword_1C032FE2C || a3 < dword_1C032FE48 || a3 >= dword_1C032FE44 )
    return 4866LL;
  *(_DWORD *)(a1 + dword_1C032FE38 * (dword_1C032FE44 - a3 - 1) + 4 * ((__int64)(a2 - dword_1C032FE28) >> 5)) |= aulBitMask[(a2 - dword_1C032FE28) & 0x1F];
  return 0LL;
}
