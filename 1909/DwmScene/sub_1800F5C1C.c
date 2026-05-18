/*
 * XREFs of sub_1800F5C1C @ 0x1800F5C1C
 * Callers:
 *     sub_180090AF0 @ 0x180090AF0 (sub_180090AF0.c)
 *     sub_1800C5A08 @ 0x1800C5A08 (sub_1800C5A08.c)
 * Callees:
 *     sub_1800F2DBC @ 0x1800F2DBC (sub_1800F2DBC.c)
 */

__int64 __fastcall sub_1800F5C1C(__int64 a1, _QWORD *a2, char a3)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r8

  v5 = sub_1800F2DBC(*(_QWORD *)(a1 + 16), a2);
  LOBYTE(v6) = a3;
  return sub_1800F5C50(a1, v5, v6);
}
