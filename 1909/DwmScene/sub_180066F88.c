/*
 * XREFs of sub_180066F88 @ 0x180066F88
 * Callers:
 *     sub_180065DC0 @ 0x180065DC0 (sub_180065DC0.c)
 *     sub_1800666D8 @ 0x1800666D8 (sub_1800666D8.c)
 *     sub_180067C48 @ 0x180067C48 (sub_180067C48.c)
 * Callees:
 *     sub_1800659DC @ 0x1800659DC (sub_1800659DC.c)
 */

__int64 __fastcall sub_180066F88(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  sub_1800659DC((__int64 *)(a1 + 136));
  return a1;
}
