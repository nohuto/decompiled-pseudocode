/*
 * XREFs of sub_1800EE260 @ 0x1800EE260
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800A4188 @ 0x1800A4188 (sub_1800A4188.c)
 *     sub_1800A6058 @ 0x1800A6058 (sub_1800A6058.c)
 *     sub_1800A630C @ 0x1800A630C (sub_1800A630C.c)
 *     sub_1800BCDD0 @ 0x1800BCDD0 (sub_1800BCDD0.c)
 *     sub_1800ED6C8 @ 0x1800ED6C8 (sub_1800ED6C8.c)
 *     sub_1800ED920 @ 0x1800ED920 (sub_1800ED920.c)
 *     sub_1800EE3F8 @ 0x1800EE3F8 (sub_1800EE3F8.c)
 *     sub_18010DCD0 @ 0x18010DCD0 (sub_18010DCD0.c)
 *     sub_18010F854 @ 0x18010F854 (sub_18010F854.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800EE260(__int64 a1, __int64 a2, __int64 a3)
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
  sub_18010F854(a1, a2, a3);
  sub_1800ED920(a1, a2);
  sub_1800EE3F8(a1, a2);
  v15[0] = 0LL;
  v15[1] = 0LL;
  v13 = 0LL;
  sub_18000F3F4(v12, (__int64)&qword_18025C6F8);
  v9.m128i_i64[0] = (__int64)v12;
  v9.m128i_i64[1] = (__int64)&v14;
  sub_1800BCDD0(v15, &v9);
  `eh vector destructor iterator'(v12, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_1800A630C((__int64)&v9);
  v9 = (__m128i)(unsigned __int64)sub_1800A4188(a2, &v9);
  v10 = 0LL;
  v11 = 0LL;
  sub_1800ED6C8((void **)&v10, &v9, (__int64)&v10);
  sub_18010DCD0(a1, a2, &v10);
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
  sub_1800A6058((__int64 ***)v15, (__int64 **)&v9, *(__int64 **)v15[0], v15[0]);
  return j_j__o_free(v15[0]);
}
