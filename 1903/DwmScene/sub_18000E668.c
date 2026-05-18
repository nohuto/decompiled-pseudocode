/*
 * XREFs of sub_18000E668 @ 0x18000E668
 * Callers:
 *     sub_18000E4D0 @ 0x18000E4D0 (sub_18000E4D0.c)
 *     sub_18002774C @ 0x18002774C (sub_18002774C.c)
 *     sub_180062F30 @ 0x180062F30 (sub_180062F30.c)
 *     sub_180074154 @ 0x180074154 (sub_180074154.c)
 *     sub_180094FFC @ 0x180094FFC (sub_180094FFC.c)
 *     sub_180098134 @ 0x180098134 (sub_180098134.c)
 *     sub_1800CD96C @ 0x1800CD96C (sub_1800CD96C.c)
 *     sub_180116234 @ 0x180116234 (sub_180116234.c)
 *     sub_1801248C8 @ 0x1801248C8 (sub_1801248C8.c)
 *     sub_180132882 @ 0x180132882 (sub_180132882.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     _o___std_exception_copy @ 0x1801259B3 (_o___std_exception_copy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000E668(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  o___std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_18000F3F4(a1 + 24, a2 + 24);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
  return a1;
}
