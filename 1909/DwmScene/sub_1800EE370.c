/*
 * XREFs of sub_1800EE370 @ 0x1800EE370
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_1800A4298 @ 0x1800A4298 (sub_1800A4298.c)
 *     sub_1800A6168 @ 0x1800A6168 (sub_1800A6168.c)
 *     sub_1800A641C @ 0x1800A641C (sub_1800A641C.c)
 *     sub_1800BCEE0 @ 0x1800BCEE0 (sub_1800BCEE0.c)
 *     sub_1800ED7D8 @ 0x1800ED7D8 (sub_1800ED7D8.c)
 *     sub_1800EDA30 @ 0x1800EDA30 (sub_1800EDA30.c)
 *     sub_1800EE508 @ 0x1800EE508 (sub_1800EE508.c)
 *     sub_18010DDE0 @ 0x18010DDE0 (sub_18010DDE0.c)
 *     sub_18010F964 @ 0x18010F964 (sub_18010F964.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800EE370(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __m128i v9; // [rsp+38h] [rbp-19h] BYREF
  char *v10; // [rsp+48h] [rbp-9h] BYREF
  __int128 v11; // [rsp+50h] [rbp-1h]
  _QWORD v12[2]; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v13; // [rsp+70h] [rbp+1Fh]
  __int64 v14; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 *v15[2]; // [rsp+88h] [rbp+37h] BYREF

  v14 = -2LL;
  LOBYTE(a3) = 1;
  sub_18010F964(a1, a2, a3);
  sub_1800EDA30(a1, a2);
  sub_1800EE508(a1, a2);
  v15[0] = 0LL;
  v15[1] = 0LL;
  v13 = 0LL;
  sub_18000F444(v12, (__int64)&qword_18025D6F8);
  v9.m128i_i64[0] = (__int64)v12;
  v9.m128i_i64[1] = (__int64)&v14;
  sub_1800BCEE0(v15, &v9);
  `eh vector destructor iterator'(v12, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_1800A641C((__int64)&v9);
  v9 = (__m128i)(unsigned __int64)sub_1800A4298(a2, &v9);
  v10 = 0LL;
  v11 = 0LL;
  sub_1800ED7D8((void **)&v10, &v9, (__int64)&v10);
  sub_18010DDE0(a1, a2, &v10);
  v5 = v10;
  if ( v10 )
  {
    v6 = (*((_QWORD *)&v11 + 1) - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v6 >= 0x1000 )
    {
      v7 = v6 + 39;
      v5 = (char *)*((_QWORD *)v10 - 1);
      if ( (unsigned __int64)(v10 - v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v7);
        __debugbreak();
      }
    }
    j_j__o_free(v5);
  }
  sub_1800A6168((__int64 ***)v15, (__int64 **)&v9, *(__int64 **)v15[0], v15[0]);
  return j_j__o_free(v15[0]);
}
