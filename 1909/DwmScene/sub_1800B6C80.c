/*
 * XREFs of sub_1800B6C80 @ 0x1800B6C80
 * Callers:
 *     sub_1800B5E6C @ 0x1800B5E6C (sub_1800B5E6C.c)
 * Callees:
 *     sub_1800B52BC @ 0x1800B52BC (sub_1800B52BC.c)
 *     sub_1800B53B0 @ 0x1800B53B0 (sub_1800B53B0.c)
 *     sub_1800B54A4 @ 0x1800B54A4 (sub_1800B54A4.c)
 *     sub_1800B5598 @ 0x1800B5598 (sub_1800B5598.c)
 *     sub_1800B568C @ 0x1800B568C (sub_1800B568C.c)
 *     sub_1800B5780 @ 0x1800B5780 (sub_1800B5780.c)
 *     sub_1800B5874 @ 0x1800B5874 (sub_1800B5874.c)
 */

void __fastcall sub_1800B6C80(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 496;
  sub_1800B5598(a1 + 496);
  sub_1800B52BC(v1);
  sub_1800B54A4(v1);
  sub_1800B5874(v1);
  sub_1800B53B0(v1);
  sub_1800B5780(v1);
  sub_1800B568C(v1);
  sub_1800B5968(v1);
}
