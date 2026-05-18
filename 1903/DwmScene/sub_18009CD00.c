/*
 * XREFs of sub_18009CD00 @ 0x18009CD00
 * Callers:
 *     sub_180013600 @ 0x180013600 (sub_180013600.c)
 *     sub_180099E18 @ 0x180099E18 (sub_180099E18.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18009CD00(__int64 a1, __int64 a2)
{
  *(_OWORD *)(a1 + 88) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 16);
}
