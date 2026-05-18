/*
 * XREFs of sub_180086A20 @ 0x180086A20
 * Callers:
 *     sub_180082530 @ 0x180082530 (sub_180082530.c)
 * Callees:
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 */

void __fastcall sub_180086A20(__int64 a1)
{
  sub_180087414(a1);
  sub_1800812E0(
    *(__int64 **)(a1 + 376),
    *(__int64 **)(a1 + 384),
    (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1800F0D20);
}
