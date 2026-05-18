/*
 * XREFs of sub_1800F6FB8 @ 0x1800F6FB8
 * Callers:
 *     sub_1800A75F8 @ 0x1800A75F8 (sub_1800A75F8.c)
 * Callees:
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126650 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_1800F6FB8(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 2;
  *(_DWORD *)(a1 + 120) = 3;
  *(_WORD *)(a1 + 124) = 257;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  `eh vector constructor iterator'(
    (void *)(a1 + 192),
    0x20uLL,
    6uLL,
    (void (*)(void *))unknown_libname_117,
    (void (*)(void *))std::string::_Tidy_deallocate);
  `eh vector constructor iterator'(
    (void *)(a1 + 384),
    0x10uLL,
    6uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_110);
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 480) = sub_180041D90();
  `eh vector constructor iterator'(
    (void *)(a1 + 496),
    0x10uLL,
    0xAuLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_110);
  return a1;
}
