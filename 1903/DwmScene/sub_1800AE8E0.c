/*
 * XREFs of sub_1800AE8E0 @ 0x1800AE8E0
 * Callers:
 *     sub_1800ACDE0 @ 0x1800ACDE0 (sub_1800ACDE0.c)
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 *     sub_1800DB87C @ 0x1800DB87C (sub_1800DB87C.c)
 *     sub_1800DDA58 @ 0x1800DDA58 (sub_1800DDA58.c)
 *     sub_18010AF60 @ 0x18010AF60 (sub_18010AF60.c)
 *     sub_18010B2A4 @ 0x18010B2A4 (sub_18010B2A4.c)
 *     sub_180112680 @ 0x180112680 (sub_180112680.c)
 *     sub_180112BB0 @ 0x180112BB0 (sub_180112BB0.c)
 * Callees:
 *     sub_180033E08 @ 0x180033E08 (sub_180033E08.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 */

_QWORD *__fastcall sub_1800AE8E0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v5; // eax

  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = sub_18006CDB8(*a3);
  sub_180033E08((__int64 *)(a1 + 448), a2, v5);
  return a2;
}
