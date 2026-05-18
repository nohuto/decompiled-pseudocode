/*
 * XREFs of sub_1800316AC @ 0x1800316AC
 * Callers:
 *     sub_18002EC2C @ 0x18002EC2C (sub_18002EC2C.c)
 *     sub_1800303E0 @ 0x1800303E0 (sub_1800303E0.c)
 *     sub_1800311C4 @ 0x1800311C4 (sub_1800311C4.c)
 * Callees:
 *     sub_18002D39C @ 0x18002D39C (sub_18002D39C.c)
 *     sub_18002D9EC @ 0x18002D9EC (sub_18002D9EC.c)
 *     sub_18002DD4C @ 0x18002DD4C (sub_18002DD4C.c)
 *     sub_18002E070 @ 0x18002E070 (sub_18002E070.c)
 *     sub_18002E4BC @ 0x18002E4BC (sub_18002E4BC.c)
 *     sub_1800317E4 @ 0x1800317E4 (sub_1800317E4.c)
 *     sub_1800322A4 @ 0x1800322A4 (sub_1800322A4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800316AC(__int64 a1, unsigned int *a2, __int64 a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-130h]
  _BYTE v15[256]; // [rsp+50h] [rbp-128h] BYREF

  memset(v15, 0, 0xF8uLL);
  sub_18002DD4C((__int64)v15, 3, 1);
  v6 = (_QWORD *)sub_1800317E4(v13, a3);
  v7 = sub_18002D39C((__int64)&v15[16], (__int64)"desc=");
  v8 = sub_18002E4BC(v7, a2);
  v9 = sub_18002D39C(v8, (__int64)", subresourceData=");
  v10 = v6[2];
  if ( v6[3] >= 0x10uLL )
    v6 = (_QWORD *)*v6;
  sub_18002D9EC(v9, (__int64)v6, v10);
  if ( v14 >= 0x10 )
  {
    v11 = v13[0];
    if ( v14 + 1 >= 0x1000 )
    {
      v11 = *(_QWORD *)(v13[0] - 8LL);
      if ( (unsigned __int64)(v13[0] - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v14 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v11);
  }
  sub_1800322A4(&v15[24], a1);
  sub_18002E070((__int64)&v15[152]);
  std::ios::~ios<char,std::char_traits<char>>(&v15[152]);
  return a1;
}
