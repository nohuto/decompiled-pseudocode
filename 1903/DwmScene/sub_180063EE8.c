/*
 * XREFs of sub_180063EE8 @ 0x180063EE8
 * Callers:
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x18012CAA9 (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     sub_18012CAC5 @ 0x18012CAC5 (sub_18012CAC5.c)
 * Callees:
 *     sub_1800D0C60 @ 0x1800D0C60 (sub_1800D0C60.c)
 *     sub_1800D0C78 @ 0x1800D0C78 (sub_1800D0C78.c)
 */

__int64 __fastcall sub_180063EE8(unsigned int *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = -*((_QWORD *)a1 + 1);
  v3 = sub_1800D0C78(a1);
  return sub_1800D0C60(v3, *a1, 2LL, v2);
}
