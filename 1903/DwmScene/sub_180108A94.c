/*
 * XREFs of sub_180108A94 @ 0x180108A94
 * Callers:
 *     sub_1800D4D14 @ 0x1800D4D14 (sub_1800D4D14.c)
 * Callees:
 *     sub_180066F10 @ 0x180066F10 (sub_180066F10.c)
 *     sub_1800E0E28 @ 0x1800E0E28 (sub_1800E0E28.c)
 *     sub_18010A2DC @ 0x18010A2DC (sub_18010A2DC.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180108A94(__int64 a1, __int64 a2)
{
  sub_1800E0E28(a1);
  sub_1800E0E28(a1 + 176);
  sub_1800E0E28(a1 + 352);
  sub_1800E0E28(a1 + 528);
  sub_1800E0E28(a1 + 704);
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  *(_QWORD *)(a1 + 880) = sub_18010A2DC(a1 + 880);
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = a2;
  sub_180066F10(a1 + 928);
  *(_DWORD *)(a1 + 920) = 0;
  return a1;
}
