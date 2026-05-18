/*
 * XREFs of sub_18010DA88 @ 0x18010DA88
 * Callers:
 *     sub_1800ED760 @ 0x1800ED760 (sub_1800ED760.c)
 *     sub_1800EFFA8 @ 0x1800EFFA8 (sub_1800EFFA8.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800A7570 @ 0x1800A7570 (sub_1800A7570.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18010DA88(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v11[7]; // [rsp+20h] [rbp-48h] BYREF

  v11[4] = -2LL;
  v11[6] = (__int64)a2;
  v11[2] = 0LL;
  v11[3] = 0LL;
  sub_18000F3F4(v11, (__int64)a2);
  sub_1800A7570((__int64)a1, v11);
  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  v4 = a2[3];
  if ( v4 >= 0x10 )
  {
    v5 = v4 + 1;
    v6 = *a2;
    if ( v5 >= 0x1000 )
    {
      v7 = v5 + 39;
      v8 = *(_QWORD *)(v6 - 8);
      v9 = v6 - v8;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v7);
        JUMPOUT(0x18010DB66LL);
      }
      v6 = v8;
    }
    j_j__o_free(v6);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
