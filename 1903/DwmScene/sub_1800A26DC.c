/*
 * XREFs of sub_1800A26DC @ 0x1800A26DC
 * Callers:
 *     sub_1800733A0 @ 0x1800733A0 (sub_1800733A0.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_18002B6D4 @ 0x18002B6D4 (sub_18002B6D4.c)
 *     sub_180041C80 @ 0x180041C80 (sub_180041C80.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_18008D16C @ 0x18008D16C (sub_18008D16C.c)
 *     sub_180091224 @ 0x180091224 (sub_180091224.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126540 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_1800A26DC(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 *v5; // rcx
  _BYTE *v6; // rbx
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v8 = a1 + 16;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = sub_18002B6D4();
  `eh vector constructor iterator'(
    (void *)(a1 + 32),
    0x20uLL,
    0x40uLL,
    (void (*)(void *))unknown_libname_117,
    (void (*)(void *))std::string::_Tidy_deallocate);
  *(_DWORD *)(a1 + 2080) = 0;
  v8 = a1 + 2088;
  *(_QWORD *)(a1 + 2088) = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  *(_QWORD *)(a1 + 2088) = sub_18002B6D4();
  `eh vector constructor iterator'(
    (void *)(a1 + 2104),
    0x20uLL,
    0x200uLL,
    (void (*)(void *))unknown_libname_117,
    (void (*)(void *))std::string::_Tidy_deallocate);
  *(_DWORD *)(a1 + 18488) = 0;
  *(_QWORD *)(a1 + 18512) = 0LL;
  *(_QWORD *)(a1 + 18520) = 0LL;
  sub_18000F3F4((_QWORD *)(a1 + 18496), (__int64)&qword_18025D5D0);
  *(_QWORD *)(a1 + 18544) = 0LL;
  *(_QWORD *)(a1 + 18552) = 0LL;
  sub_18000F3F4((_QWORD *)(a1 + 18528), (__int64)&qword_18025D618);
  v8 = a1 + 18560;
  *(_QWORD *)(a1 + 18560) = 0LL;
  *(_QWORD *)(a1 + 18568) = 0LL;
  *(_QWORD *)(a1 + 18560) = sub_18008D16C();
  v8 = a1 + 18576;
  *(_QWORD *)(a1 + 18576) = 0LL;
  *(_QWORD *)(a1 + 18584) = 0LL;
  *(_QWORD *)(a1 + 18576) = sub_18006DE14();
  v8 = a1 + 18592;
  *(_QWORD *)(a1 + 18592) = 0LL;
  *(_QWORD *)(a1 + 18600) = 0LL;
  *(_QWORD *)(a1 + 18592) = sub_18008D16C();
  v8 = a1 + 18608;
  *(_QWORD *)(a1 + 18608) = 0LL;
  *(_QWORD *)(a1 + 18616) = 0LL;
  *(_QWORD *)(a1 + 18608) = sub_180041C80();
  *(_BYTE *)(a1 + 18624) = 1;
  *(_QWORD *)(a1 + 18632) = 0LL;
  *(_QWORD *)(a1 + 18640) = 0LL;
  *(_QWORD *)(a1 + 18648) = 0LL;
  *(_QWORD *)(a1 + 18656) = 0LL;
  LODWORD(v8) = 3;
  *(_QWORD *)(a1 + 18664) = 0LL;
  *(_QWORD *)(a1 + 18672) = 0LL;
  *(_QWORD *)(a1 + 18680) = 0LL;
  sub_180091224((void **)(a1 + 18664), &v8, (__int64)&v8 + 4);
  *(_QWORD *)(a1 + 18688) = a2;
  v5 = (__int64 *)(a1 + 18456);
  if ( *(_QWORD *)(a1 + 18480) < 9uLL )
  {
    LOBYTE(v4) = 0;
    sub_18000E118(v5, 9uLL, v4, "<invalid>");
  }
  else
  {
    v6 = (_BYTE *)(a1 + 18456);
    if ( *(_QWORD *)(a1 + 18480) >= 0x10uLL )
      v6 = (_BYTE *)*v5;
    *(_QWORD *)(a1 + 18472) = 9LL;
    memmove(v6, "<invalid>", 9uLL);
    v6[9] = 0;
  }
  return a1;
}
