/*
 * XREFs of sub_1800317E4 @ 0x1800317E4
 * Callers:
 *     sub_1800316AC @ 0x1800316AC (sub_1800316AC.c)
 * Callees:
 *     sub_18002D39C @ 0x18002D39C (sub_18002D39C.c)
 *     sub_18002DD4C @ 0x18002DD4C (sub_18002DD4C.c)
 *     sub_18002E070 @ 0x18002E070 (sub_18002E070.c)
 *     sub_18002E3F4 @ 0x18002E3F4 (sub_18002E3F4.c)
 *     sub_1800322A4 @ 0x1800322A4 (sub_1800322A4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800317E4(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v12[256]; // [rsp+30h] [rbp-128h] BYREF

  memset(v12, 0, 0xF8uLL);
  sub_18002DD4C((__int64)v12, 3, 1);
  if ( *a2 != a2[1] )
  {
    sub_18002D39C((__int64)&v12[16], (__int64)"{");
    v4 = 0LL;
    if ( (__int64)(a2[1] - *a2) >> 4 )
    {
      v5 = 0LL;
      do
      {
        v6 = v5 + *a2;
        v7 = sub_18002D39C((__int64)&v12[16], (__int64)"[");
        v8 = std::ostream::operator<<(v7, v4);
        v9 = sub_18002D39C(v8, (__int64)"] = ");
        v10 = sub_18002E3F4(v9, v6);
        sub_18002D39C(v10, (__int64)",");
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < (__int64)(a2[1] - *a2) >> 4 );
    }
    sub_18002D39C((__int64)&v12[16], (__int64)"}");
  }
  sub_1800322A4(&v12[24], a1);
  sub_18002E070((__int64)&v12[152]);
  std::ios::~ios<char,std::char_traits<char>>(&v12[152]);
  return a1;
}
