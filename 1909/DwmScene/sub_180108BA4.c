/*
 * XREFs of sub_180108BA4 @ 0x180108BA4
 * Callers:
 *     sub_1800D4E24 @ 0x1800D4E24 (sub_1800D4E24.c)
 * Callees:
 *     sub_180067020 @ 0x180067020 (sub_180067020.c)
 *     sub_1800E0F38 @ 0x1800E0F38 (sub_1800E0F38.c)
 *     sub_18010A3EC @ 0x18010A3EC (sub_18010A3EC.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180108BA4(__int64 a1, __int64 a2)
{
  sub_1800E0F38(a1);
  sub_1800E0F38(a1 + 176);
  sub_1800E0F38(a1 + 352);
  sub_1800E0F38(a1 + 528);
  sub_1800E0F38(a1 + 704);
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  *(_QWORD *)(a1 + 880) = sub_18010A3EC(a1 + 880);
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = a2;
  sub_180067020(a1 + 928);
  *(_DWORD *)(a1 + 920) = 0;
  return a1;
}
