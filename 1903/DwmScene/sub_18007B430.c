/*
 * XREFs of sub_18007B430 @ 0x18007B430
 * Callers:
 *     sub_180014CB8 @ 0x180014CB8 (sub_180014CB8.c)
 * Callees:
 *     sub_18000E00C @ 0x18000E00C (sub_18000E00C.c)
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     unknown_libname_113 @ 0x18000F6D4 (unknown_libname_113.c)
 *     sub_18002B6D4 @ 0x18002B6D4 (sub_18002B6D4.c)
 *     sub_180069CC0 @ 0x180069CC0 (sub_180069CC0.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     sub_18007381C @ 0x18007381C (sub_18007381C.c)
 *     sub_18007ED50 @ 0x18007ED50 (sub_18007ED50.c)
 *     sub_180123940 @ 0x180123940 (sub_180123940.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
_UNKNOWN **__fastcall sub_18007B430(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 *v4; // r10
  __int64 *v5; // r8
  _BYTE *v6; // r8
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __m128i v12; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v14; // [rsp+68h] [rbp-A0h]
  __int64 *v15; // [rsp+78h] [rbp-90h] BYREF
  __int64 v16; // [rsp+80h] [rbp-88h] BYREF
  __m128i v17; // [rsp+90h] [rbp-78h]
  __int64 v18; // [rsp+A0h] [rbp-68h]
  __int64 v19[2]; // [rsp+A8h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-50h]
  __int128 v21; // [rsp+C8h] [rbp-40h]
  __m128i v22; // [rsp+D8h] [rbp-30h]
  __int64 v23; // [rsp+E8h] [rbp-20h] BYREF
  __m128i v24; // [rsp+F8h] [rbp-10h]
  __int128 v25; // [rsp+108h] [rbp+0h]
  __int128 v26; // [rsp+118h] [rbp+10h]
  _QWORD v27[2]; // [rsp+128h] [rbp+20h] BYREF
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF

  result = &retaddr;
  v18 = -2LL;
  if ( *(_QWORD *)(a1 + 480) )
  {
    sub_180123940();
    v27[0] = 0LL;
    v27[1] = 0LL;
    sub_18000E00C(&v13, 1);
    si128 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(v19[0]) = 0;
    unknown_libname_113(v19, "Integer Result Code");
    v21 = v13;
    v22 = v14;
    v4 = &qword_180258700;
    v5 = &qword_180258700;
    if ( *((_QWORD *)&xmmword_180258710 + 1) >= 0x10uLL )
      v5 = (__int64 *)qword_180258700;
    v6 = (char *)v5 + xmmword_180258710;
    if ( *((_QWORD *)&xmmword_180258710 + 1) >= 0x10uLL )
      v4 = (__int64 *)qword_180258700;
    v7 = sub_18006E5E0(&v16, v4, v6);
    v24 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(v23) = 0;
    unknown_libname_113(&v23, "Hardware Version");
    v26 = 0LL;
    v25 = *(_OWORD *)v7;
    v26 = *((_OWORD *)v7 + 1);
    v7[2] = 0LL;
    v7[3] = 15LL;
    *(_BYTE *)v7 = 0;
    if ( v17.m128i_i64[1] >= 0x10uLL )
    {
      v8 = v16;
      if ( (unsigned __int64)(v17.m128i_i64[1] + 1) >= 0x1000 )
      {
        v8 = *(_QWORD *)(v16 - 8);
        if ( (unsigned __int64)(v16 - v8 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v8, v17.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v8);
    }
    v17 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(v16) = 0;
    v12.m128i_i64[0] = (__int64)v19;
    v12.m128i_i64[1] = (__int64)v27;
    sub_18007381C((__int64)v27, &v12);
    `eh vector destructor iterator'(v19, 0x40uLL, 2uLL, (void (*)(void *))sub_180074660);
    v14 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(v13) = 0;
    sub_18000E118((__int64 *)&v13, 0x1AuLL, 0LL, "Engine Initialized Success");
    v9 = *(_QWORD *)(a1 + 480);
    v12 = 0LL;
    v12.m128i_i64[0] = (__int64)sub_18002B6D4();
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD *, __m128i *))(*(_QWORD *)v9 + 40LL))(v9, &v13, v27, &v12);
    sub_180069CC0((__int64 ***)&v12, &v15, *(__int64 **)v12.m128i_i64[0], (__int64 *)v12.m128i_i64[0]);
    j_j__o_free(v12.m128i_i64[0]);
    if ( v14.m128i_i64[1] >= 0x10uLL )
    {
      v10 = v13;
      if ( (unsigned __int64)(v14.m128i_i64[1] + 1) >= 0x1000 )
      {
        v10 = *(_QWORD *)(v13 - 8);
        if ( (unsigned __int64)(v13 - v10 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v10, v14.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v10);
    }
    sub_18007ED50(v27, &v15, *(_QWORD *)v27[0]);
    result = (_UNKNOWN **)j_j__o_free(v27[0]);
  }
  v11 = *(_QWORD *)(a1 + 496);
  if ( v11 )
  {
    LOBYTE(a2) = 1;
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64, __int64, void *, const char *))(*(_QWORD *)v11 + 24LL))(
                          v11,
                          a2,
                          &unk_1801DFD06,
                          "2.7.0.2");
  }
  return result;
}
