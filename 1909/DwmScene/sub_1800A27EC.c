/*
 * XREFs of sub_1800A27EC @ 0x1800A27EC
 * Callers:
 *     sub_1800734B0 @ 0x1800734B0 (sub_1800734B0.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18002B7E4 @ 0x18002B7E4 (sub_18002B7E4.c)
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     sub_18006DF24 @ 0x18006DF24 (sub_18006DF24.c)
 *     sub_18008D27C @ 0x18008D27C (sub_18008D27C.c)
 *     sub_180091334 @ 0x180091334 (sub_180091334.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126650 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_1800A27EC(__int64 a1, __int64 a2)
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
  *(_QWORD *)(a1 + 16) = sub_18002B7E4();
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
  *(_QWORD *)(a1 + 2088) = sub_18002B7E4();
  `eh vector constructor iterator'(
    (void *)(a1 + 2104),
    0x20uLL,
    0x200uLL,
    (void (*)(void *))unknown_libname_117,
    (void (*)(void *))std::string::_Tidy_deallocate);
  *(_DWORD *)(a1 + 18488) = 0;
  *(_QWORD *)(a1 + 18512) = 0LL;
  *(_QWORD *)(a1 + 18520) = 0LL;
  sub_18000F444((_QWORD *)(a1 + 18496), (__int64)&qword_18025E5D0);
  *(_QWORD *)(a1 + 18544) = 0LL;
  *(_QWORD *)(a1 + 18552) = 0LL;
  sub_18000F444((_QWORD *)(a1 + 18528), (__int64)&qword_18025E618);
  v8 = a1 + 18560;
  *(_QWORD *)(a1 + 18560) = 0LL;
  *(_QWORD *)(a1 + 18568) = 0LL;
  *(_QWORD *)(a1 + 18560) = sub_18008D27C();
  v8 = a1 + 18576;
  *(_QWORD *)(a1 + 18576) = 0LL;
  *(_QWORD *)(a1 + 18584) = 0LL;
  *(_QWORD *)(a1 + 18576) = sub_18006DF24();
  v8 = a1 + 18592;
  *(_QWORD *)(a1 + 18592) = 0LL;
  *(_QWORD *)(a1 + 18600) = 0LL;
  *(_QWORD *)(a1 + 18592) = sub_18008D27C();
  v8 = a1 + 18608;
  *(_QWORD *)(a1 + 18608) = 0LL;
  *(_QWORD *)(a1 + 18616) = 0LL;
  *(_QWORD *)(a1 + 18608) = sub_180041D90();
  *(_BYTE *)(a1 + 18624) = 1;
  *(_QWORD *)(a1 + 18632) = 0LL;
  *(_QWORD *)(a1 + 18640) = 0LL;
  *(_QWORD *)(a1 + 18648) = 0LL;
  *(_QWORD *)(a1 + 18656) = 0LL;
  LODWORD(v8) = 3;
  *(_QWORD *)(a1 + 18664) = 0LL;
  *(_QWORD *)(a1 + 18672) = 0LL;
  *(_QWORD *)(a1 + 18680) = 0LL;
  sub_180091334((void **)(a1 + 18664), &v8, (__int64)&v8 + 4);
  *(_QWORD *)(a1 + 18688) = a2;
  v5 = (__int64 *)(a1 + 18456);
  if ( *(_QWORD *)(a1 + 18480) < 9uLL )
  {
    LOBYTE(v4) = 0;
    sub_18000E168(v5, 9uLL, v4, "<invalid>");
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
