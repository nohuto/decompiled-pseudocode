/*
 * XREFs of sub_1800F5C84 @ 0x1800F5C84
 * Callers:
 *     sub_180090AFC @ 0x180090AFC (sub_180090AFC.c)
 *     sub_1800A5214 @ 0x1800A5214 (sub_1800A5214.c)
 *     sub_1800C6A88 @ 0x1800C6A88 (sub_1800C6A88.c)
 * Callees:
 *     sub_1800F2DBC @ 0x1800F2DBC (sub_1800F2DBC.c)
 */

__int64 __fastcall sub_1800F5C84(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2DBC(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F4194(a1, v5, a3);
}
