/*
 * XREFs of sub_180086B30 @ 0x180086B30
 * Callers:
 *     sub_180082640 @ 0x180082640 (sub_180082640.c)
 * Callees:
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 */

void __fastcall sub_180086B30(__int64 a1)
{
  sub_180087524(a1);
  sub_1800813F0(
    *(__int64 **)(a1 + 376),
    *(__int64 **)(a1 + 384),
    (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1800F0E30);
}
