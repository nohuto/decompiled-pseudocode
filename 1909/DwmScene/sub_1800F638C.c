/*
 * XREFs of sub_1800F638C @ 0x1800F638C
 * Callers:
 *     sub_180091230 @ 0x180091230 (sub_180091230.c)
 *     sub_1800A52C0 @ 0x1800A52C0 (sub_1800A52C0.c)
 *     sub_1800C5A08 @ 0x1800C5A08 (sub_1800C5A08.c)
 *     sub_1800C6BF0 @ 0x1800C6BF0 (sub_1800C6BF0.c)
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 *     sub_1800EF730 @ 0x1800EF730 (sub_1800EF730.c)
 * Callees:
 *     sub_1800F2DBC @ 0x1800F2DBC (sub_1800F2DBC.c)
 */

__int64 __fastcall sub_1800F638C(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2DBC(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F424C(a1, v5, a3);
}
