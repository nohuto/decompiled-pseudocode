/*
 * XREFs of sub_1800317BC @ 0x1800317BC
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_1800304F0 @ 0x1800304F0 (sub_1800304F0.c)
 *     sub_1800312D4 @ 0x1800312D4 (sub_1800312D4.c)
 * Callees:
 *     sub_18002D4AC @ 0x18002D4AC (sub_18002D4AC.c)
 *     sub_18002DAFC @ 0x18002DAFC (sub_18002DAFC.c)
 *     sub_18002DE5C @ 0x18002DE5C (sub_18002DE5C.c)
 *     sub_18002E180 @ 0x18002E180 (sub_18002E180.c)
 *     sub_18002E5CC @ 0x18002E5CC (sub_18002E5CC.c)
 *     sub_1800318F4 @ 0x1800318F4 (sub_1800318F4.c)
 *     sub_1800323B4 @ 0x1800323B4 (sub_1800323B4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800317BC(__int64 a1, unsigned int *a2, __int64 a3)
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
  sub_18002DE5C((__int64)v15, 3, 1);
  v6 = (_QWORD *)sub_1800318F4(v13, a3);
  v7 = sub_18002D4AC((__int64)&v15[16], (__int64)"desc=");
  v8 = sub_18002E5CC(v7, a2);
  v9 = sub_18002D4AC(v8, (__int64)", subresourceData=");
  v10 = v6[2];
  if ( v6[3] >= 0x10uLL )
    v6 = (_QWORD *)*v6;
  sub_18002DAFC(v9, (__int64)v6, v10);
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
  sub_1800323B4(&v15[24], a1);
  sub_18002E180((__int64)&v15[152]);
  std::ios::~ios<char,std::char_traits<char>>(&v15[152]);
  return a1;
}
