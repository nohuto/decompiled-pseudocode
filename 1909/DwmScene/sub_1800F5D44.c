/*
 * XREFs of sub_1800F5D44 @ 0x1800F5D44
 * Callers:
 *     sub_180090B08 @ 0x180090B08 (sub_180090B08.c)
 *     sub_1800C5A08 @ 0x1800C5A08 (sub_1800C5A08.c)
 * Callees:
 *     sub_1800F2DBC @ 0x1800F2DBC (sub_1800F2DBC.c)
 */

__int64 __fastcall sub_1800F5D44(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2DBC(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F5D78(a1, v5, a3);
}
