/*
 * XREFs of sub_18006D66C @ 0x18006D66C
 * Callers:
 *     sub_1800157CC @ 0x1800157CC (sub_1800157CC.c)
 *     sub_18001CAB0 @ 0x18001CAB0 (sub_18001CAB0.c)
 *     sub_18001CD04 @ 0x18001CD04 (sub_18001CD04.c)
 *     sub_18001CF58 @ 0x18001CF58 (sub_18001CF58.c)
 *     sub_18001D1AC @ 0x18001D1AC (sub_18001D1AC.c)
 *     sub_18001D400 @ 0x18001D400 (sub_18001D400.c)
 *     sub_18006CC30 @ 0x18006CC30 (sub_18006CC30.c)
 * Callees:
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180078148 @ 0x180078148 (sub_180078148.c)
 */

__int64 *__fastcall sub_18006D66C(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_180078148(*(_QWORD *)(a1 + 3984));
  sub_1800632D0(v3, a2);
  return a2;
}
