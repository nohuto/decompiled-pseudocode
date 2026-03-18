/*
 * XREFs of GetBitAbs @ 0x1C02C2D50
 * Callers:
 *     DoHorizDropout @ 0x1C02C2974 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C02C2B04 (DoVertDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBitAbs(__int64 a1, int a2, int a3)
{
  if ( a2 < dword_1C032FE28 || a2 >= dword_1C032FE2C || a3 < dword_1C032FE34 || a3 >= dword_1C032FE30 )
    return 0LL;
  if ( a3 < dword_1C032FE44 && a3 >= dword_1C032FE48 )
    return (unsigned int)(aulBitMask[(a2 - dword_1C032FE28) & 0x1F] & *(_DWORD *)(a1
                                                                                + dword_1C032FE38
                                                                                * (dword_1C032FE44 - a3 - 1)
                                                                                + 4
                                                                                * ((__int64)(a2 - dword_1C032FE28) >> 5)));
  if ( a3 == dword_1C032FE4C )
    return (unsigned int)(aulBitMask[(a2 - dword_1C032FE28) & 0x1F] & *(_DWORD *)(qword_1C032FE50
                                                                                + 4
                                                                                * ((__int64)(a2 - dword_1C032FE28) >> 5)));
  else
    return 0LL;
}
