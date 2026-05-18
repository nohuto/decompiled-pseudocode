/*
 * XREFs of sub_180063FF8 @ 0x180063FF8
 * Callers:
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x18012CBB9 (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     sub_18012CBD5 @ 0x18012CBD5 (sub_18012CBD5.c)
 * Callees:
 *     sub_1800D0D70 @ 0x1800D0D70 (sub_1800D0D70.c)
 *     sub_1800D0D88 @ 0x1800D0D88 (sub_1800D0D88.c)
 */

__int64 __fastcall sub_180063FF8(unsigned int *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = -*((_QWORD *)a1 + 1);
  v3 = sub_1800D0D88(a1);
  return sub_1800D0D70(v3, *a1, 2LL, v2);
}
