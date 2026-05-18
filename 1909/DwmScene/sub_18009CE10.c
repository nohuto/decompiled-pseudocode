/*
 * XREFs of sub_18009CE10 @ 0x18009CE10
 * Callers:
 *     sub_180013650 @ 0x180013650 (sub_180013650.c)
 *     sub_180099F28 @ 0x180099F28 (sub_180099F28.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18009CE10(__int64 a1, __int64 a2)
{
  *(_OWORD *)(a1 + 88) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 16);
}
