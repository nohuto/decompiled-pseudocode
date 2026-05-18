/*
 * XREFs of sub_18000E6B8 @ 0x18000E6B8
 * Callers:
 *     sub_18000E520 @ 0x18000E520 (sub_18000E520.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 *     sub_180063040 @ 0x180063040 (sub_180063040.c)
 *     sub_180074264 @ 0x180074264 (sub_180074264.c)
 *     sub_18009510C @ 0x18009510C (sub_18009510C.c)
 *     sub_180098244 @ 0x180098244 (sub_180098244.c)
 *     sub_1800CDA7C @ 0x1800CDA7C (sub_1800CDA7C.c)
 *     sub_180116344 @ 0x180116344 (sub_180116344.c)
 *     sub_1801249D8 @ 0x1801249D8 (sub_1801249D8.c)
 *     sub_180132992 @ 0x180132992 (sub_180132992.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     _o___std_exception_copy @ 0x180125AC3 (_o___std_exception_copy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000E6B8(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  o___std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_18000F444(a1 + 24, a2 + 24);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
  return a1;
}
