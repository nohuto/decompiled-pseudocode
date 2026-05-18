/*
 * XREFs of sub_1800F9420 @ 0x1800F9420
 * Callers:
 *     sub_1800EB0A0 @ 0x1800EB0A0 (sub_1800EB0A0.c)
 *     sub_1800EC130 @ 0x1800EC130 (sub_1800EC130.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 *     sub_1800ED920 @ 0x1800ED920 (sub_1800ED920.c)
 *     sub_1800EE3F8 @ 0x1800EE3F8 (sub_1800EE3F8.c)
 *     sub_1800F0340 @ 0x1800F0340 (sub_1800F0340.c)
 *     sub_18010DCD0 @ 0x18010DCD0 (sub_18010DCD0.c)
 *     sub_18010F854 @ 0x18010F854 (sub_18010F854.c)
 * Callees:
 *     sub_1800D1720 @ 0x1800D1720 (sub_1800D1720.c)
 */

__int64 __fastcall sub_1800F9420(__int64 a1, __int64 a2)
{
  sub_1800D1720(a1 + 128, a2);
  return sub_1800D1FB4(a2 + 16);
}
