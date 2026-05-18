/*
 * XREFs of sub_1800F8ACC @ 0x1800F8ACC
 * Callers:
 *     sub_1800A8550 @ 0x1800A8550 (sub_1800A8550.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800F8BC4 @ 0x1800F8BC4 (sub_1800F8BC4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F8ACC(__int64 a1, __int64 *a2)
{
  __int128 v4; // xmm6
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  _BYTE v12[16]; // [rsp+28h] [rbp-29h] BYREF
  __int64 v13; // [rsp+38h] [rbp-19h]
  __int64 v14; // [rsp+40h] [rbp-11h]
  _QWORD v15[8]; // [rsp+48h] [rbp-9h] BYREF

  v15[4] = -2LL;
  v15[7] = a2;
  v4 = *(_OWORD *)*(_QWORD *)(a1 + 24);
  v15[5] = v12;
  v14 = 15LL;
  v13 = 0LL;
  v12[0] = 0;
  v15[2] = 0LL;
  v15[3] = 0LL;
  sub_18000F3F4(v15, (__int64)a2);
  result = sub_1800F8BC4(a1, v15, v4, v12);
  v6 = a2[3];
  if ( v6 >= 0x10 )
  {
    v7 = v6 + 1;
    v8 = *a2;
    if ( v7 >= 0x1000 )
    {
      v9 = v7 + 39;
      v10 = *(_QWORD *)(v8 - 8);
      v11 = v8 - v10;
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v9);
        JUMPOUT(0x1800F8BC3LL);
      }
      v8 = v10;
    }
    result = j_j__o_free(v8);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
