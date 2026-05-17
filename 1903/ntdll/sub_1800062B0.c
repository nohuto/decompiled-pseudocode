/*
 * XREFs of sub_1800062B0 @ 0x1800062B0
 * Callers:
 *     sub_180009B8C @ 0x180009B8C (sub_180009B8C.c)
 *     sub_18000A590 @ 0x18000A590 (sub_18000A590.c)
 *     sub_180083BF4 @ 0x180083BF4 (sub_180083BF4.c)
 *     sub_1800CFD74 @ 0x1800CFD74 (sub_1800CFD74.c)
 *     sub_1800CFE80 @ 0x1800CFE80 (sub_1800CFE80.c)
 *     sub_1800D0184 @ 0x1800D0184 (sub_1800D0184.c)
 *     sub_1800D03F8 @ 0x1800D03F8 (sub_1800D03F8.c)
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
 *     sub_1800D062C @ 0x1800D062C (sub_1800D062C.c)
 *     sub_1800D070C @ 0x1800D070C (sub_1800D070C.c)
 *     sub_1800D07EC @ 0x1800D07EC (sub_1800D07EC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800062B0(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
