/*
 * XREFs of sub_1800F5C9C @ 0x1800F5C9C
 * Callers:
 *     sub_1800A5110 @ 0x1800A5110 (sub_1800A5110.c)
 *     sub_1800EBCE0 @ 0x1800EBCE0 (sub_1800EBCE0.c)
 *     sub_180111550 @ 0x180111550 (sub_180111550.c)
 * Callees:
 *     sub_1800F2CAC @ 0x1800F2CAC (sub_1800F2CAC.c)
 */

int __fastcall sub_1800F5C9C(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2CAC(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F40CC(a1, v5, a3);
}
