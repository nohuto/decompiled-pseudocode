/*
 * XREFs of sub_1800F5E1C @ 0x1800F5E1C
 * Callers:
 *     sub_180090EAC @ 0x180090EAC (sub_180090EAC.c)
 *     sub_1800A522C @ 0x1800A522C (sub_1800A522C.c)
 *     sub_1800C3744 @ 0x1800C3744 (sub_1800C3744.c)
 *     sub_1800C6364 @ 0x1800C6364 (sub_1800C6364.c)
 *     sub_1800C6BB0 @ 0x1800C6BB0 (sub_1800C6BB0.c)
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 *     sub_180111660 @ 0x180111660 (sub_180111660.c)
 * Callees:
 *     sub_1800F2DBC @ 0x1800F2DBC (sub_1800F2DBC.c)
 */

__int64 __fastcall sub_1800F5E1C(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v3; // ax

  v3 = sub_1800F2DBC(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F5E50(a1, v3);
}
